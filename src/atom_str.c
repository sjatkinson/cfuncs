
#include "atom.h"
#include <string.h>
#include <assert.h>

const char* atom_str(atom_t* atoms[], const char* s) {
   return atom_new(atoms, s, strlen(s));
}

