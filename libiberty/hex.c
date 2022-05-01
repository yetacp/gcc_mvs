/* Hex character manipulation support.
   Copyright (C) 1995, 2001 Free Software Foundation, Inc.
   EBCDIC support by Dave Pitts <dpitts@cozx.com>.

This file is part of the libiberty library.
Libiberty is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.

Libiberty is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Library General Public License for more details.

You should have received a copy of the GNU Library General Public
License along with libiberty; see the file COPYING.LIB.  If
not, write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

#include <stdio.h>  /* for EOF */
#include "libiberty.h"

/* Are we ASCII? */
#if '\n' == 0x0A && ' ' == 0x20 && '0' == 0x30 \
  && 'A' == 0x41 && 'a' == 0x61 && '!' == 0x21 \
  && EOF == -1

const char _hex_value[_hex_array_size] =
{
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* NUL SOH STX ETX */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* EOT ENQ ACK BEL */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* BS  HT  LF  VT  */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* FF  CR  SO  SI  */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* DLE DC1 DC2 DC3 */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* DC4 NAK SYN ETB */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* CAN EM  SUB ESC */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* FS  GS  RS  US  */

  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* SP  !   "   #   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* $   %   &   '   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* (   )   *   +   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* ,   -   .   /   */
  0,        1,        2,        3,          /* 0   1   2   3   */
  4,        5,        6,        7,          /* 4   5   6   7   */
  8,        9,        _hex_bad, _hex_bad,   /* 8   9   :   ;   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* <   =   >   ?   */

  _hex_bad, 10,       11,       12,         /* @   A   B   C   */
  13,       14,       15,       _hex_bad,   /* D   E   F   G   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* H   I   J   K   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* L   M   N   O   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* P   Q   R   S   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* T   U   V   W   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* X   Y   Z   [   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* \   ]   ^   _   */

  _hex_bad, 10,       11,       12,         /* `   a   b   c   */
  13,       14,       15,       _hex_bad,   /* d   e   f   g   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* h   i   j   k   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* l   m   n   o   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* p   q   r   s   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* t   u   v   w   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* x   y   z   {   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,   /* |   }   ~   DEL */

  /* The high half of unsigned char, all values are _hex_bad.  */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,

  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,

  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,

  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
};
#define HEX_TABLE_INITIALIZED

#endif

/* Are we EBCDIC? CP-1047 */
#if '\n' == 0x15 && ' ' == 0x40 && '0' == 0xf0 \
  && 'A' == 0xC1 && 'a' == 0x81 && '!' == 0x5A \
  && EOF == -1

const char _hex_value[_hex_array_size] =
{
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,

  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,       
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,       
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,

  _hex_bad, _hex_bad, _hex_bad, _hex_bad,      
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,

  _hex_bad, _hex_bad, _hex_bad, _hex_bad,     
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,

  _hex_bad, 10,       11,       12,       /*     a   b   c   */
  13,       14,       15,       _hex_bad, /* d   e   f   g   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /* h   i           */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /*     j   k   l   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /* m   n   o   p   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /* q   r           */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,

  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /*         s   t   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /* u   v   w   x   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /* y   z           */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,

  _hex_bad, 10,       11,       12,       /*     A   B   C   */
  13,       14,       15,       _hex_bad, /* D   E   F   G   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /* H   I           */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /*     J   K   L   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /* M   N   O   P   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /* Q   R           */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,

  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /*         S   T   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /* U   V   W   X   */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad, /* Y   Z           */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
  0,        1,        2,        3,        /* 0   1   2   3   */
  4,        5,        6,        7,        /* 4   5   6   7   */
  8,        9,        _hex_bad, _hex_bad, /* 8   9           */
  _hex_bad, _hex_bad, _hex_bad, _hex_bad,
};
#define HEX_TABLE_INITIALIZED

#endif /* EBCDIC */

#ifndef HEX_TABLE_INITIALIZED

const char _hex_value[_hex_array_size];

#endif /* neither ASCII nor EBCDIC */

void
hex_init ()
{
#ifndef HEX_TABLE_INITIALIZED
  int i;

  for (i=0; i<_hex_array_size; i++)
    {
      switch (i)
	{
	case '0': _hex_value[i] = 0; break;
	case '1': _hex_value[i] = 1; break;
	case '2': _hex_value[i] = 2; break;
	case '3': _hex_value[i] = 3; break;
	case '4': _hex_value[i] = 4; break;
	case '5': _hex_value[i] = 5; break;
	case '6': _hex_value[i] = 6; break;
	case '7': _hex_value[i] = 7; break;
	case '8': _hex_value[i] = 8; break;
	case '9': _hex_value[i] = 9; break;

	case 'a': case 'A': _hex_value[i] = 10; break;
	case 'b': case 'B': _hex_value[i] = 11; break;
	case 'c': case 'C': _hex_value[i] = 12; break;
	case 'd': case 'D': _hex_value[i] = 13; break;
	case 'e': case 'E': _hex_value[i] = 14; break;
	case 'f': case 'F': _hex_value[i] = 15; break;

	default:
	  _hex_value[i] = _hex_bad;
	  break;
	}
    }
#endif
}
