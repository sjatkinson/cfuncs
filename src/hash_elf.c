#include "../include/hash_funcs.h"

unsigned int hash_elf(const char* s, size_t len) {
   unsigned int h = 0, g;
   size_t i;

   for(i = 0; i < len; i++) {
      h = ( h<<4) + *s++;
      if (g = h & 0xF0000000)
         h ^= g>>24;

      h &= ~g;
   }
   return h;
}

