/*
 * cgreen unit tests for hash functions
 */

#include "test.h"
#include "../include/hash_funcs.h"
#include "cgreen/cgreen.h"

void hash_test() {
   assert_equal(hash_elf("test", 4),
                hash_elf("test", 4));
   assert_equal(hash_djb("test", 4),
                hash_djb("test", 4));

}
