/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"
#include "toplev.h"
#include "flags.h"

#define operands recog_data.operand

extern int insn_current_length PARAMS ((rtx));
int
insn_current_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern int insn_variable_length_p PARAMS ((rtx));
int
insn_variable_length_p (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern int insn_default_length PARAMS ((rtx));
int
insn_default_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 133:
    case 85:
    case 84:
    case 82:
    case 81:
    case 80:
    case 78:
    case 49:
    case 36:
    case 26:
    case 4:
    case 3:
    case 1:
      return 2;

    case 132:
    case 131:
    case 130:
    case 129:
    case 35:
    case 11:
      return 22 /* 0x16 */;

    case 128:
    case 83:
    case 79:
    case 46:
    case 38:
    case 37:
      return 10 /* 0xa */;

    case 126:
    case 125:
    case 124:
    case 123:
    case 122:
    case 121:
    case 120:
    case 119:
    case 118:
    case 117:
    case 116:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 108:
    case 107:
    case 106:
    case 105:
    case 104:
    case 88:
    case 86:
    case 76:
    case 74:
    case 72:
    case 70:
    case 68:
    case 66:
    case 64:
    case 62:
    case 60:
    case 40:
    case 25:
    case 18:
    case 16:
      return 6;

    case 103:
    case 102:
    case 99:
    case 97:
    case 96:
    case 48:
    case 42:
    case 33:
    case 32:
    case 31:
    case 24:
    case 23:
    case 20:
    case 15:
    case 14:
    case 13:
    case 7:
    case 6:
      return 8;

    case 34:
      return 14 /* 0xe */;

    case 29:
    case 28:
    case 27:
    case 22:
    case 21:
      return 12 /* 0xc */;

    case 12:
    case 8:
      return 18 /* 0x12 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      return 0;

    default:
      return 4;

    }
}

int length_unit_log = 1;
