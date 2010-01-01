/*
** atom_test.c
*/

#include "../include/atom.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
   atom_t a[1028];
   printf("Running atom test...\n");
   assert(strcmp(atom_str(&a, "test"), "test") == 0);
   assert(strcmp(atom_str(&a, "test"), "test") == 0);
   printf("Bye!\n");
   return 1;
}
