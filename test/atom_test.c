/*
 * cgreen unit tests form atom.c
 */

#include "test.h"
#include "../include/atom.h"
#include "cgreen/cgreen.h"

void atom_test() {
   atom_t a[17];
   int i;
   assert_true(strcmp(atom_str(&a, "test"), "test") == 0);
   assert_true(atom_str(&a, "test") != atom_str(&a, "test2"));
   assert_equal(atom_str(&a, "foo"), atom_str(&a, "foo"));
   for(i = 0; i<120; i++) {
      char t[10];
      sprintf(t, "test%d", i);
      assert_equal(atom_str(&a, t), atom_str(&a, t));
   }
}
