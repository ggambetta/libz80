static void ADC_A_off_HL (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, read8(ctx, WR.HL), F1_ADC, F2_ADC);
}


static void ADC_A_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	signed char displacement = read8(ctx, ctx->PC++);
	BR.A = doArithmetic(ctx, read8(ctx, WR.IX + displacement), F1_ADC, F2_ADC);
	
}


static void ADC_A_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	signed char displacement = read8(ctx, ctx->PC++);
	BR.A = doArithmetic(ctx, read8(ctx, WR.IY + displacement), F1_ADC, F2_ADC);
	
}


static void ADC_A_A (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.A, F1_ADC, F2_ADC);
}


static void ADC_A_B (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.B, F1_ADC, F2_ADC);
}


static void ADC_A_C (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.C, F1_ADC, F2_ADC);
}


static void ADC_A_D (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.D, F1_ADC, F2_ADC);
}


static void ADC_A_E (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.E, F1_ADC, F2_ADC);
}


static void ADC_A_H (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.H, F1_ADC, F2_ADC);
}


static void ADC_A_IXh (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IXh, F1_ADC, F2_ADC);
}


static void ADC_A_IXl (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IXl, F1_ADC, F2_ADC);
}


static void ADC_A_IYh (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IYh, F1_ADC, F2_ADC);
}


static void ADC_A_IYl (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IYl, F1_ADC, F2_ADC);
}


static void ADC_A_L (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.L, F1_ADC, F2_ADC);
}


static void ADC_A_n (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, read8(ctx, ctx->PC++), F1_ADC, F2_ADC);
}


static void ADC_HL_BC (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.HL = doAddWord(ctx, WR.HL, WR.BC, F1_ADC, F2_ADC);
}


static void ADC_HL_DE (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.HL = doAddWord(ctx, WR.HL, WR.DE, F1_ADC, F2_ADC);
}


static void ADC_HL_HL (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.HL = doAddWord(ctx, WR.HL, WR.HL, F1_ADC, F2_ADC);
}


static void ADC_HL_SP (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.HL = doAddWord(ctx, WR.HL, WR.SP, F1_ADC, F2_ADC);
}


static void ADD_A_off_HL (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, read8(ctx, WR.HL), F1_ADD, F2_ADD);
}


static void ADD_A_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	signed char displacement = read8(ctx, ctx->PC++);
	BR.A = doArithmetic(ctx, read8(ctx, WR.IX + displacement), F1_ADD, F2_ADD);
	
}


static void ADD_A_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	signed char displacement = read8(ctx, ctx->PC++);
	BR.A = doArithmetic(ctx, read8(ctx, WR.IY + displacement), F1_ADD, F2_ADD);
	
}


static void ADD_A_A (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.A, F1_ADD, F2_ADD);
}


static void ADD_A_B (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.B, F1_ADD, F2_ADD);
}


static void ADD_A_C (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.C, F1_ADD, F2_ADD);
}


static void ADD_A_D (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.D, F1_ADD, F2_ADD);
}


static void ADD_A_E (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.E, F1_ADD, F2_ADD);
}


static void ADD_A_H (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.H, F1_ADD, F2_ADD);
}


static void ADD_A_IXh (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IXh, F1_ADD, F2_ADD);
}


static void ADD_A_IXl (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IXl, F1_ADD, F2_ADD);
}


static void ADD_A_IYh (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IYh, F1_ADD, F2_ADD);
}


static void ADD_A_IYl (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IYl, F1_ADD, F2_ADD);
}


static void ADD_A_L (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.L, F1_ADD, F2_ADD);
}


static void ADD_A_n (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, read8(ctx, ctx->PC++), F1_ADD, F2_ADD);
}


static void ADD_HL_BC (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.HL = doAddWord(ctx, WR.HL, WR.BC, F1_ADD, F2_ADD);
}


static void ADD_HL_DE (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.HL = doAddWord(ctx, WR.HL, WR.DE, F1_ADD, F2_ADD);
}


static void ADD_HL_HL (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.HL = doAddWord(ctx, WR.HL, WR.HL, F1_ADD, F2_ADD);
}


static void ADD_HL_SP (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.HL = doAddWord(ctx, WR.HL, WR.SP, F1_ADD, F2_ADD);
}


static void ADD_IX_BC (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.IX = doAddWord(ctx, WR.IX, WR.BC, 0, 0);
}


static void ADD_IX_DE (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.IX = doAddWord(ctx, WR.IX, WR.DE, 0, 0);
}


static void ADD_IX_IX (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.IX = doAddWord(ctx, WR.IX, WR.IX, 0, 0);
}


static void ADD_IX_SP (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.IX = doAddWord(ctx, WR.IX, WR.SP, 0, 0);
}


static void ADD_IY_BC (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.IY = doAddWord(ctx, WR.IY, WR.BC, 0, 0);
}


static void ADD_IY_DE (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.IY = doAddWord(ctx, WR.IY, WR.DE, 0, 0);
}


static void ADD_IY_IY (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.IY = doAddWord(ctx, WR.IY, WR.IY, 0, 0);
}


static void ADD_IY_SP (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.IY = doAddWord(ctx, WR.IY, WR.SP, 0, 0);
}


static void AND_off_HL (Z80Context* ctx)
{
	doAND(ctx, read8(ctx, WR.HL));
}


static void AND_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	doAND(ctx, read8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++)));
}


static void AND_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	doAND(ctx, read8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++)));
}


static void AND_A (Z80Context* ctx)
{
	doAND(ctx, BR.A);
}


static void AND_B (Z80Context* ctx)
{
	doAND(ctx, BR.B);
}


static void AND_C (Z80Context* ctx)
{
	doAND(ctx, BR.C);
}


static void AND_D (Z80Context* ctx)
{
	doAND(ctx, BR.D);
}


static void AND_E (Z80Context* ctx)
{
	doAND(ctx, BR.E);
}


static void AND_H (Z80Context* ctx)
{
	doAND(ctx, BR.H);
}


static void AND_IXh (Z80Context* ctx)
{
	doAND(ctx, BR.IXh);
}


static void AND_IXl (Z80Context* ctx)
{
	doAND(ctx, BR.IXl);
}


static void AND_IYh (Z80Context* ctx)
{
	doAND(ctx, BR.IYh);
}


static void AND_IYl (Z80Context* ctx)
{
	doAND(ctx, BR.IYl);
}


static void AND_L (Z80Context* ctx)
{
	doAND(ctx, BR.L);
}


static void AND_n (Z80Context* ctx)
{
	doAND(ctx, read8(ctx, ctx->PC++));
}


static void BIT_0_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	doBIT_r(ctx, 0, read8(ctx, WR.HL));
}


static void BIT_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IX + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 0, address);
}


static void BIT_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IY + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 0, address);
}


static void BIT_0_A (Z80Context* ctx)
{
	doBIT_r(ctx, 0, BR.A);
}


static void BIT_0_B (Z80Context* ctx)
{
	doBIT_r(ctx, 0, BR.B);
}


static void BIT_0_C (Z80Context* ctx)
{
	doBIT_r(ctx, 0, BR.C);
}


static void BIT_0_D (Z80Context* ctx)
{
	doBIT_r(ctx, 0, BR.D);
}


static void BIT_0_E (Z80Context* ctx)
{
	doBIT_r(ctx, 0, BR.E);
}


static void BIT_0_H (Z80Context* ctx)
{
	doBIT_r(ctx, 0, BR.H);
}


static void BIT_0_L (Z80Context* ctx)
{
	doBIT_r(ctx, 0, BR.L);
}


static void BIT_1_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	doBIT_r(ctx, 1, read8(ctx, WR.HL));
}


static void BIT_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IX + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 1, address);
}


static void BIT_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IY + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 1, address);
}


static void BIT_1_A (Z80Context* ctx)
{
	doBIT_r(ctx, 1, BR.A);
}


static void BIT_1_B (Z80Context* ctx)
{
	doBIT_r(ctx, 1, BR.B);
}


static void BIT_1_C (Z80Context* ctx)
{
	doBIT_r(ctx, 1, BR.C);
}


static void BIT_1_D (Z80Context* ctx)
{
	doBIT_r(ctx, 1, BR.D);
}


static void BIT_1_E (Z80Context* ctx)
{
	doBIT_r(ctx, 1, BR.E);
}


static void BIT_1_H (Z80Context* ctx)
{
	doBIT_r(ctx, 1, BR.H);
}


static void BIT_1_L (Z80Context* ctx)
{
	doBIT_r(ctx, 1, BR.L);
}


static void BIT_2_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	doBIT_r(ctx, 2, read8(ctx, WR.HL));
}


static void BIT_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IX + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 2, address);
}


static void BIT_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IY + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 2, address);
}


static void BIT_2_A (Z80Context* ctx)
{
	doBIT_r(ctx, 2, BR.A);
}


static void BIT_2_B (Z80Context* ctx)
{
	doBIT_r(ctx, 2, BR.B);
}


static void BIT_2_C (Z80Context* ctx)
{
	doBIT_r(ctx, 2, BR.C);
}


static void BIT_2_D (Z80Context* ctx)
{
	doBIT_r(ctx, 2, BR.D);
}


static void BIT_2_E (Z80Context* ctx)
{
	doBIT_r(ctx, 2, BR.E);
}


static void BIT_2_H (Z80Context* ctx)
{
	doBIT_r(ctx, 2, BR.H);
}


static void BIT_2_L (Z80Context* ctx)
{
	doBIT_r(ctx, 2, BR.L);
}


static void BIT_3_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	doBIT_r(ctx, 3, read8(ctx, WR.HL));
}


static void BIT_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IX + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 3, address);
}


static void BIT_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IY + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 3, address);
}


static void BIT_3_A (Z80Context* ctx)
{
	doBIT_r(ctx, 3, BR.A);
}


static void BIT_3_B (Z80Context* ctx)
{
	doBIT_r(ctx, 3, BR.B);
}


static void BIT_3_C (Z80Context* ctx)
{
	doBIT_r(ctx, 3, BR.C);
}


static void BIT_3_D (Z80Context* ctx)
{
	doBIT_r(ctx, 3, BR.D);
}


static void BIT_3_E (Z80Context* ctx)
{
	doBIT_r(ctx, 3, BR.E);
}


static void BIT_3_H (Z80Context* ctx)
{
	doBIT_r(ctx, 3, BR.H);
}


static void BIT_3_L (Z80Context* ctx)
{
	doBIT_r(ctx, 3, BR.L);
}


static void BIT_4_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	doBIT_r(ctx, 4, read8(ctx, WR.HL));
}


static void BIT_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IX + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 4, address);
}


static void BIT_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IY + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 4, address);
}


static void BIT_4_A (Z80Context* ctx)
{
	doBIT_r(ctx, 4, BR.A);
}


static void BIT_4_B (Z80Context* ctx)
{
	doBIT_r(ctx, 4, BR.B);
}


static void BIT_4_C (Z80Context* ctx)
{
	doBIT_r(ctx, 4, BR.C);
}


static void BIT_4_D (Z80Context* ctx)
{
	doBIT_r(ctx, 4, BR.D);
}


static void BIT_4_E (Z80Context* ctx)
{
	doBIT_r(ctx, 4, BR.E);
}


static void BIT_4_H (Z80Context* ctx)
{
	doBIT_r(ctx, 4, BR.H);
}


static void BIT_4_L (Z80Context* ctx)
{
	doBIT_r(ctx, 4, BR.L);
}


static void BIT_5_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	doBIT_r(ctx, 5, read8(ctx, WR.HL));
}


static void BIT_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IX + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 5, address);
}


static void BIT_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IY + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 5, address);
}


static void BIT_5_A (Z80Context* ctx)
{
	doBIT_r(ctx, 5, BR.A);
}


static void BIT_5_B (Z80Context* ctx)
{
	doBIT_r(ctx, 5, BR.B);
}


static void BIT_5_C (Z80Context* ctx)
{
	doBIT_r(ctx, 5, BR.C);
}


static void BIT_5_D (Z80Context* ctx)
{
	doBIT_r(ctx, 5, BR.D);
}


static void BIT_5_E (Z80Context* ctx)
{
	doBIT_r(ctx, 5, BR.E);
}


static void BIT_5_H (Z80Context* ctx)
{
	doBIT_r(ctx, 5, BR.H);
}


static void BIT_5_L (Z80Context* ctx)
{
	doBIT_r(ctx, 5, BR.L);
}


static void BIT_6_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	doBIT_r(ctx, 6, read8(ctx, WR.HL));
}


static void BIT_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IX + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 6, address);
}


static void BIT_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IY + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 6, address);
}


static void BIT_6_A (Z80Context* ctx)
{
	doBIT_r(ctx, 6, BR.A);
}


static void BIT_6_B (Z80Context* ctx)
{
	doBIT_r(ctx, 6, BR.B);
}


static void BIT_6_C (Z80Context* ctx)
{
	doBIT_r(ctx, 6, BR.C);
}


static void BIT_6_D (Z80Context* ctx)
{
	doBIT_r(ctx, 6, BR.D);
}


static void BIT_6_E (Z80Context* ctx)
{
	doBIT_r(ctx, 6, BR.E);
}


static void BIT_6_H (Z80Context* ctx)
{
	doBIT_r(ctx, 6, BR.H);
}


static void BIT_6_L (Z80Context* ctx)
{
	doBIT_r(ctx, 6, BR.L);
}


static void BIT_7_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	doBIT_r(ctx, 7, read8(ctx, WR.HL));
}


static void BIT_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IX + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 7, address);
}


static void BIT_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	ushort address = WR.IY + (signed char) read8(ctx, ctx->PC++);
	doBIT_indexed(ctx, 7, address);
}


static void BIT_7_A (Z80Context* ctx)
{
	doBIT_r(ctx, 7, BR.A);
}


static void BIT_7_B (Z80Context* ctx)
{
	doBIT_r(ctx, 7, BR.B);
}


static void BIT_7_C (Z80Context* ctx)
{
	doBIT_r(ctx, 7, BR.C);
}


static void BIT_7_D (Z80Context* ctx)
{
	doBIT_r(ctx, 7, BR.D);
}


static void BIT_7_E (Z80Context* ctx)
{
	doBIT_r(ctx, 7, BR.E);
}


static void BIT_7_H (Z80Context* ctx)
{
	doBIT_r(ctx, 7, BR.H);
}


static void BIT_7_L (Z80Context* ctx)
{
	doBIT_r(ctx, 7, BR.L);
}


static void CALL_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_))
	{
		ctx->tstates += 1;
		doPush(ctx, ctx->PC);
		ctx->PC = addr;
	}
	
}


static void CALL_C_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_C))
	{
		ctx->tstates += 1;
		doPush(ctx, ctx->PC);
		ctx->PC = addr;
	}
	
}


static void CALL_M_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_M))
	{
		ctx->tstates += 1;
		doPush(ctx, ctx->PC);
		ctx->PC = addr;
	}
	
}


static void CALL_NC_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_NC))
	{
		ctx->tstates += 1;
		doPush(ctx, ctx->PC);
		ctx->PC = addr;
	}
	
}


static void CALL_NZ_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_NZ))
	{
		ctx->tstates += 1;
		doPush(ctx, ctx->PC);
		ctx->PC = addr;
	}
	
}


static void CALL_P_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_P))
	{
		ctx->tstates += 1;
		doPush(ctx, ctx->PC);
		ctx->PC = addr;
	}
	
}


static void CALL_PE_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_PE))
	{
		ctx->tstates += 1;
		doPush(ctx, ctx->PC);
		ctx->PC = addr;
	}
	
}


static void CALL_PO_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_PO))
	{
		ctx->tstates += 1;
		doPush(ctx, ctx->PC);
		ctx->PC = addr;
	}
	
}


static void CALL_Z_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_Z))
	{
		ctx->tstates += 1;
		doPush(ctx, ctx->PC);
		ctx->PC = addr;
	}
	
}


static void CCF (Z80Context* ctx)
{
	VALFLAG(F_C, (1 - (byte)GETFLAG(F_C) != 0));
	RESFLAG(F_N);
	adjustFlags(ctx, BR.A);
}


static void CP_off_HL (Z80Context* ctx)
{
	doCP_HL(ctx);
}


static void CP_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	signed char displacement = read8(ctx, ctx->PC++);
	byte val = read8(ctx, WR.IX + displacement);
	doArithmetic(ctx, val, 0, 1);	
	adjustFlags(ctx, val);
}


static void CP_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	signed char displacement = read8(ctx, ctx->PC++);
	byte val = read8(ctx, WR.IY + displacement);
	doArithmetic(ctx, val, 0, 1);	
	adjustFlags(ctx, val);
}


static void CP_A (Z80Context* ctx)
{
	doArithmetic(ctx, BR.A, 0, 1);	
	adjustFlags(ctx, BR.A);
}


static void CP_B (Z80Context* ctx)
{
	doArithmetic(ctx, BR.B, 0, 1);	
	adjustFlags(ctx, BR.B);
}


static void CP_C (Z80Context* ctx)
{
	doArithmetic(ctx, BR.C, 0, 1);	
	adjustFlags(ctx, BR.C);
}


static void CP_D (Z80Context* ctx)
{
	doArithmetic(ctx, BR.D, 0, 1);	
	adjustFlags(ctx, BR.D);
}


static void CP_E (Z80Context* ctx)
{
	doArithmetic(ctx, BR.E, 0, 1);	
	adjustFlags(ctx, BR.E);
}


static void CP_H (Z80Context* ctx)
{
	doArithmetic(ctx, BR.H, 0, 1);	
	adjustFlags(ctx, BR.H);
}


static void CP_IXh (Z80Context* ctx)
{
	doArithmetic(ctx, BR.IXh, 0, 1);	
	adjustFlags(ctx, BR.IXh);
}


static void CP_IXl (Z80Context* ctx)
{
	doArithmetic(ctx, BR.IXl, 0, 1);	
	adjustFlags(ctx, BR.IXl);
}


static void CP_IYh (Z80Context* ctx)
{
	doArithmetic(ctx, BR.IYh, 0, 1);	
	adjustFlags(ctx, BR.IYh);
}


static void CP_IYl (Z80Context* ctx)
{
	doArithmetic(ctx, BR.IYl, 0, 1);	
	adjustFlags(ctx, BR.IYl);
}


static void CP_L (Z80Context* ctx)
{
	doArithmetic(ctx, BR.L, 0, 1);	
	adjustFlags(ctx, BR.L);
}


static void CP_n (Z80Context* ctx)
{
	byte val = read8(ctx, ctx->PC++);
	doArithmetic(ctx, val, 0, 1);	
	adjustFlags(ctx, val);
}


static void CPD (Z80Context* ctx)
{
	ctx->tstates += 5;
	int carry = GETFLAG(F_C);
	byte value = doCP_HL(ctx);
	if(GETFLAG(F_H))
		value--;
	WR.HL--;
	WR.BC--;
	VALFLAG(F_PV, WR.BC != 0);
	if(carry)
		SETFLAG(F_C);
	else
		RESFLAG(F_C);
	VALFLAG(F_5, value & (1 << 1));
	VALFLAG(F_3, value & (1 << 3));
}


static void CPDR (Z80Context* ctx)
{
	CPD(ctx);
	if (WR.BC != 0 && !GETFLAG(F_Z))
	{
		ctx->tstates += 5;
		ctx->PC -= 2;
	}
}


static void CPI (Z80Context* ctx)
{
	ctx->tstates += 5;
	int carry = GETFLAG(F_C);
	byte value = doCP_HL(ctx);
	if(GETFLAG(F_H))
		value--;
	WR.HL++;
	WR.BC--;
	VALFLAG(F_PV, WR.BC != 0);
	VALFLAG(F_C, carry);
	VALFLAG(F_5, value & (1 << 2));
	VALFLAG(F_3, value & (1 << 3));
}


static void CPIR (Z80Context* ctx)
{
	CPI(ctx);
	if (WR.BC != 0 && !GETFLAG(F_Z))
	{
		ctx->tstates += 5;
		ctx->PC -= 2;
	}
}


static void CPL (Z80Context* ctx)
{
	BR.A = ~BR.A;
	SETFLAG(F_H | F_N);
	adjustFlags(ctx, BR.A);
	
}


static void DAA (Z80Context* ctx)
{
	doDAA(ctx);
	
}


static void DEC_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	byte value = read8(ctx, WR.HL);
	write8(ctx, WR.HL, doIncDec(ctx, value, ID_DEC));
}


static void DEC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 6;
	signed char off = read8(ctx, ctx->PC++);
	byte value = read8(ctx, WR.IX + off);
	write8(ctx, WR.IX + off, doIncDec(ctx, value, ID_DEC));
	
}


static void DEC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 6;
	signed char off = read8(ctx, ctx->PC++);
	byte value = read8(ctx, WR.IY + off);
	write8(ctx, WR.IY + off, doIncDec(ctx, value, ID_DEC));
	
}


static void DEC_A (Z80Context* ctx)
{
	BR.A = doIncDec(ctx, BR.A, ID_DEC);
}


static void DEC_B (Z80Context* ctx)
{
	BR.B = doIncDec(ctx, BR.B, ID_DEC);
}


static void DEC_BC (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.BC--;
}


static void DEC_C (Z80Context* ctx)
{
	BR.C = doIncDec(ctx, BR.C, ID_DEC);
}


static void DEC_D (Z80Context* ctx)
{
	BR.D = doIncDec(ctx, BR.D, ID_DEC);
}


static void DEC_DE (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.DE--;
}


static void DEC_E (Z80Context* ctx)
{
	BR.E = doIncDec(ctx, BR.E, ID_DEC);
}


static void DEC_H (Z80Context* ctx)
{
	BR.H = doIncDec(ctx, BR.H, ID_DEC);
}


static void DEC_HL (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.HL--;
}


static void DEC_IX (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.IX--;
}


static void DEC_IXh (Z80Context* ctx)
{
	BR.IXh = doIncDec(ctx, BR.IXh, ID_DEC);
}


static void DEC_IXl (Z80Context* ctx)
{
	BR.IXl = doIncDec(ctx, BR.IXl, ID_DEC);
}


static void DEC_IY (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.IY--;
}


static void DEC_IYh (Z80Context* ctx)
{
	BR.IYh = doIncDec(ctx, BR.IYh, ID_DEC);
}


static void DEC_IYl (Z80Context* ctx)
{
	BR.IYl = doIncDec(ctx, BR.IYl, ID_DEC);
}


static void DEC_L (Z80Context* ctx)
{
	BR.L = doIncDec(ctx, BR.L, ID_DEC);
}


static void DEC_SP (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.SP--;
}


static void DI (Z80Context* ctx)
{
	ctx->IFF1 = ctx->IFF2 = IE_DI;
	ctx->defer_int = 1;
}


static void DJNZ_off_PC_e (Z80Context* ctx)
{
	ctx->tstates += 1;
	signed char off = read8(ctx, ctx->PC++);
	BR.B--;
	if (BR.B)
	{
		ctx->tstates += 5;
		ctx->PC += off;
	}
}


static void EI (Z80Context* ctx)
{
	ctx->IFF1 = ctx->IFF2 = IE_EI;
	ctx->defer_int = 1;
}


static void EX_off_SP_HL (Z80Context* ctx)
{
	ctx->tstates += 3;
	ushort tmp = read16(ctx, WR.SP);
	write16(ctx, WR.SP, WR.HL);
	WR.HL = tmp;
}


static void EX_off_SP_IX (Z80Context* ctx)
{
	ctx->tstates += 3;
	ushort tmp = read16(ctx, WR.SP);
	write16(ctx, WR.SP, WR.IX);
	WR.IX = tmp;
}


static void EX_off_SP_IY (Z80Context* ctx)
{
	ctx->tstates += 3;
	ushort tmp = read16(ctx, WR.SP);
	write16(ctx, WR.SP, WR.IY);
	WR.IY = tmp;
}


static void EX_AF_AF_ (Z80Context* ctx)
{
	ushort tmp = ctx->R1.wr.AF;
	ctx->R1.wr.AF = ctx->R2.wr.AF;
	ctx->R2.wr.AF = tmp;
}


static void EX_DE_HL (Z80Context* ctx)
{
	ushort tmp = WR.DE;
	WR.DE = WR.HL;
	WR.HL = tmp;
}


static void EXX (Z80Context* ctx)
{
	ushort tmp;	
	tmp = ctx->R1.wr.BC;
	ctx->R1.wr.BC = ctx->R2.wr.BC;
	ctx->R2.wr.BC = tmp;	
	
	tmp = ctx->R1.wr.DE;
	ctx->R1.wr.DE = ctx->R2.wr.DE;
	ctx->R2.wr.DE = tmp;	
	
	tmp = ctx->R1.wr.HL;
	ctx->R1.wr.HL = ctx->R2.wr.HL;
	ctx->R2.wr.HL = tmp;
}


static void HALT (Z80Context* ctx)
{
	ctx->halted = 1;
	ctx->PC--;
}


static void IM_0 (Z80Context* ctx)
{
	ctx->IM = 0;
}


static void IM_1 (Z80Context* ctx)
{
	ctx->IM = 1;
}


static void IM_2 (Z80Context* ctx)
{
	ctx->IM = 2;
}


static void IN_A_off_C (Z80Context* ctx)
{
	BR.A = ioRead(ctx, WR.BC);
	RESFLAG(F_H | F_N);
	adjustFlagSZP(ctx, BR.A);
	adjustFlags(ctx, BR.A);
}


static void IN_A_off_n (Z80Context* ctx)
{
	byte port = read8(ctx, ctx->PC++);	
	BR.A = ioRead(ctx, BR.A << 8 | port);
}


static void IN_B_off_C (Z80Context* ctx)
{
	BR.B = ioRead(ctx, WR.BC);
	RESFLAG(F_H | F_N);
	adjustFlagSZP(ctx, BR.B);
	adjustFlags(ctx, BR.B);
}


static void IN_C_off_C (Z80Context* ctx)
{
	BR.C = ioRead(ctx, WR.BC);
	RESFLAG(F_H | F_N);
	adjustFlagSZP(ctx, BR.C);
	adjustFlags(ctx, BR.C);
}


static void IN_D_off_C (Z80Context* ctx)
{
	BR.D = ioRead(ctx, WR.BC);
	RESFLAG(F_H | F_N);
	adjustFlagSZP(ctx, BR.D);
	adjustFlags(ctx, BR.D);
}


static void IN_E_off_C (Z80Context* ctx)
{
	BR.E = ioRead(ctx, WR.BC);
	RESFLAG(F_H | F_N);
	adjustFlagSZP(ctx, BR.E);
	adjustFlags(ctx, BR.E);
}


static void IN_F_off_C (Z80Context* ctx)
{
	BR.F = ioRead(ctx, WR.BC);
	RESFLAG(F_H | F_N);
	adjustFlagSZP(ctx, BR.F);
	adjustFlags(ctx, BR.F);
}


static void IN_H_off_C (Z80Context* ctx)
{
	BR.H = ioRead(ctx, WR.BC);
	RESFLAG(F_H | F_N);
	adjustFlagSZP(ctx, BR.H);
	adjustFlags(ctx, BR.H);
}


static void IN_L_off_C (Z80Context* ctx)
{
	BR.L = ioRead(ctx, WR.BC);
	RESFLAG(F_H | F_N);
	adjustFlagSZP(ctx, BR.L);
	adjustFlags(ctx, BR.L);
}


static void INC_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	byte value = read8(ctx, WR.HL);
	write8(ctx, WR.HL, doIncDec(ctx, value, ID_INC));
}


static void INC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 6;
	signed char off = read8(ctx, ctx->PC++);
	byte value = read8(ctx, WR.IX + off);
	write8(ctx, WR.IX + off, doIncDec(ctx, value, ID_INC));
	
}


static void INC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 6;
	signed char off = read8(ctx, ctx->PC++);
	byte value = read8(ctx, WR.IY + off);
	write8(ctx, WR.IY + off, doIncDec(ctx, value, ID_INC));
	
}


static void INC_A (Z80Context* ctx)
{
	BR.A = doIncDec(ctx, BR.A, ID_INC);
}


static void INC_B (Z80Context* ctx)
{
	BR.B = doIncDec(ctx, BR.B, ID_INC);
}


static void INC_BC (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.BC++;
}


static void INC_C (Z80Context* ctx)
{
	BR.C = doIncDec(ctx, BR.C, ID_INC);
}


static void INC_D (Z80Context* ctx)
{
	BR.D = doIncDec(ctx, BR.D, ID_INC);
}


static void INC_DE (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.DE++;
}


static void INC_E (Z80Context* ctx)
{
	BR.E = doIncDec(ctx, BR.E, ID_INC);
}


static void INC_H (Z80Context* ctx)
{
	BR.H = doIncDec(ctx, BR.H, ID_INC);
}


static void INC_HL (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.HL++;
}


static void INC_IX (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.IX++;
}


static void INC_IXh (Z80Context* ctx)
{
	BR.IXh = doIncDec(ctx, BR.IXh, ID_INC);
}


static void INC_IXl (Z80Context* ctx)
{
	BR.IXl = doIncDec(ctx, BR.IXl, ID_INC);
}


static void INC_IY (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.IY++;
}


static void INC_IYh (Z80Context* ctx)
{
	BR.IYh = doIncDec(ctx, BR.IYh, ID_INC);
}


static void INC_IYl (Z80Context* ctx)
{
	BR.IYl = doIncDec(ctx, BR.IYl, ID_INC);
}


static void INC_L (Z80Context* ctx)
{
	BR.L = doIncDec(ctx, BR.L, ID_INC);
}


static void INC_SP (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.SP++;
}


static void IND (Z80Context* ctx)
{
	ctx->tstates += 1;
	byte val = ioRead(ctx, WR.BC);
	write8(ctx, WR.HL, val);
	WR.HL--;
	BR.B = doIncDec(ctx, BR.B, ID_DEC);
	VALFLAG(F_N, (val & 0x80) != 0);
	int flagval = val + ((BR.C - 1) & 0xff);
	VALFLAG(F_H, flagval > 0xff);
	VALFLAG(F_C, flagval > 0xff);
	VALFLAG(F_PV, parityBit[(flagval & 7) ^ BR.B]);
}


static void INDR (Z80Context* ctx)
{
	IND(ctx);
	if (BR.B != 0)
	{
		ctx->tstates += 5;
		ctx->PC -= 2;
	}
}


static void INI (Z80Context* ctx)
{
	ctx->tstates += 1;
	byte val = ioRead(ctx, WR.BC);
	write8(ctx, WR.HL, val);
	WR.HL++;
	BR.B = doIncDec(ctx, BR.B, ID_DEC);
	VALFLAG(F_N, (val & 0x80) != 0);
	int flagval = val + ((BR.C + 1) & 0xff);
	VALFLAG(F_H, flagval > 0xff);
	VALFLAG(F_C, flagval > 0xff);
	VALFLAG(F_PV, parityBit[(flagval & 7) ^ BR.B]);
}


static void INIR (Z80Context* ctx)
{
	INI(ctx);
	if (BR.B != 0)
	{
		ctx->tstates += 5;
		ctx->PC -= 2;
	}
}


static void JP_off_HL (Z80Context* ctx)
{
	ctx->PC = WR.HL;
	
}


static void JP_off_IX (Z80Context* ctx)
{
	ctx->PC = WR.IX;
	
}


static void JP_off_IY (Z80Context* ctx)
{
	ctx->PC = WR.IY;
	
}


static void JP_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_))
		ctx->PC = addr;
	
}


static void JP_C_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_C))
		ctx->PC = addr;
	
}


static void JP_M_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_M))
		ctx->PC = addr;
	
}


static void JP_NC_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_NC))
		ctx->PC = addr;
	
}


static void JP_NZ_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_NZ))
		ctx->PC = addr;
	
}


static void JP_P_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_P))
		ctx->PC = addr;
	
}


static void JP_PE_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_PE))
		ctx->PC = addr;
	
}


static void JP_PO_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_PO))
		ctx->PC = addr;
	
}


static void JP_Z_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	if (condition(ctx, C_Z))
		ctx->PC = addr;
	
}


static void JR_off_PC_e (Z80Context* ctx)
{
	int off = doComplement(read8(ctx, ctx->PC++));
	if (condition(ctx, C_))
	{
		ctx->tstates += 5;
		ctx->PC += off;
	}
}


static void JR_C_off_PC_e (Z80Context* ctx)
{
	int off = doComplement(read8(ctx, ctx->PC++));
	if (condition(ctx, C_C))
	{
		ctx->tstates += 5;
		ctx->PC += off;
	}
}


static void JR_NC_off_PC_e (Z80Context* ctx)
{
	int off = doComplement(read8(ctx, ctx->PC++));
	if (condition(ctx, C_NC))
	{
		ctx->tstates += 5;
		ctx->PC += off;
	}
}


static void JR_NZ_off_PC_e (Z80Context* ctx)
{
	int off = doComplement(read8(ctx, ctx->PC++));
	if (condition(ctx, C_NZ))
	{
		ctx->tstates += 5;
		ctx->PC += off;
	}
}


static void JR_Z_off_PC_e (Z80Context* ctx)
{
	int off = doComplement(read8(ctx, ctx->PC++));
	if (condition(ctx, C_Z))
	{
		ctx->tstates += 5;
		ctx->PC += off;
	}
}


static void LD_off_BC_A (Z80Context* ctx)
{
	write8(ctx, WR.BC, BR.A);
}


static void LD_off_DE_A (Z80Context* ctx)
{
	write8(ctx, WR.DE, BR.A);
}


static void LD_off_HL_A (Z80Context* ctx)
{
	write8(ctx, WR.HL, BR.A);
}


static void LD_off_HL_B (Z80Context* ctx)
{
	write8(ctx, WR.HL, BR.B);
}


static void LD_off_HL_C (Z80Context* ctx)
{
	write8(ctx, WR.HL, BR.C);
}


static void LD_off_HL_D (Z80Context* ctx)
{
	write8(ctx, WR.HL, BR.D);
}


static void LD_off_HL_E (Z80Context* ctx)
{
	write8(ctx, WR.HL, BR.E);
}


static void LD_off_HL_H (Z80Context* ctx)
{
	write8(ctx, WR.HL, BR.H);
}


static void LD_off_HL_L (Z80Context* ctx)
{
	write8(ctx, WR.HL, BR.L);
}


static void LD_off_HL_n (Z80Context* ctx)
{
	write8(ctx, WR.HL, read8(ctx, ctx->PC++));
	
}


static void LD_off_IX_d_A (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++), BR.A);
	
}


static void LD_off_IX_d_B (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++), BR.B);
	
}


static void LD_off_IX_d_C (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++), BR.C);
	
}


static void LD_off_IX_d_D (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++), BR.D);
	
}


static void LD_off_IX_d_E (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++), BR.E);
	
}


static void LD_off_IX_d_H (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++), BR.H);
	
}


static void LD_off_IX_d_L (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++), BR.L);
	
}


static void LD_off_IX_d_n (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char offset = read8(ctx, ctx->PC++);
	byte n = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + offset, n);
	
}


static void LD_off_IY_d_A (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++), BR.A);
	
}


static void LD_off_IY_d_B (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++), BR.B);
	
}


static void LD_off_IY_d_C (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++), BR.C);
	
}


static void LD_off_IY_d_D (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++), BR.D);
	
}


static void LD_off_IY_d_E (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++), BR.E);
	
}


static void LD_off_IY_d_H (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++), BR.H);
	
}


static void LD_off_IY_d_L (Z80Context* ctx)
{
	ctx->tstates += 5;
	write8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++), BR.L);
	
}


static void LD_off_IY_d_n (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char offset = read8(ctx, ctx->PC++);
	byte n = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + offset, n);
	
}


static void LD_off_nn_A (Z80Context* ctx)
{
	write8(ctx, read16(ctx, ctx->PC), BR.A);
	ctx->PC += 2;
	
}


static void LD_off_nn_BC (Z80Context* ctx)
{
	write16(ctx, read16(ctx, ctx->PC), WR.BC);
	ctx->PC += 2;
	
}


static void LD_off_nn_DE (Z80Context* ctx)
{
	write16(ctx, read16(ctx, ctx->PC), WR.DE);
	ctx->PC += 2;
	
}


static void LD_off_nn_HL (Z80Context* ctx)
{
	write16(ctx, read16(ctx, ctx->PC), WR.HL);
	ctx->PC += 2;
	
}


static void LD_off_nn_IX (Z80Context* ctx)
{
	write16(ctx, read16(ctx, ctx->PC), WR.IX);
	ctx->PC += 2;
	
}


static void LD_off_nn_IY (Z80Context* ctx)
{
	write16(ctx, read16(ctx, ctx->PC), WR.IY);
	ctx->PC += 2;
	
}


static void LD_off_nn_SP (Z80Context* ctx)
{
	write16(ctx, read16(ctx, ctx->PC), WR.SP);
	ctx->PC += 2;
	
}


static void LD_A_off_BC (Z80Context* ctx)
{
	BR.A = read8(ctx, WR.BC);
}


static void LD_A_off_DE (Z80Context* ctx)
{
	BR.A = read8(ctx, WR.DE);
}


static void LD_A_off_HL (Z80Context* ctx)
{
	BR.A = read8(ctx, WR.HL);
}


static void LD_A_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.A = read8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++));
}


static void LD_A_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.A = read8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++));
}


static void LD_A_off_nn (Z80Context* ctx)
{
	BR.A = read8(ctx, read16(ctx, ctx->PC));
	ctx->PC += 2;
	
}


static void LD_A_A (Z80Context* ctx)
{
	BR.A = BR.A;
}


static void LD_A_B (Z80Context* ctx)
{
	BR.A = BR.B;
}


static void LD_A_C (Z80Context* ctx)
{
	BR.A = BR.C;
}


static void LD_A_D (Z80Context* ctx)
{
	BR.A = BR.D;
}


static void LD_A_E (Z80Context* ctx)
{
	BR.A = BR.E;
}


static void LD_A_H (Z80Context* ctx)
{
	BR.A = BR.H;
}


static void LD_A_I (Z80Context* ctx)
{
	ctx->tstates += 1;
	BR.A = ctx->I;
	adjustFlags(ctx, BR.A);
	RESFLAG(F_H | F_N);
	VALFLAG(F_PV, ctx->IFF2);
	VALFLAG(F_S, (BR.A & 0x80) != 0);
	VALFLAG(F_Z, (BR.A == 0));
	
}


static void LD_A_IXh (Z80Context* ctx)
{
	BR.A = BR.IXh;
}


static void LD_A_IXl (Z80Context* ctx)
{
	BR.A = BR.IXl;
}


static void LD_A_IYh (Z80Context* ctx)
{
	BR.A = BR.IYh;
}


static void LD_A_IYl (Z80Context* ctx)
{
	BR.A = BR.IYl;
}


static void LD_A_L (Z80Context* ctx)
{
	BR.A = BR.L;
}


static void LD_A_n (Z80Context* ctx)
{
	BR.A = read8(ctx, ctx->PC++);
	
}


static void LD_A_R (Z80Context* ctx)
{
	ctx->tstates += 1;
	BR.A = ctx->R;
	adjustFlags(ctx, BR.A);
	RESFLAG(F_H | F_N);
	VALFLAG(F_PV, ctx->IFF2);
	VALFLAG(F_S, (BR.A & 0x80) != 0);
	VALFLAG(F_Z, (BR.A == 0));
	
}


static void LD_A_RES_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_RES_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_RES_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_RES_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_RES_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_RES_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_RES_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_RES_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_RES_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_RES_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_RES_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_RES_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_RES_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_RES_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_RES_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_RES_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_RL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doRL(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);
}


static void LD_A_RL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doRL(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);
}


static void LD_A_RLC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doRLC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);
}


static void LD_A_RLC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doRLC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);
}


static void LD_A_RR_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doRR(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);
}


static void LD_A_RR_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doRR(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);
}


static void LD_A_RRC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doRRC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);
}


static void LD_A_RRC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doRRC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);
}


static void LD_A_SET_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_SET_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_SET_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_SET_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_SET_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_SET_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_SET_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_SET_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_SET_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_SET_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_SET_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_SET_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_SET_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_SET_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_SET_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.A);	
}


static void LD_A_SET_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.A);	
}


static void LD_A_SLA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSL(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.A);	
	
}


static void LD_A_SLA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSL(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.A);	
	
}


static void LD_A_SLL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSL(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.A);	
	  
}


static void LD_A_SLL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSL(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.A);	
	  
}


static void LD_A_SRA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSR(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.A);	
	
}


static void LD_A_SRA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSR(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.A);	
	
}


static void LD_A_SRL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSR(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.A);	
	  
}


static void LD_A_SRL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.A = doSR(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.A);	
	  
}


static void LD_B_off_HL (Z80Context* ctx)
{
	BR.B = read8(ctx, WR.HL);
}


static void LD_B_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.B = read8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++));
}


static void LD_B_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.B = read8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++));
}


static void LD_B_A (Z80Context* ctx)
{
	BR.B = BR.A;
}


static void LD_B_B (Z80Context* ctx)
{
	BR.B = BR.B;
}


static void LD_B_C (Z80Context* ctx)
{
	BR.B = BR.C;
}


static void LD_B_D (Z80Context* ctx)
{
	BR.B = BR.D;
}


static void LD_B_E (Z80Context* ctx)
{
	BR.B = BR.E;
}


static void LD_B_H (Z80Context* ctx)
{
	BR.B = BR.H;
}


static void LD_B_IXh (Z80Context* ctx)
{
	BR.B = BR.IXh;
}


static void LD_B_IXl (Z80Context* ctx)
{
	BR.B = BR.IXl;
}


static void LD_B_IYh (Z80Context* ctx)
{
	BR.B = BR.IYh;
}


static void LD_B_IYl (Z80Context* ctx)
{
	BR.B = BR.IYl;
}


static void LD_B_L (Z80Context* ctx)
{
	BR.B = BR.L;
}


static void LD_B_n (Z80Context* ctx)
{
	BR.B = read8(ctx, ctx->PC++);
	
}


static void LD_B_RES_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_RES_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_RES_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_RES_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_RES_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_RES_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_RES_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_RES_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_RES_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_RES_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_RES_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_RES_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_RES_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_RES_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_RES_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_RES_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_RL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doRL(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);
}


static void LD_B_RL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doRL(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);
}


static void LD_B_RLC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doRLC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);
}


static void LD_B_RLC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doRLC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);
}


static void LD_B_RR_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doRR(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);
}


static void LD_B_RR_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doRR(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);
}


static void LD_B_RRC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doRRC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);
}


static void LD_B_RRC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doRRC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);
}


static void LD_B_SET_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_SET_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_SET_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_SET_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_SET_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_SET_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_SET_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_SET_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_SET_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_SET_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_SET_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_SET_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_SET_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_SET_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_SET_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.B);	
}


static void LD_B_SET_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.B);	
}


static void LD_B_SLA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSL(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.B);	
	
}


static void LD_B_SLA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSL(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.B);	
	
}


static void LD_B_SLL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSL(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.B);	
	  
}


static void LD_B_SLL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSL(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.B);	
	  
}


static void LD_B_SRA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSR(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.B);	
	
}


static void LD_B_SRA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSR(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.B);	
	
}


static void LD_B_SRL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSR(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.B);	
	  
}


static void LD_B_SRL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.B = doSR(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.B);	
	  
}


static void LD_BC_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	WR.BC = read16(ctx, addr);	
}


static void LD_BC_nn (Z80Context* ctx)
{
	WR.BC = read16(ctx, ctx->PC);
	ctx->PC += 2;
	
}


static void LD_C_off_HL (Z80Context* ctx)
{
	BR.C = read8(ctx, WR.HL);
}


static void LD_C_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.C = read8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++));
}


static void LD_C_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.C = read8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++));
}


static void LD_C_A (Z80Context* ctx)
{
	BR.C = BR.A;
}


static void LD_C_B (Z80Context* ctx)
{
	BR.C = BR.B;
}


static void LD_C_C (Z80Context* ctx)
{
	BR.C = BR.C;
}


static void LD_C_D (Z80Context* ctx)
{
	BR.C = BR.D;
}


static void LD_C_E (Z80Context* ctx)
{
	BR.C = BR.E;
}


static void LD_C_H (Z80Context* ctx)
{
	BR.C = BR.H;
}


static void LD_C_IXh (Z80Context* ctx)
{
	BR.C = BR.IXh;
}


static void LD_C_IXl (Z80Context* ctx)
{
	BR.C = BR.IXl;
}


static void LD_C_IYh (Z80Context* ctx)
{
	BR.C = BR.IYh;
}


static void LD_C_IYl (Z80Context* ctx)
{
	BR.C = BR.IYl;
}


static void LD_C_L (Z80Context* ctx)
{
	BR.C = BR.L;
}


static void LD_C_n (Z80Context* ctx)
{
	BR.C = read8(ctx, ctx->PC++);
	
}


static void LD_C_RES_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_RES_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_RES_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_RES_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_RES_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_RES_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_RES_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_RES_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_RES_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_RES_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_RES_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_RES_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_RES_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_RES_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_RES_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_RES_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_RL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doRL(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);
}


static void LD_C_RL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doRL(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);
}


static void LD_C_RLC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doRLC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);
}


static void LD_C_RLC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doRLC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);
}


static void LD_C_RR_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doRR(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);
}


static void LD_C_RR_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doRR(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);
}


static void LD_C_RRC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doRRC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);
}


static void LD_C_RRC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doRRC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);
}


static void LD_C_SET_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_SET_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_SET_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_SET_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_SET_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_SET_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_SET_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_SET_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_SET_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_SET_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_SET_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_SET_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_SET_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_SET_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_SET_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.C);	
}


static void LD_C_SET_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.C);	
}


static void LD_C_SLA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSL(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.C);	
	
}


static void LD_C_SLA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSL(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.C);	
	
}


static void LD_C_SLL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSL(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.C);	
	  
}


static void LD_C_SLL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSL(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.C);	
	  
}


static void LD_C_SRA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSR(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.C);	
	
}


static void LD_C_SRA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSR(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.C);	
	
}


static void LD_C_SRL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSR(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.C);	
	  
}


static void LD_C_SRL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.C = doSR(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.C);	
	  
}


static void LD_D_off_HL (Z80Context* ctx)
{
	BR.D = read8(ctx, WR.HL);
}


static void LD_D_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.D = read8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++));
}


static void LD_D_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.D = read8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++));
}


static void LD_D_A (Z80Context* ctx)
{
	BR.D = BR.A;
}


static void LD_D_B (Z80Context* ctx)
{
	BR.D = BR.B;
}


static void LD_D_C (Z80Context* ctx)
{
	BR.D = BR.C;
}


static void LD_D_D (Z80Context* ctx)
{
	BR.D = BR.D;
}


static void LD_D_E (Z80Context* ctx)
{
	BR.D = BR.E;
}


static void LD_D_H (Z80Context* ctx)
{
	BR.D = BR.H;
}


static void LD_D_IXh (Z80Context* ctx)
{
	BR.D = BR.IXh;
}


static void LD_D_IXl (Z80Context* ctx)
{
	BR.D = BR.IXl;
}


static void LD_D_IYh (Z80Context* ctx)
{
	BR.D = BR.IYh;
}


static void LD_D_IYl (Z80Context* ctx)
{
	BR.D = BR.IYl;
}


static void LD_D_L (Z80Context* ctx)
{
	BR.D = BR.L;
}


static void LD_D_n (Z80Context* ctx)
{
	BR.D = read8(ctx, ctx->PC++);
	
}


static void LD_D_RES_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_RES_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_RES_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_RES_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_RES_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_RES_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_RES_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_RES_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_RES_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_RES_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_RES_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_RES_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_RES_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_RES_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_RES_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_RES_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_RL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doRL(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);
}


static void LD_D_RL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doRL(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);
}


static void LD_D_RLC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doRLC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);
}


static void LD_D_RLC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doRLC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);
}


static void LD_D_RR_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doRR(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);
}


static void LD_D_RR_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doRR(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);
}


static void LD_D_RRC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doRRC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);
}


static void LD_D_RRC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doRRC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);
}


static void LD_D_SET_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_SET_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_SET_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_SET_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_SET_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_SET_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_SET_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_SET_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_SET_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_SET_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_SET_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_SET_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_SET_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_SET_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_SET_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.D);	
}


static void LD_D_SET_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.D);	
}


static void LD_D_SLA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSL(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.D);	
	
}


static void LD_D_SLA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSL(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.D);	
	
}


static void LD_D_SLL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSL(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.D);	
	  
}


static void LD_D_SLL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSL(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.D);	
	  
}


static void LD_D_SRA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSR(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.D);	
	
}


static void LD_D_SRA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSR(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.D);	
	
}


static void LD_D_SRL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSR(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.D);	
	  
}


static void LD_D_SRL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.D = doSR(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.D);	
	  
}


static void LD_DE_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	WR.DE = read16(ctx, addr);	
}


static void LD_DE_nn (Z80Context* ctx)
{
	WR.DE = read16(ctx, ctx->PC);
	ctx->PC += 2;
	
}


static void LD_E_off_HL (Z80Context* ctx)
{
	BR.E = read8(ctx, WR.HL);
}


static void LD_E_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.E = read8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++));
}


static void LD_E_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.E = read8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++));
}


static void LD_E_A (Z80Context* ctx)
{
	BR.E = BR.A;
}


static void LD_E_B (Z80Context* ctx)
{
	BR.E = BR.B;
}


static void LD_E_C (Z80Context* ctx)
{
	BR.E = BR.C;
}


static void LD_E_D (Z80Context* ctx)
{
	BR.E = BR.D;
}


static void LD_E_E (Z80Context* ctx)
{
	BR.E = BR.E;
}


static void LD_E_H (Z80Context* ctx)
{
	BR.E = BR.H;
}


static void LD_E_IXh (Z80Context* ctx)
{
	BR.E = BR.IXh;
}


static void LD_E_IXl (Z80Context* ctx)
{
	BR.E = BR.IXl;
}


static void LD_E_IYh (Z80Context* ctx)
{
	BR.E = BR.IYh;
}


static void LD_E_IYl (Z80Context* ctx)
{
	BR.E = BR.IYl;
}


static void LD_E_L (Z80Context* ctx)
{
	BR.E = BR.L;
}


static void LD_E_n (Z80Context* ctx)
{
	BR.E = read8(ctx, ctx->PC++);
	
}


static void LD_E_RES_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_RES_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_RES_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_RES_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_RES_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_RES_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_RES_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_RES_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_RES_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_RES_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_RES_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_RES_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_RES_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_RES_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_RES_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_RES_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_RL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doRL(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);
}


static void LD_E_RL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doRL(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);
}


static void LD_E_RLC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doRLC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);
}


static void LD_E_RLC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doRLC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);
}


static void LD_E_RR_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doRR(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);
}


static void LD_E_RR_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doRR(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);
}


static void LD_E_RRC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doRRC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);
}


static void LD_E_RRC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doRRC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);
}


static void LD_E_SET_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_SET_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_SET_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_SET_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_SET_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_SET_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_SET_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_SET_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_SET_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_SET_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_SET_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_SET_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_SET_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_SET_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_SET_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.E);	
}


static void LD_E_SET_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.E);	
}


static void LD_E_SLA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSL(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.E);	
	
}


static void LD_E_SLA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSL(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.E);	
	
}


static void LD_E_SLL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSL(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.E);	
	  
}


static void LD_E_SLL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSL(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.E);	
	  
}


static void LD_E_SRA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSR(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.E);	
	
}


static void LD_E_SRA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSR(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.E);	
	
}


static void LD_E_SRL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSR(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.E);	
	  
}


static void LD_E_SRL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.E = doSR(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.E);	
	  
}


static void LD_H_off_HL (Z80Context* ctx)
{
	BR.H = read8(ctx, WR.HL);
}


static void LD_H_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.H = read8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++));
}


static void LD_H_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.H = read8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++));
}


static void LD_H_A (Z80Context* ctx)
{
	BR.H = BR.A;
}


static void LD_H_B (Z80Context* ctx)
{
	BR.H = BR.B;
}


static void LD_H_C (Z80Context* ctx)
{
	BR.H = BR.C;
}


static void LD_H_D (Z80Context* ctx)
{
	BR.H = BR.D;
}


static void LD_H_E (Z80Context* ctx)
{
	BR.H = BR.E;
}


static void LD_H_H (Z80Context* ctx)
{
	BR.H = BR.H;
}


static void LD_H_L (Z80Context* ctx)
{
	BR.H = BR.L;
}


static void LD_H_n (Z80Context* ctx)
{
	BR.H = read8(ctx, ctx->PC++);
	
}


static void LD_H_RES_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_RES_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_RES_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_RES_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_RES_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_RES_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_RES_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_RES_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_RES_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_RES_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_RES_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_RES_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_RES_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_RES_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_RES_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_RES_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_RL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doRL(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);
}


static void LD_H_RL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doRL(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);
}


static void LD_H_RLC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doRLC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);
}


static void LD_H_RLC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doRLC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);
}


static void LD_H_RR_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doRR(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);
}


static void LD_H_RR_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doRR(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);
}


static void LD_H_RRC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doRRC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);
}


static void LD_H_RRC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doRRC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);
}


static void LD_H_SET_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_SET_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_SET_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_SET_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_SET_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_SET_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_SET_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_SET_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_SET_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_SET_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_SET_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_SET_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_SET_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_SET_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_SET_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.H);	
}


static void LD_H_SET_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.H);	
}


static void LD_H_SLA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSL(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.H);	
	
}


static void LD_H_SLA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSL(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.H);	
	
}


static void LD_H_SLL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSL(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.H);	
	  
}


static void LD_H_SLL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSL(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.H);	
	  
}


static void LD_H_SRA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSR(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.H);	
	
}


static void LD_H_SRA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSR(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.H);	
	
}


static void LD_H_SRL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSR(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.H);	
	  
}


static void LD_H_SRL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.H = doSR(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.H);	
	  
}


static void LD_HL_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	WR.HL = read16(ctx, addr);	
}


static void LD_HL_nn (Z80Context* ctx)
{
	WR.HL = read16(ctx, ctx->PC);
	ctx->PC += 2;
	
}


static void LD_I_A (Z80Context* ctx)
{
	ctx->tstates += 1;
	ctx->I = BR.A;
}


static void LD_IX_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	WR.IX = read16(ctx, addr);	
}


static void LD_IX_nn (Z80Context* ctx)
{
	WR.IX = read16(ctx, ctx->PC);
	ctx->PC += 2;
	
}


static void LD_IXh_A (Z80Context* ctx)
{
	BR.IXh = BR.A;
}


static void LD_IXh_B (Z80Context* ctx)
{
	BR.IXh = BR.B;
}


static void LD_IXh_C (Z80Context* ctx)
{
	BR.IXh = BR.C;
}


static void LD_IXh_D (Z80Context* ctx)
{
	BR.IXh = BR.D;
}


static void LD_IXh_E (Z80Context* ctx)
{
	BR.IXh = BR.E;
}


static void LD_IXh_IXh (Z80Context* ctx)
{
	BR.IXh = BR.IXh;
}


static void LD_IXh_IXl (Z80Context* ctx)
{
	BR.IXh = BR.IXl;
}


static void LD_IXh_n (Z80Context* ctx)
{
	BR.IXh = read8(ctx, ctx->PC++);
	
}


static void LD_IXl_A (Z80Context* ctx)
{
	BR.IXl = BR.A;
}


static void LD_IXl_B (Z80Context* ctx)
{
	BR.IXl = BR.B;
}


static void LD_IXl_C (Z80Context* ctx)
{
	BR.IXl = BR.C;
}


static void LD_IXl_D (Z80Context* ctx)
{
	BR.IXl = BR.D;
}


static void LD_IXl_E (Z80Context* ctx)
{
	BR.IXl = BR.E;
}


static void LD_IXl_IXh (Z80Context* ctx)
{
	BR.IXl = BR.IXh;
}


static void LD_IXl_IXl (Z80Context* ctx)
{
	BR.IXl = BR.IXl;
}


static void LD_IXl_n (Z80Context* ctx)
{
	BR.IXl = read8(ctx, ctx->PC++);
	
}


static void LD_IY_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	WR.IY = read16(ctx, addr);	
}


static void LD_IY_nn (Z80Context* ctx)
{
	WR.IY = read16(ctx, ctx->PC);
	ctx->PC += 2;
	
}


static void LD_IYh_A (Z80Context* ctx)
{
	BR.IYh = BR.A;
}


static void LD_IYh_B (Z80Context* ctx)
{
	BR.IYh = BR.B;
}


static void LD_IYh_C (Z80Context* ctx)
{
	BR.IYh = BR.C;
}


static void LD_IYh_D (Z80Context* ctx)
{
	BR.IYh = BR.D;
}


static void LD_IYh_E (Z80Context* ctx)
{
	BR.IYh = BR.E;
}


static void LD_IYh_IYh (Z80Context* ctx)
{
	BR.IYh = BR.IYh;
}


static void LD_IYh_IYl (Z80Context* ctx)
{
	BR.IYh = BR.IYl;
}


static void LD_IYh_n (Z80Context* ctx)
{
	BR.IYh = read8(ctx, ctx->PC++);
	
}


static void LD_IYl_A (Z80Context* ctx)
{
	BR.IYl = BR.A;
}


static void LD_IYl_B (Z80Context* ctx)
{
	BR.IYl = BR.B;
}


static void LD_IYl_C (Z80Context* ctx)
{
	BR.IYl = BR.C;
}


static void LD_IYl_D (Z80Context* ctx)
{
	BR.IYl = BR.D;
}


static void LD_IYl_E (Z80Context* ctx)
{
	BR.IYl = BR.E;
}


static void LD_IYl_IYh (Z80Context* ctx)
{
	BR.IYl = BR.IYh;
}


static void LD_IYl_IYl (Z80Context* ctx)
{
	BR.IYl = BR.IYl;
}


static void LD_IYl_n (Z80Context* ctx)
{
	BR.IYl = read8(ctx, ctx->PC++);
	
}


static void LD_L_off_HL (Z80Context* ctx)
{
	BR.L = read8(ctx, WR.HL);
}


static void LD_L_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.L = read8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++));
}


static void LD_L_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	BR.L = read8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++));
}


static void LD_L_A (Z80Context* ctx)
{
	BR.L = BR.A;
}


static void LD_L_B (Z80Context* ctx)
{
	BR.L = BR.B;
}


static void LD_L_C (Z80Context* ctx)
{
	BR.L = BR.C;
}


static void LD_L_D (Z80Context* ctx)
{
	BR.L = BR.D;
}


static void LD_L_E (Z80Context* ctx)
{
	BR.L = BR.E;
}


static void LD_L_H (Z80Context* ctx)
{
	BR.L = BR.H;
}


static void LD_L_L (Z80Context* ctx)
{
	BR.L = BR.L;
}


static void LD_L_n (Z80Context* ctx)
{
	BR.L = read8(ctx, ctx->PC++);
	
}


static void LD_L_RES_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_RES_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_RES_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_RES_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_RES_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_RES_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_RES_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_RES_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_RES_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_RES_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_RES_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_RES_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_RES_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_RES_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_RES_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_RES_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_RL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doRL(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);
}


static void LD_L_RL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doRL(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);
}


static void LD_L_RLC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doRLC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);
}


static void LD_L_RLC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doRLC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);
}


static void LD_L_RR_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doRR(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);
}


static void LD_L_RR_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doRR(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);
}


static void LD_L_RRC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doRRC(ctx, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);
}


static void LD_L_RRC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doRRC(ctx, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);
}


static void LD_L_SET_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_SET_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_SET_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_SET_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_SET_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_SET_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_SET_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_SET_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_SET_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_SET_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_SET_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_SET_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_SET_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_SET_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_SET_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IX + off));
	write8(ctx, WR.IX + off, BR.L);	
}


static void LD_L_SET_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IY + off));
	write8(ctx, WR.IY + off, BR.L);	
}


static void LD_L_SLA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSL(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.L);	
	
}


static void LD_L_SLA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSL(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.L);	
	
}


static void LD_L_SLL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSL(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.L);	
	  
}


static void LD_L_SLL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSL(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.L);	
	  
}


static void LD_L_SRA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSR(ctx, read8(ctx, WR.IX + off), 1);
	write8(ctx, WR.IX + off, BR.L);	
	
}


static void LD_L_SRA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSR(ctx, read8(ctx, WR.IY + off), 1);
	write8(ctx, WR.IY + off, BR.L);	
	
}


static void LD_L_SRL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSR(ctx, read8(ctx, WR.IX + off), 0);
	write8(ctx, WR.IX + off, BR.L);	
	  
}


static void LD_L_SRL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	BR.L = doSR(ctx, read8(ctx, WR.IY + off), 0);
	write8(ctx, WR.IY + off, BR.L);	
	  
}


static void LD_R_A (Z80Context* ctx)
{
	ctx->tstates += 1;
	ctx->R = BR.A;
}


static void LD_SP_off_nn (Z80Context* ctx)
{
	ushort addr = read16(ctx, ctx->PC);
	ctx->PC += 2;
	WR.SP = read16(ctx, addr);	
}


static void LD_SP_HL (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.SP = WR.HL;
}


static void LD_SP_IX (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.SP = WR.IX;
}


static void LD_SP_IY (Z80Context* ctx)
{
	ctx->tstates += 2;
	WR.SP = WR.IY;
}


static void LD_SP_nn (Z80Context* ctx)
{
	WR.SP = read16(ctx, ctx->PC);
	ctx->PC += 2;
	
}


static void LDD (Z80Context* ctx)
{
	ctx->tstates += 2;
	byte val = read8(ctx, WR.HL);
	write8(ctx, WR.DE, val);
	WR.DE--;
	WR.HL--;
	WR.BC--;
	VALFLAG(F_5, ((BR.A + val) & 0x02) != 0);
	VALFLAG(F_3, ((BR.A + val) & F_3) != 0);
	RESFLAG(F_H | F_N);
	VALFLAG(F_PV, WR.BC != 0);
}


static void LDDR (Z80Context* ctx)
{
	LDD(ctx);
	if (WR.BC != 0)
	{
		ctx->tstates += 5;
		ctx->PC -= 2;
	}
}


static void LDI (Z80Context* ctx)
{
	ctx->tstates += 2;
	byte val = read8(ctx, WR.HL);
	write8(ctx, WR.DE, val);
	WR.DE++;
	WR.HL++;
	WR.BC--;
	VALFLAG(F_5, (BR.A + val) & 0x02);
	VALFLAG(F_3, ((BR.A + val) & F_3) != 0);
	RESFLAG(F_H | F_N);
	VALFLAG(F_PV, WR.BC != 0);
}


static void LDIR (Z80Context* ctx)
{
	LDI(ctx);
	if (WR.BC != 0)
	{
		ctx->tstates += 5;
		ctx->PC -= 2;
	}
}


static void NEG (Z80Context* ctx)
{
	int temp = BR.A;
	BR.A = 0;
	BR.A = doArithmetic(ctx, temp, 0, 1);
	SETFLAG(F_N);
}


static void NOP (Z80Context* ctx)
{
	/* NOP */
	
}


static void OR_off_HL (Z80Context* ctx)
{
	doOR(ctx, read8(ctx, WR.HL));
}


static void OR_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	doOR(ctx, read8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++)));
}


static void OR_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	doOR(ctx, read8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++)));
}


static void OR_A (Z80Context* ctx)
{
	doOR(ctx, BR.A);
}


static void OR_B (Z80Context* ctx)
{
	doOR(ctx, BR.B);
}


static void OR_C (Z80Context* ctx)
{
	doOR(ctx, BR.C);
}


static void OR_D (Z80Context* ctx)
{
	doOR(ctx, BR.D);
}


static void OR_E (Z80Context* ctx)
{
	doOR(ctx, BR.E);
}


static void OR_H (Z80Context* ctx)
{
	doOR(ctx, BR.H);
}


static void OR_IXh (Z80Context* ctx)
{
	doOR(ctx, BR.IXh);
}


static void OR_IXl (Z80Context* ctx)
{
	doOR(ctx, BR.IXl);
}


static void OR_IYh (Z80Context* ctx)
{
	doOR(ctx, BR.IYh);
}


static void OR_IYl (Z80Context* ctx)
{
	doOR(ctx, BR.IYl);
}


static void OR_L (Z80Context* ctx)
{
	doOR(ctx, BR.L);
}


static void OR_n (Z80Context* ctx)
{
	doOR(ctx, read8(ctx, ctx->PC++));
}


static void OTDR (Z80Context* ctx)
{
	OUTD(ctx);
	if (BR.B != 0)
	{
		ctx->tstates += 5;
		ctx->PC -= 2;
	}
}


static void OTIR (Z80Context* ctx)
{
	OUTI(ctx);
	if (BR.B != 0)
	{
		ctx->tstates += 5;
		ctx->PC -= 2;
	}
}


static void OUT_off_C_0 (Z80Context* ctx)
{
	ioWrite(ctx, WR.BC, 0);
	
}


static void OUT_off_C_A (Z80Context* ctx)
{
	ioWrite(ctx, WR.BC, BR.A);
}


static void OUT_off_C_B (Z80Context* ctx)
{
	ioWrite(ctx, WR.BC, BR.B);
}


static void OUT_off_C_C (Z80Context* ctx)
{
	ioWrite(ctx, WR.BC, BR.C);
}


static void OUT_off_C_D (Z80Context* ctx)
{
	ioWrite(ctx, WR.BC, BR.D);
}


static void OUT_off_C_E (Z80Context* ctx)
{
	ioWrite(ctx, WR.BC, BR.E);
}


static void OUT_off_C_H (Z80Context* ctx)
{
	ioWrite(ctx, WR.BC, BR.H);
}


static void OUT_off_C_L (Z80Context* ctx)
{
	ioWrite(ctx, WR.BC, BR.L);
}


static void OUT_off_n_A (Z80Context* ctx)
{
	ioWrite(ctx, BR.A << 8 | read8(ctx, ctx->PC++), BR.A);
}


static void OUTD (Z80Context* ctx)
{
	ctx->tstates += 1;
	byte value = read8(ctx, WR.HL);
	BR.B = doIncDec(ctx, BR.B, 1);
	ioWrite(ctx, WR.BC, value);
	WR.HL--;
	int flag_value = value + BR.L;
	VALFLAG(F_N, value & 0x80);
	VALFLAG(F_H, flag_value > 0xff);
	VALFLAG(F_C, flag_value > 0xff);
	VALFLAG(F_PV, parityBit[(flag_value & 7) ^ BR.B]);
	adjustFlags(ctx, BR.B);
}


static void OUTI (Z80Context* ctx)
{
	ctx->tstates += 1;
	byte value = read8(ctx, WR.HL);
	BR.B = doIncDec(ctx, BR.B, 1);
	ioWrite(ctx, WR.BC, value);
	WR.HL++;
	int flag_value = value + BR.L;
	VALFLAG(F_N, value & 0x80);
	VALFLAG(F_H, flag_value > 0xff);
	VALFLAG(F_C, flag_value > 0xff);
	VALFLAG(F_PV, parityBit[(flag_value & 7) ^ BR.B]);
	adjustFlags(ctx, BR.B);
}


static void POP_AF (Z80Context* ctx)
{
	WR.AF = doPop(ctx);
}


static void POP_BC (Z80Context* ctx)
{
	WR.BC = doPop(ctx);
}


static void POP_DE (Z80Context* ctx)
{
	WR.DE = doPop(ctx);
}


static void POP_HL (Z80Context* ctx)
{
	WR.HL = doPop(ctx);
}


static void POP_IX (Z80Context* ctx)
{
	WR.IX = doPop(ctx);
}


static void POP_IY (Z80Context* ctx)
{
	WR.IY = doPop(ctx);
}


static void PUSH_AF (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, WR.AF);
}


static void PUSH_BC (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, WR.BC);
}


static void PUSH_DE (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, WR.DE);
}


static void PUSH_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, WR.HL);
}


static void PUSH_IX (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, WR.IX);
}


static void PUSH_IY (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, WR.IY);
}


static void RES_0_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_RES, 0, read8(ctx, WR.HL)));
}


static void RES_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IX + off)));
	
	
}


static void RES_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_RES, 0, read8(ctx, WR.IY + off)));
	
	
}


static void RES_0_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_RES, 0, BR.A);
}


static void RES_0_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_RES, 0, BR.B);
}


static void RES_0_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_RES, 0, BR.C);
}


static void RES_0_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_RES, 0, BR.D);
}


static void RES_0_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_RES, 0, BR.E);
}


static void RES_0_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_RES, 0, BR.H);
}


static void RES_0_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_RES, 0, BR.L);
}


static void RES_1_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_RES, 1, read8(ctx, WR.HL)));
}


static void RES_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IX + off)));
	
	
}


static void RES_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_RES, 1, read8(ctx, WR.IY + off)));
	
	
}


static void RES_1_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_RES, 1, BR.A);
}


static void RES_1_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_RES, 1, BR.B);
}


static void RES_1_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_RES, 1, BR.C);
}


static void RES_1_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_RES, 1, BR.D);
}


static void RES_1_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_RES, 1, BR.E);
}


static void RES_1_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_RES, 1, BR.H);
}


static void RES_1_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_RES, 1, BR.L);
}


static void RES_2_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_RES, 2, read8(ctx, WR.HL)));
}


static void RES_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IX + off)));
	
	
}


static void RES_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_RES, 2, read8(ctx, WR.IY + off)));
	
	
}


static void RES_2_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_RES, 2, BR.A);
}


static void RES_2_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_RES, 2, BR.B);
}


static void RES_2_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_RES, 2, BR.C);
}


static void RES_2_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_RES, 2, BR.D);
}


static void RES_2_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_RES, 2, BR.E);
}


static void RES_2_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_RES, 2, BR.H);
}


static void RES_2_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_RES, 2, BR.L);
}


static void RES_3_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_RES, 3, read8(ctx, WR.HL)));
}


static void RES_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IX + off)));
	
	
}


static void RES_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_RES, 3, read8(ctx, WR.IY + off)));
	
	
}


static void RES_3_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_RES, 3, BR.A);
}


static void RES_3_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_RES, 3, BR.B);
}


static void RES_3_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_RES, 3, BR.C);
}


static void RES_3_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_RES, 3, BR.D);
}


static void RES_3_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_RES, 3, BR.E);
}


static void RES_3_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_RES, 3, BR.H);
}


static void RES_3_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_RES, 3, BR.L);
}


static void RES_4_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_RES, 4, read8(ctx, WR.HL)));
}


static void RES_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IX + off)));
	
	
}


static void RES_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_RES, 4, read8(ctx, WR.IY + off)));
	
	
}


static void RES_4_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_RES, 4, BR.A);
}


static void RES_4_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_RES, 4, BR.B);
}


static void RES_4_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_RES, 4, BR.C);
}


static void RES_4_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_RES, 4, BR.D);
}


static void RES_4_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_RES, 4, BR.E);
}


static void RES_4_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_RES, 4, BR.H);
}


static void RES_4_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_RES, 4, BR.L);
}


static void RES_5_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_RES, 5, read8(ctx, WR.HL)));
}


static void RES_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IX + off)));
	
	
}


static void RES_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_RES, 5, read8(ctx, WR.IY + off)));
	
	
}


static void RES_5_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_RES, 5, BR.A);
}


static void RES_5_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_RES, 5, BR.B);
}


static void RES_5_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_RES, 5, BR.C);
}


static void RES_5_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_RES, 5, BR.D);
}


static void RES_5_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_RES, 5, BR.E);
}


static void RES_5_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_RES, 5, BR.H);
}


static void RES_5_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_RES, 5, BR.L);
}


static void RES_6_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_RES, 6, read8(ctx, WR.HL)));
}


static void RES_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IX + off)));
	
	
}


static void RES_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_RES, 6, read8(ctx, WR.IY + off)));
	
	
}


static void RES_6_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_RES, 6, BR.A);
}


static void RES_6_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_RES, 6, BR.B);
}


static void RES_6_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_RES, 6, BR.C);
}


static void RES_6_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_RES, 6, BR.D);
}


static void RES_6_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_RES, 6, BR.E);
}


static void RES_6_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_RES, 6, BR.H);
}


static void RES_6_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_RES, 6, BR.L);
}


static void RES_7_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_RES, 7, read8(ctx, WR.HL)));
}


static void RES_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IX + off)));
	
	
}


static void RES_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_RES, 7, read8(ctx, WR.IY + off)));
	
	
}


static void RES_7_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_RES, 7, BR.A);
}


static void RES_7_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_RES, 7, BR.B);
}


static void RES_7_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_RES, 7, BR.C);
}


static void RES_7_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_RES, 7, BR.D);
}


static void RES_7_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_RES, 7, BR.E);
}


static void RES_7_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_RES, 7, BR.H);
}


static void RES_7_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_RES, 7, BR.L);
}


static void RET (Z80Context* ctx)
{
	ctx->PC = doPop(ctx);
}


static void RET_C (Z80Context* ctx)
{
	ctx->tstates += 1;
	if (condition(ctx, C_C))
		ctx->PC = doPop(ctx);
		
}


static void RET_M (Z80Context* ctx)
{
	ctx->tstates += 1;
	if (condition(ctx, C_M))
		ctx->PC = doPop(ctx);
		
}


static void RET_NC (Z80Context* ctx)
{
	ctx->tstates += 1;
	if (condition(ctx, C_NC))
		ctx->PC = doPop(ctx);
		
}


static void RET_NZ (Z80Context* ctx)
{
	ctx->tstates += 1;
	if (condition(ctx, C_NZ))
		ctx->PC = doPop(ctx);
		
}


static void RET_P (Z80Context* ctx)
{
	ctx->tstates += 1;
	if (condition(ctx, C_P))
		ctx->PC = doPop(ctx);
		
}


static void RET_PE (Z80Context* ctx)
{
	ctx->tstates += 1;
	if (condition(ctx, C_PE))
		ctx->PC = doPop(ctx);
		
}


static void RET_PO (Z80Context* ctx)
{
	ctx->tstates += 1;
	if (condition(ctx, C_PO))
		ctx->PC = doPop(ctx);
		
}


static void RET_Z (Z80Context* ctx)
{
	ctx->tstates += 1;
	if (condition(ctx, C_Z))
		ctx->PC = doPop(ctx);
		
}


static void RETI (Z80Context* ctx)
{
	ctx->IFF1 = ctx->IFF2;
	RET		(ctx);
		
}


static void RETN (Z80Context* ctx)
{
	ctx->IFF1 = ctx->IFF2;
	RET(ctx);
}


static void RL_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doRL(ctx, 1, read8(ctx, WR.HL)));
	
}


static void RL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doRL(ctx, 1, read8(ctx, WR.IX + off)));
}


static void RL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doRL(ctx, 1, read8(ctx, WR.IY + off)));
}


static void RL_A (Z80Context* ctx)
{
	BR.A = doRL(ctx, 1, BR.A);
}


static void RL_B (Z80Context* ctx)
{
	BR.B = doRL(ctx, 1, BR.B);
}


static void RL_C (Z80Context* ctx)
{
	BR.C = doRL(ctx, 1, BR.C);
}


static void RL_D (Z80Context* ctx)
{
	BR.D = doRL(ctx, 1, BR.D);
}


static void RL_E (Z80Context* ctx)
{
	BR.E = doRL(ctx, 1, BR.E);
}


static void RL_H (Z80Context* ctx)
{
	BR.H = doRL(ctx, 1, BR.H);
}


static void RL_L (Z80Context* ctx)
{
	BR.L = doRL(ctx, 1, BR.L);
}


static void RLA (Z80Context* ctx)
{
	BR.A = doRL(ctx, 0, BR.A);
	
	
}


static void RLC_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doRLC(ctx, 1, read8(ctx, WR.HL)));
	
}


static void RLC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doRLC(ctx, 1, read8(ctx, WR.IX + off)));
}


static void RLC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doRLC(ctx, 1, read8(ctx, WR.IY + off)));
}


static void RLC_A (Z80Context* ctx)
{
	BR.A = doRLC(ctx, 1, BR.A);
}


static void RLC_B (Z80Context* ctx)
{
	BR.B = doRLC(ctx, 1, BR.B);
}


static void RLC_C (Z80Context* ctx)
{
	BR.C = doRLC(ctx, 1, BR.C);
}


static void RLC_D (Z80Context* ctx)
{
	BR.D = doRLC(ctx, 1, BR.D);
}


static void RLC_E (Z80Context* ctx)
{
	BR.E = doRLC(ctx, 1, BR.E);
}


static void RLC_H (Z80Context* ctx)
{
	BR.H = doRLC(ctx, 1, BR.H);
}


static void RLC_L (Z80Context* ctx)
{
	BR.L = doRLC(ctx, 1, BR.L);
}


static void RLCA (Z80Context* ctx)
{
	BR.A = doRLC(ctx, 0, BR.A);
	
	
}


static void RLD (Z80Context* ctx)
{
	ctx->tstates += 4;
	byte Ah = BR.A & 0x0f;
	byte hl = read8(ctx, WR.HL);
	BR.A = (BR.A & 0xf0) | ((hl & 0xf0) >> 4);
	hl = (hl << 4) | Ah;
	write8(ctx, WR.HL, hl);
	RESFLAG(F_H | F_N);
	adjustFlagSZP(ctx, BR.A);
	adjustFlags(ctx, BR.A);
}


static void RR_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doRR(ctx, 1, read8(ctx, WR.HL)));
	
}


static void RR_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doRR(ctx, 1, read8(ctx, WR.IX + off)));
}


static void RR_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doRR(ctx, 1, read8(ctx, WR.IY + off)));
}


static void RR_A (Z80Context* ctx)
{
	BR.A = doRR(ctx, 1, BR.A);
}


static void RR_B (Z80Context* ctx)
{
	BR.B = doRR(ctx, 1, BR.B);
}


static void RR_C (Z80Context* ctx)
{
	BR.C = doRR(ctx, 1, BR.C);
}


static void RR_D (Z80Context* ctx)
{
	BR.D = doRR(ctx, 1, BR.D);
}


static void RR_E (Z80Context* ctx)
{
	BR.E = doRR(ctx, 1, BR.E);
}


static void RR_H (Z80Context* ctx)
{
	BR.H = doRR(ctx, 1, BR.H);
}


static void RR_L (Z80Context* ctx)
{
	BR.L = doRR(ctx, 1, BR.L);
}


static void RRA (Z80Context* ctx)
{
	BR.A = doRR(ctx, 0, BR.A);
	
	
}


static void RRC_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doRRC(ctx, 1, read8(ctx, WR.HL)));
	
}


static void RRC_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doRRC(ctx, 1, read8(ctx, WR.IX + off)));
}


static void RRC_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doRRC(ctx, 1, read8(ctx, WR.IY + off)));
}


static void RRC_A (Z80Context* ctx)
{
	BR.A = doRRC(ctx, 1, BR.A);
}


static void RRC_B (Z80Context* ctx)
{
	BR.B = doRRC(ctx, 1, BR.B);
}


static void RRC_C (Z80Context* ctx)
{
	BR.C = doRRC(ctx, 1, BR.C);
}


static void RRC_D (Z80Context* ctx)
{
	BR.D = doRRC(ctx, 1, BR.D);
}


static void RRC_E (Z80Context* ctx)
{
	BR.E = doRRC(ctx, 1, BR.E);
}


static void RRC_H (Z80Context* ctx)
{
	BR.H = doRRC(ctx, 1, BR.H);
}


static void RRC_L (Z80Context* ctx)
{
	BR.L = doRRC(ctx, 1, BR.L);
}


static void RRCA (Z80Context* ctx)
{
	BR.A = doRRC(ctx, 0, BR.A);
	
	
}


static void RRD (Z80Context* ctx)
{
	ctx->tstates += 4;
	byte Ah = BR.A & 0x0f;
	byte hl = read8(ctx, WR.HL);
	BR.A = (BR.A & 0xf0) | (hl & 0x0f);
	hl = (hl >> 4) | (Ah << 4);
	write8(ctx, WR.HL, hl);
	RESFLAG(F_H | F_N);
	adjustFlagSZP(ctx, BR.A);
}


static void RST_0H (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, ctx->PC);
	ctx->PC = 0x00;
	
	
}


static void RST_10H (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, ctx->PC);
	ctx->PC = 0x010;
	
	
}


static void RST_18H (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, ctx->PC);
	ctx->PC = 0x018;
	
	
}


static void RST_20H (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, ctx->PC);
	ctx->PC = 0x020;
	
	
}


static void RST_28H (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, ctx->PC);
	ctx->PC = 0x028;
	
	
}


static void RST_30H (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, ctx->PC);
	ctx->PC = 0x030;
	
	
}


static void RST_38H (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, ctx->PC);
	ctx->PC = 0x038;
	
	
}


static void RST_8H (Z80Context* ctx)
{
	ctx->tstates += 1;
	doPush(ctx, ctx->PC);
	ctx->PC = 0x08;
	
	
}


static void SBC_A_off_HL (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, read8(ctx, WR.HL), F1_SBC, F2_SBC);
}


static void SBC_A_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	signed char displacement = read8(ctx, ctx->PC++);
	BR.A = doArithmetic(ctx, read8(ctx, WR.IX + displacement), F1_SBC, F2_SBC);
	
}


static void SBC_A_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	signed char displacement = read8(ctx, ctx->PC++);
	BR.A = doArithmetic(ctx, read8(ctx, WR.IY + displacement), F1_SBC, F2_SBC);
	
}


static void SBC_A_A (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.A, F1_SBC, F2_SBC);
}


static void SBC_A_B (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.B, F1_SBC, F2_SBC);
}


static void SBC_A_C (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.C, F1_SBC, F2_SBC);
}


static void SBC_A_D (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.D, F1_SBC, F2_SBC);
}


static void SBC_A_E (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.E, F1_SBC, F2_SBC);
}


static void SBC_A_H (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.H, F1_SBC, F2_SBC);
}


static void SBC_A_IXh (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IXh, F1_SBC, F2_SBC);
}


static void SBC_A_IXl (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IXl, F1_SBC, F2_SBC);
}


static void SBC_A_IYh (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IYh, F1_SBC, F2_SBC);
}


static void SBC_A_IYl (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IYl, F1_SBC, F2_SBC);
}


static void SBC_A_L (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.L, F1_SBC, F2_SBC);
}


static void SBC_A_n (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, read8(ctx, ctx->PC++), F1_SBC, F2_SBC);
}


static void SBC_HL_BC (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.HL = doAddWord(ctx, WR.HL, WR.BC, F1_SBC, F2_SBC);
}


static void SBC_HL_DE (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.HL = doAddWord(ctx, WR.HL, WR.DE, F1_SBC, F2_SBC);
}


static void SBC_HL_HL (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.HL = doAddWord(ctx, WR.HL, WR.HL, F1_SBC, F2_SBC);
}


static void SBC_HL_SP (Z80Context* ctx)
{
	ctx->tstates += 7;
	WR.HL = doAddWord(ctx, WR.HL, WR.SP, F1_SBC, F2_SBC);
}


static void SCF (Z80Context* ctx)
{
	SETFLAG(F_C);
	RESFLAG(F_N | F_H);
	adjustFlags(ctx, BR.A);
}


static void SET_0_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_SET, 0, read8(ctx, WR.HL)));
}


static void SET_0_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IX + off)));
	
	
}


static void SET_0_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_SET, 0, read8(ctx, WR.IY + off)));
	
	
}


static void SET_0_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_SET, 0, BR.A);
}


static void SET_0_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_SET, 0, BR.B);
}


static void SET_0_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_SET, 0, BR.C);
}


static void SET_0_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_SET, 0, BR.D);
}


static void SET_0_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_SET, 0, BR.E);
}


static void SET_0_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_SET, 0, BR.H);
}


static void SET_0_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_SET, 0, BR.L);
}


static void SET_1_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_SET, 1, read8(ctx, WR.HL)));
}


static void SET_1_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IX + off)));
	
	
}


static void SET_1_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_SET, 1, read8(ctx, WR.IY + off)));
	
	
}


static void SET_1_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_SET, 1, BR.A);
}


static void SET_1_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_SET, 1, BR.B);
}


static void SET_1_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_SET, 1, BR.C);
}


static void SET_1_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_SET, 1, BR.D);
}


static void SET_1_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_SET, 1, BR.E);
}


static void SET_1_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_SET, 1, BR.H);
}


static void SET_1_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_SET, 1, BR.L);
}


static void SET_2_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_SET, 2, read8(ctx, WR.HL)));
}


static void SET_2_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IX + off)));
	
	
}


static void SET_2_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_SET, 2, read8(ctx, WR.IY + off)));
	
	
}


static void SET_2_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_SET, 2, BR.A);
}


static void SET_2_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_SET, 2, BR.B);
}


static void SET_2_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_SET, 2, BR.C);
}


static void SET_2_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_SET, 2, BR.D);
}


static void SET_2_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_SET, 2, BR.E);
}


static void SET_2_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_SET, 2, BR.H);
}


static void SET_2_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_SET, 2, BR.L);
}


static void SET_3_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_SET, 3, read8(ctx, WR.HL)));
}


static void SET_3_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IX + off)));
	
	
}


static void SET_3_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_SET, 3, read8(ctx, WR.IY + off)));
	
	
}


static void SET_3_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_SET, 3, BR.A);
}


static void SET_3_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_SET, 3, BR.B);
}


static void SET_3_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_SET, 3, BR.C);
}


static void SET_3_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_SET, 3, BR.D);
}


static void SET_3_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_SET, 3, BR.E);
}


static void SET_3_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_SET, 3, BR.H);
}


static void SET_3_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_SET, 3, BR.L);
}


static void SET_4_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_SET, 4, read8(ctx, WR.HL)));
}


static void SET_4_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IX + off)));
	
	
}


static void SET_4_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_SET, 4, read8(ctx, WR.IY + off)));
	
	
}


static void SET_4_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_SET, 4, BR.A);
}


static void SET_4_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_SET, 4, BR.B);
}


static void SET_4_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_SET, 4, BR.C);
}


static void SET_4_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_SET, 4, BR.D);
}


static void SET_4_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_SET, 4, BR.E);
}


static void SET_4_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_SET, 4, BR.H);
}


static void SET_4_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_SET, 4, BR.L);
}


static void SET_5_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_SET, 5, read8(ctx, WR.HL)));
}


static void SET_5_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IX + off)));
	
	
}


static void SET_5_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_SET, 5, read8(ctx, WR.IY + off)));
	
	
}


static void SET_5_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_SET, 5, BR.A);
}


static void SET_5_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_SET, 5, BR.B);
}


static void SET_5_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_SET, 5, BR.C);
}


static void SET_5_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_SET, 5, BR.D);
}


static void SET_5_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_SET, 5, BR.E);
}


static void SET_5_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_SET, 5, BR.H);
}


static void SET_5_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_SET, 5, BR.L);
}


static void SET_6_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_SET, 6, read8(ctx, WR.HL)));
}


static void SET_6_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IX + off)));
	
	
}


static void SET_6_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_SET, 6, read8(ctx, WR.IY + off)));
	
	
}


static void SET_6_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_SET, 6, BR.A);
}


static void SET_6_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_SET, 6, BR.B);
}


static void SET_6_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_SET, 6, BR.C);
}


static void SET_6_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_SET, 6, BR.D);
}


static void SET_6_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_SET, 6, BR.E);
}


static void SET_6_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_SET, 6, BR.H);
}


static void SET_6_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_SET, 6, BR.L);
}


static void SET_7_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSetRes(ctx, SR_SET, 7, read8(ctx, WR.HL)));
}


static void SET_7_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IX + off, doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IX + off)));
	
	
}


static void SET_7_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);
	write8(ctx, WR.IY + off, doSetRes(ctx, SR_SET, 7, read8(ctx, WR.IY + off)));
	
	
}


static void SET_7_A (Z80Context* ctx)
{
	BR.A = doSetRes(ctx, SR_SET, 7, BR.A);
}


static void SET_7_B (Z80Context* ctx)
{
	BR.B = doSetRes(ctx, SR_SET, 7, BR.B);
}


static void SET_7_C (Z80Context* ctx)
{
	BR.C = doSetRes(ctx, SR_SET, 7, BR.C);
}


static void SET_7_D (Z80Context* ctx)
{
	BR.D = doSetRes(ctx, SR_SET, 7, BR.D);
}


static void SET_7_E (Z80Context* ctx)
{
	BR.E = doSetRes(ctx, SR_SET, 7, BR.E);
}


static void SET_7_H (Z80Context* ctx)
{
	BR.H = doSetRes(ctx, SR_SET, 7, BR.H);
}


static void SET_7_L (Z80Context* ctx)
{
	BR.L = doSetRes(ctx, SR_SET, 7, BR.L);
}


static void SLA_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSL(ctx, read8(ctx, WR.HL), IA_A));
}


static void SLA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);	
	write8(ctx, WR.IX + off, doSL(ctx, read8(ctx, WR.IX + off), IA_A));
}


static void SLA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);	
	write8(ctx, WR.IY + off, doSL(ctx, read8(ctx, WR.IY + off), IA_A));
}


static void SLA_A (Z80Context* ctx)
{
	BR.A = doSL(ctx, BR.A, IA_A);
	
	
}


static void SLA_B (Z80Context* ctx)
{
	BR.B = doSL(ctx, BR.B, IA_A);
	
	
}


static void SLA_C (Z80Context* ctx)
{
	BR.C = doSL(ctx, BR.C, IA_A);
	
	
}


static void SLA_D (Z80Context* ctx)
{
	BR.D = doSL(ctx, BR.D, IA_A);
	
	
}


static void SLA_E (Z80Context* ctx)
{
	BR.E = doSL(ctx, BR.E, IA_A);
	
	
}


static void SLA_H (Z80Context* ctx)
{
	BR.H = doSL(ctx, BR.H, IA_A);
	
	
}


static void SLA_L (Z80Context* ctx)
{
	BR.L = doSL(ctx, BR.L, IA_A);
	
	
}


static void SLL_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSL(ctx, read8(ctx, WR.HL), IA_L));
}


static void SLL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);	
	write8(ctx, WR.IX + off, doSL(ctx, read8(ctx, WR.IX + off), IA_L));
}


static void SLL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);	
	write8(ctx, WR.IY + off, doSL(ctx, read8(ctx, WR.IY + off), IA_L));
}


static void SLL_A (Z80Context* ctx)
{
	BR.A = doSL(ctx, BR.A, IA_L);
	
	
}


static void SLL_B (Z80Context* ctx)
{
	BR.B = doSL(ctx, BR.B, IA_L);
	
	
}


static void SLL_C (Z80Context* ctx)
{
	BR.C = doSL(ctx, BR.C, IA_L);
	
	
}


static void SLL_D (Z80Context* ctx)
{
	BR.D = doSL(ctx, BR.D, IA_L);
	
	
}


static void SLL_E (Z80Context* ctx)
{
	BR.E = doSL(ctx, BR.E, IA_L);
	
	
}


static void SLL_H (Z80Context* ctx)
{
	BR.H = doSL(ctx, BR.H, IA_L);
	
	
}


static void SLL_L (Z80Context* ctx)
{
	BR.L = doSL(ctx, BR.L, IA_L);
	
	
}


static void SRA_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSR(ctx, read8(ctx, WR.HL), IA_A));
}


static void SRA_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);	
	write8(ctx, WR.IX + off, doSR(ctx, read8(ctx, WR.IX + off), IA_A));
}


static void SRA_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);	
	write8(ctx, WR.IY + off, doSR(ctx, read8(ctx, WR.IY + off), IA_A));
}


static void SRA_A (Z80Context* ctx)
{
	BR.A = doSR(ctx, BR.A, IA_A);
	
	
}


static void SRA_B (Z80Context* ctx)
{
	BR.B = doSR(ctx, BR.B, IA_A);
	
	
}


static void SRA_C (Z80Context* ctx)
{
	BR.C = doSR(ctx, BR.C, IA_A);
	
	
}


static void SRA_D (Z80Context* ctx)
{
	BR.D = doSR(ctx, BR.D, IA_A);
	
	
}


static void SRA_E (Z80Context* ctx)
{
	BR.E = doSR(ctx, BR.E, IA_A);
	
	
}


static void SRA_H (Z80Context* ctx)
{
	BR.H = doSR(ctx, BR.H, IA_A);
	
	
}


static void SRA_L (Z80Context* ctx)
{
	BR.L = doSR(ctx, BR.L, IA_A);
	
	
}


static void SRL_off_HL (Z80Context* ctx)
{
	ctx->tstates += 1;
	write8(ctx, WR.HL, doSR(ctx, read8(ctx, WR.HL), IA_L));
}


static void SRL_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);	
	write8(ctx, WR.IX + off, doSR(ctx, read8(ctx, WR.IX + off), IA_L));
}


static void SRL_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 2;
	signed char off = read8(ctx, ctx->PC++);	
	write8(ctx, WR.IY + off, doSR(ctx, read8(ctx, WR.IY + off), IA_L));
}


static void SRL_A (Z80Context* ctx)
{
	BR.A = doSR(ctx, BR.A, IA_L);
	
	
}


static void SRL_B (Z80Context* ctx)
{
	BR.B = doSR(ctx, BR.B, IA_L);
	
	
}


static void SRL_C (Z80Context* ctx)
{
	BR.C = doSR(ctx, BR.C, IA_L);
	
	
}


static void SRL_D (Z80Context* ctx)
{
	BR.D = doSR(ctx, BR.D, IA_L);
	
	
}


static void SRL_E (Z80Context* ctx)
{
	BR.E = doSR(ctx, BR.E, IA_L);
	
	
}


static void SRL_H (Z80Context* ctx)
{
	BR.H = doSR(ctx, BR.H, IA_L);
	
	
}


static void SRL_L (Z80Context* ctx)
{
	BR.L = doSR(ctx, BR.L, IA_L);
	
	
}


static void SUB_A_off_HL (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, read8(ctx, WR.HL), F1_SUB, F2_SUB);
}


static void SUB_A_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	signed char displacement = read8(ctx, ctx->PC++);
	BR.A = doArithmetic(ctx, read8(ctx, WR.IX + displacement), F1_SUB, F2_SUB);
	
}


static void SUB_A_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	signed char displacement = read8(ctx, ctx->PC++);
	BR.A = doArithmetic(ctx, read8(ctx, WR.IY + displacement), F1_SUB, F2_SUB);
	
}


static void SUB_A_A (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.A, F1_SUB, F2_SUB);
}


static void SUB_A_B (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.B, F1_SUB, F2_SUB);
}


static void SUB_A_C (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.C, F1_SUB, F2_SUB);
}


static void SUB_A_D (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.D, F1_SUB, F2_SUB);
}


static void SUB_A_E (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.E, F1_SUB, F2_SUB);
}


static void SUB_A_H (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.H, F1_SUB, F2_SUB);
}


static void SUB_A_IXh (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IXh, F1_SUB, F2_SUB);
}


static void SUB_A_IXl (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IXl, F1_SUB, F2_SUB);
}


static void SUB_A_IYh (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IYh, F1_SUB, F2_SUB);
}


static void SUB_A_IYl (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.IYl, F1_SUB, F2_SUB);
}


static void SUB_A_L (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, BR.L, F1_SUB, F2_SUB);
}


static void SUB_A_n (Z80Context* ctx)
{
	BR.A = doArithmetic(ctx, read8(ctx, ctx->PC++), F1_SUB, F2_SUB);
}


static void XOR_off_HL (Z80Context* ctx)
{
	doXOR(ctx, read8(ctx, WR.HL));
}


static void XOR_off_IX_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	doXOR(ctx, read8(ctx, WR.IX + (signed char) read8(ctx, ctx->PC++)));
}


static void XOR_off_IY_d (Z80Context* ctx)
{
	ctx->tstates += 5;
	doXOR(ctx, read8(ctx, WR.IY + (signed char) read8(ctx, ctx->PC++)));
}


static void XOR_A (Z80Context* ctx)
{
	doXOR(ctx, BR.A);
}


static void XOR_B (Z80Context* ctx)
{
	doXOR(ctx, BR.B);
}


static void XOR_C (Z80Context* ctx)
{
	doXOR(ctx, BR.C);
}


static void XOR_D (Z80Context* ctx)
{
	doXOR(ctx, BR.D);
}


static void XOR_E (Z80Context* ctx)
{
	doXOR(ctx, BR.E);
}


static void XOR_H (Z80Context* ctx)
{
	doXOR(ctx, BR.H);
}


static void XOR_IXh (Z80Context* ctx)
{
	doXOR(ctx, BR.IXh);
}


static void XOR_IXl (Z80Context* ctx)
{
	doXOR(ctx, BR.IXl);
}


static void XOR_IYh (Z80Context* ctx)
{
	doXOR(ctx, BR.IYh);
}


static void XOR_IYl (Z80Context* ctx)
{
	doXOR(ctx, BR.IYl);
}


static void XOR_L (Z80Context* ctx)
{
	doXOR(ctx, BR.L);
}


static void XOR_n (Z80Context* ctx)
{
	doXOR(ctx, read8(ctx, ctx->PC++));
}


