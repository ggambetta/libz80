.DEFAULT: check

check: tests.expected coretest
	./coretest fuse_files/tests.in >tests.actual
	diff -u tests.expected tests.actual

clean:
	rm -rf tests.expected tests.actual

tests.expected: fuse_files/tests.expected
	./generate_expected.sh $< $@

coretest: coretest.c
	gcc -Wall -ansi -g -o $@ $< ../libz80.so
