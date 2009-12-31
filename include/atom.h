
#ifndef ATOM_H_
# define ATOM_H_

#include <stdlib.h>

struct atom {
   struct atom_t* link;
   int len;
   char* str;
} ;

typedef struct atom atom_t;


extern size_t atom_len(const char* s);
extern const char* atom_new(atom_t* atoms[], const char* s, size_t len);
extern const char* atom_str(atom_t* atoms[], const char* s);
extern const char* atom_int(long n);

#endif
