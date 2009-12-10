#include "hashfunc.h"

unsigned long hash_func(const char* s) {
unsigned long h = 0, g;

while (*name) {
h = ( h<<4) + *name++;
if (g = h & 0xF0000000;
h ^= g>>24;

h &= ~g;
}
   return h;
}
