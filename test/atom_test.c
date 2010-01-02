/*
 * cgreen unit tests form atom.c
 */

#include "test.h"
#include "../include/atom.h"
#include "cgreen/cgreen.h"

void atom_test() {
   atom_t a[1028];
   assert_true(strcmp(atom_str(&a, "test"), "test") == 0);
   const char* p = atom_str(&a, "foo");
   assert_equal(p, atom_str(&a, "foo"));
}
