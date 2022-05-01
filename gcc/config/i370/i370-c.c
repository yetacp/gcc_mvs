/* Subroutines for the C front end for System/370.
   Copyright (C) 1989, 1993, 1995, 1997, 1998, 1999, 2000
   Free Software Foundation, Inc.
   Contributed by Jan Stein (jan@cd.chalmers.se).
   Modified for OS/390 LanguageEnvironment C by Dave Pitts (dpitts@cozx.com)
   Hacked for Linux-ELF/390 by Linas Vepstas (linas@linas.org) 

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

#include "config.h"
#include "system.h"
#include "tree.h"
#include "toplev.h"
#include "cpplib.h"
#include "c-pragma.h"
#include "c-lex.h"
#include "i370-protos.h"

#ifdef TARGET_HLASM

/* #pragma map (name, alias) -
   In this implementation both name and alias are required to be
   identifiers.  The older code seemed to be more permissive.  Can
   anyone clarify?  */

void
i370_pr_map (pfile)
     cpp_reader *pfile ATTRIBUTE_UNUSED;
{
  tree name, alias, x;

  if (c_lex (&x)        == CPP_OPEN_PAREN
      && c_lex (&name)  == CPP_NAME
      && c_lex (&x)     == CPP_COMMA
      && c_lex (&alias) == CPP_STRING
      && c_lex (&x)     == CPP_CLOSE_PAREN)
    {
      const char *cp = TREE_STRING_POINTER(alias);

      if (c_lex (&x) != CPP_EOF)
	warning ("junk at end of #pragma map");

      mvs_add_alias (IDENTIFIER_POINTER (name), cp, 1);
      return;
    }

  warning ("malformed #pragma map, ignored");
}

/* #pragma linkage (name, mode) -
   In this implementation both name and alias are required to be
   identifiers.  The older code seemed to be more permissive.  Can
   anyone clarify?  */

void
i370_pr_linkage (pfile)
     cpp_reader *pfile ATTRIBUTE_UNUSED;
{
  tree name, mode, x;

  if (c_lex (&x)        == CPP_OPEN_PAREN
      && c_lex (&name)  == CPP_NAME
      && c_lex (&x)     == CPP_COMMA
      && c_lex (&mode)  == CPP_NAME
      && c_lex (&x)     == CPP_CLOSE_PAREN)
    {
      if (c_lex (&x) != CPP_EOF)
	warning ("junk at end of #pragma linkage");

      return;
    }

  warning ("malformed #pragma linkage, ignored");
}

/* #pragma checkout (mode) -
   In this implementation both name and alias are required to be
   identifiers.  The older code seemed to be more permissive.  Can
   anyone clarify?  */

void
i370_pr_checkout (pfile)
     cpp_reader *pfile ATTRIBUTE_UNUSED;
{
  tree mode, x;

  if (c_lex (&x)        == CPP_OPEN_PAREN
      && c_lex (&mode)  == CPP_NAME
      && c_lex (&x)     == CPP_CLOSE_PAREN)
    {
      if (c_lex (&x) != CPP_EOF)
	warning ("junk at end of #pragma checkout");

      return;
    }

  warning ("malformed #pragma checkout, ignored");
}

/* #pragma nomargins
   #pragma nosequence
   We just ignore. */

void
i370_pr_skipit (pfile)
     cpp_reader *pfile ATTRIBUTE_UNUSED;
{

  return;

}

#endif
