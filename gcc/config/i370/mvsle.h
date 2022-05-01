/* Definitions of target machine for GNU compiler.  System/370 version.
   Copyright (C) 1989, 1993, 1995, 1996, 1997 Free Software Foundation, Inc.
   Contributed by Jan Stein (jan@cd.chalmers.se).
   Modified for OS/390 LanguageEnvironment C by Dave Pitts (dpitts@cozx.com)

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

#define TARGET_VERSION fprintf (stderr, " (370/MVS-LE)");

/* Specify that we're generating code for MVS.  */

#define TARGET_MVS 1
#define TARGET_HLASM 1
#define TARGET_EBCDIC 1
#define TARGET_ALIASES 1

/* Specify that we're using the Language Environment runtime.  */

#define TARGET_LE 1

/* Specify that we're using macro prolog/epilog.  */

/*#define TARGET_MACROS 1*/

/* Options for the preprocessor for this target machine.  */

#define CPP_SPEC "-trigraphs"
#define STARTFILE_SPEC ""

/* Names to predefine in the preprocessor for this target machine.  */

#define CPP_PREDEFINES "-DGCC -Dgcc -DMVS -Dmvs -DLE370 -Asystem=mvs -Acpu=i370 -Amachine=i370"


