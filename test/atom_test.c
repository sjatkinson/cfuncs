/*
** atom_test.c
** Login : <satkinson@sjalinux.sd.intuit.com>
** Started on  Wed Dec  9 15:31:13 2009 Steven Atkinson
** $Id$
** 
** Copyright (C) 2009 Steven Atkinson
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#include "atom.h"
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
