//////////////////////////////////////////////////////////////////////
// get_den.c
/* mpq_get_den(den,rat_src) -- Set DEN to the denominator of RAT_SRC.

Copyright 1991, 1994, 1995, 2001 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
MA 02110-1301, USA. */

#include "mpir.h"
#include "gmp-impl.h"

void
mpq_get_den (mpz_ptr den, mpq_srcptr src)
{
  mp_size_t size = src->_mp_den._mp_size;

  if (den->_mp_alloc < size)
    _mpz_realloc (den, size);

  MPN_COPY (den->_mp_d, src->_mp_den._mp_d, size);
  den->_mp_size = size;
}


//////////////////////////////////////////////////////////////////////
// iDev.Games - MuOnline S9EP2 IGC9.5 - TRONG.WIN - DAO VAN TRONG     
//////////////////////////////////////////////////////////////////////

