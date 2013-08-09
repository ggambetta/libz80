/* coretest.c: Test program for Fuse's Z80 core
   Copyright (c) 2003 Philip Kendall
   Modified for libz80 by Wayne Conrad

   $Id: coretest.c 4060 2009-07-30 13:21:38Z fredm $

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

   Author contact information:

   E-mail: philip-fuse@shadowmagic.org.uk

*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../z80.h"

static const char *progname;		/* argv[0] */
static const char *testsfile;		/* argv[1] */

/* 64Kb of RAM */
static byte initial_memory[ 0x10000 ], memory[ 0x10000 ];

static Z80Context context;

static byte context_mem_read_callback(int param, ushort address)
{
  return memory[address];
}

static void context_mem_write_callback(int param, ushort address, byte data)
{
  memory[address] = data;
}

static byte context_io_read_callback(int param, ushort address)
{
  byte data = address >> 8;
  printf("PR %04x %02x\n", address, data);
  return data;
}

static void context_io_write_callback(int param, ushort address, byte data)
{
  printf("PW %04x %02x\n", address, data);
}

void init_emulator()
{
  context.memRead = context_mem_read_callback;
  context.memWrite = context_mem_write_callback;
  context.ioRead = context_io_read_callback;
  context.ioWrite = context_io_write_callback;
}

#define AF1 context.R1.wr.AF
#define BC1 context.R1.wr.BC
#define DE1 context.R1.wr.DE
#define HL1 context.R1.wr.HL
#define AF2 context.R2.wr.AF
#define BC2 context.R2.wr.BC
#define DE2 context.R2.wr.DE
#define HL2 context.R2.wr.HL
#define IX context.R1.wr.IX
#define IY context.R1.wr.IY
#define SP context.R1.wr.SP
#define PC context.PC
#define I context.I
#define R context.R
#define IFF1 context.IFF1
#define IFF2 context.IFF2
#define IM context.IM

static void fill_memory()
{
  size_t i;
  for( i = 0; i < 0x10000; i += 4 ) {
    memory[ i     ] = 0xde; memory[ i + 1 ] = 0xad;
    memory[ i + 2 ] = 0xbe; memory[ i + 3 ] = 0xef;
  }
}

static void reset()
{
  Z80RESET(&context);
  fill_memory();
}

static int
read_test( FILE *f, unsigned *end_tstates )
{
  unsigned af, bc, de, hl, af_, bc_, de_, hl_, ix, iy, sp, pc;
  unsigned i, r, iff1, iff2, im;
  unsigned end_tstates2;
  unsigned address;
  char test_name[ 80 ];
  do {
    if( !fgets( test_name, sizeof( test_name ), f ) ) {
      if( feof( f ) ) return 1;
      fprintf( stderr, "%s: error reading test description from `%s': %s\n",
	       progname, testsfile, strerror( errno ) );
      return 1;
    }
  } while( test_name[0] == '\n' );
  if( fscanf( f, "%x %x %x %x %x %x %x %x %x %x %x %x", &af, &bc,
	      &de, &hl, &af_, &bc_, &de_, &hl_, &ix, &iy, &sp, &pc ) != 12 ) {
    fprintf( stderr, "%s: first registers line in `%s' corrupt\n", progname,
	     testsfile );
    return 1;
  }
  AF1  = af;  BC1  = bc;  DE1  = de;  HL1  = hl;
  AF2 = af_; BC2 = bc_; DE2 = de_; HL2 = hl_;
  IX  = ix;  IY  = iy;  SP  = sp;  PC  = pc;
  int halted;
  if( fscanf( f, "%x %x %u %u %u %d %d", &i, &r, &iff1, &iff2, &im,
	      &halted, &end_tstates2 ) != 7 ) {
    fprintf( stderr, "%s: second registers line in `%s' corrupt\n", progname,
	     testsfile );
    return 1;
  }
  context.halted = halted;
  I = i; R = r; IFF1 = iff1; IFF2 = iff2; IM = im;
  *end_tstates = end_tstates2;
  while( 1 ) {
    if( fscanf( f, "%x", &address ) != 1 ) {
      fprintf( stderr, "%s: no address found in `%s'\n", progname, testsfile );
      return 1;
    }
    if( address >= 0x10000 ) break;
    while( 1 ) {
      unsigned byte;
      if( fscanf( f, "%x", &byte ) != 1 ) {
	fprintf( stderr, "%s: no data byte found in `%s'\n", progname,
		 testsfile );
	return 1;
      }
      if( byte >= 0x100 ) break;
      memory[ address++ ] = byte;
    }
  }
  printf( "%s", test_name );
  return 0;
}

static void
dump_z80_state( void )
{
  printf( "%04x %04x %04x %04x %04x %04x %04x %04x %04x %04x %04x %04x\n",
	  AF1, BC1, DE1, HL1, AF2, BC2, DE2, HL2, IX, IY, SP, PC );
  printf( "%02x %02x %d %d %d %d %d\n", I, R,
	  IFF1, IFF2, IM, context.halted, context.tstates );
}

static void
dump_memory_state( void )
{
  size_t i;
  for( i = 0; i < 0x10000; i++ ) {
    if( memory[ i ] == initial_memory[ i ] ) continue;
    printf( "%04x ", (unsigned)i );
    while( i < 0x10000 && memory[ i ] != initial_memory[ i ] )
      printf( "%02x ", memory[ i++ ] );
    printf( "-1\n" );
  }
}

static int
run_test( FILE *f )
{
  unsigned end_tstates;
  reset();
  if( read_test( f, &end_tstates ) ) return 0;
  memcpy( initial_memory, memory, 0x10000 );
  while(context.tstates < end_tstates)
    Z80Execute(&context);
  dump_z80_state();
  dump_memory_state();
  printf( "\n" );
  return 1;
}

int parse_args(int argc, char **argv)
{
  progname = argv[0];
  if( argc < 2 ) {
    fprintf( stderr, "Usage: %s <testsfile>\n", progname );
    return 1;
  }
  testsfile = argv[1];
  return 0;
}

int
main( int argc, char **argv )
{
  FILE *f;
  if(parse_args(argc, argv))
    return 1;
  f = fopen( testsfile, "r" );
  if( !f ) {
    fprintf( stderr, "%s: couldn't open tests file `%s': %s\n", progname,
	     testsfile, strerror( errno ) );
    return 1;
  }
  init_emulator();
  while( run_test( f ) ) {
    /* Do nothing */
  }
  if( fclose( f ) ) {
    fprintf( stderr, "%s: couldn't close `%s': %s\n", progname, testsfile,
	     strerror( errno ) );
    return 1;
  }
  return 0;
}
