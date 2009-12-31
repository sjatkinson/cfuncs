lib/libcfuncs.a: src/hash_elf.o src/hash_djb.o
	$(AR) $(ARFLAGS) $@ $?