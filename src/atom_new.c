/*
 * atom_new - creates a new atom from the given string.
 *
 * Copyright notice:
 * Free use of this source code is permitted under the guidelines and
 * in accordance with the most current version of the Common Public License.
 * http://www.opensource.org/licenses/cpl.php
 */

#include "atom.h"
#include "hash_funcs.h"
#include <string.h>

#define NELEMS(x) ((sizeof(x) / (sizeof((x)[0]))))


const char* atom_new(atom_t* atoms[], const char* s, size_t len) {
   unsigned int h;
   int i;
   atom_t* p;

   h = hash_djb(s, len);
   h &= NELEMS(atoms);
   for (p = atoms[h]; p; p = p->link) {
      if (len == p->len) {
         for(i = 0; i < len && p->str[i] == s[i]; ) {
            i++;
         }
         if (i == len)
            return p->str;
      }
   }
   p = malloc(sizeof(*p) + len + 1);
   p->len = len;
   p->str = (char *)(p + 1);
   if (len > 0)
      memcpy(p->str, s, len);
   p->str[len] = '\0';
   p->link = atoms[h];
   atoms[h] = p;
   return p->str;
}
