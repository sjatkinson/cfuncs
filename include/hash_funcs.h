/*
 * General purpose hash functions
 *
 * Copyright notice:
 * Free use of this source code is permitted under the guidelines and
 * in accordance with the most current version of the Common Public License.
 * http://www.opensource.org/licenses/cpl.php
 */
#ifndef HASHFUNC_H__
#define HASHFUNC_H__

unsigned int hash_elf(const char* s, size_t len);
unsigned int hash_djb(const char* s, size_t len);


#endif
