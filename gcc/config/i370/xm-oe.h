/* Configuration for GNU C-compiler for System/370.
   Copyright (C) 1989, 1993, 1997 Free Software Foundation, Inc.
   Contributed by Jan Stein (jan@cd.chalmers.se).
   Modified for OS/390 OpenEdition by Dave Pitts (dpitts@cozx.com)

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

/* #defines that need visibility everywhere.  */

#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE 1
#endif

#define USE_STDARGS 1
#define USE_PROTOTYPES 1

/* This describes the machine the compiler is hosted on.  */

#define HOST_FLOAT_FORMAT	IBM_FLOAT_FORMAT
#define HOST_EBCDIC		1

#define ONLY_INT_FIELDS		1

#define USG

/* Arguments to use with `exit'.  */

#define SUCCESS_EXIT_CODE	0
#define FATAL_EXIT_CODE		1

#define NO_DBX_FORMAT

/* The mmap function on OS/390 is broken, bypass */

#define MMAP_THRESHOLD 0

