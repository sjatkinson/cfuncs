lib/libcfuncs.a: src/hash_elf.o src/hash_djb.o src/atom_new.o src/atom_str.o
	$(AR) $(ARFLAGS) $@ $?

bin/ctest: test/atom_test.o lib/libcfuncs.a
	gcc -o bin/ctest test/atom_test.o lib/libcfuncs.a

src/atom_test.o: test/atom_test.c
	gcc -c test/atom_test.c