/*
 * atom_str
 *
 * Copyright notice:
 * Free use of this source code is permitted under the guidelines and
 * in accordance with the most current version of the Common Public License.
 * http://www.opensource.org/licenses/cpl.php
 */

#include "atom.h"
#include <string.h>
#include <assert.h>

const char* atom_str(atom_t* atoms[], const char* s) {
   return atom_new(atoms, s, strlen(s));
}

