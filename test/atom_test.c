/*
 * cgreen unit tests form atom.c
 */

#include "test.h"
#include "../include/atom.h"
#include "cgreen/cgreen.h"

void atom_test() {
   atom_t a[1028];
   assert_true(strcmp(atom_str(&a, "test"), "test") == 0);
   assert_true(atom_str(&a, "test") != atom_str(&a, "test2"));
   assert_equal(atom_str(&a, "foo"), atom_str(&a, "foo"));
}
