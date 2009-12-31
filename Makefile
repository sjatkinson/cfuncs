lib/libcfuncs.a: src/hash_elf.o src/hash_djb.o src/atom_new.c src/atom_str.c
	$(AR) $(ARFLAGS) $@ $?
