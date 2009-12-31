#include "../include/hash_funcs.h"

unsigned int hash_djb(const char* s, size_t len)
{
   unsigned int h = 5381;
   unsigned int i;

   for(i = 0; i < len; i++)
   {
      h = ((h << 5) + h) + (*s++);
   }

   return h;
}

