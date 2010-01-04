VPATH = src test include
CPPFLAGS = -I include

runtests: bin/ctest
	bin/ctest

bin/ctest: atom_test.o main.o hash_test.o lib/libcfuncs.a
	gcc -o bin/ctest atom_test.o main.o hash_test.o lib/libcfuncs.a -lcgreen -lm

lib/libcfuncs.a: hash_elf.o hash_djb.o atom_new.o atom_str.o
	$(AR) $(ARFLAGS) $@ $?

