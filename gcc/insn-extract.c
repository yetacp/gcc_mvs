/* Generated automatically by the program `genextract'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

static rtx junk ATTRIBUTE_UNUSED;
void
insn_extract (insn)
     rtx insn;
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED;

  memset (ro, 0, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
  switch (INSN_CODE (insn))
    {
    case -1:
      fatal_insn_not_found (insn);

    case 133:  /* nop */
      break;

    case 132:  /* *i370.md:4884 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 128:  /* tablejump */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 126:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 125:  /* *i370.md:4610 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 124:  /* *i370.md:4582 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 123:  /* *i370.md:4554 */
    case 122:  /* *i370.md:4531 */
    case 121:  /* *i370.md:4508 */
    case 120:  /* *i370.md:4485 */
    case 119:  /* *i370.md:4462 */
    case 118:  /* *i370.md:4439 */
    case 117:  /* *i370.md:4416 */
    case 116:  /* *i370.md:4393 */
    case 115:  /* *i370.md:4370 */
    case 114:  /* *i370.md:4347 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 113:  /* bleu */
    case 112:  /* ble */
    case 111:  /* bgeu */
    case 110:  /* bge */
    case 109:  /* bltu */
    case 108:  /* blt */
    case 107:  /* bgtu */
    case 106:  /* bgt */
    case 105:  /* bne */
    case 104:  /* beq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 130:  /* call_value */
    case 103:  /* lshrqi3 */
    case 102:  /* lshrhi3 */
    case 101:  /* lshrsi3 */
    case 100:  /* lshrdi3 */
    case 99:  /* ashrqi3 */
    case 98:  /* ashlqi3 */
    case 97:  /* ashrhi3 */
    case 96:  /* ashlhi3 */
    case 95:  /* ashrsi3 */
    case 94:  /* ashlsi3 */
    case 93:  /* ashrdi3 */
    case 92:  /* ashldi3 */
    case 77:  /* xorqi3 */
    case 76:  /* *i370.md:3479 */
    case 75:  /* xorhi3 */
    case 74:  /* *i370.md:3418 */
    case 73:  /* xorsi3 */
    case 72:  /* *i370.md:3369 */
    case 71:  /* iorqi3 */
    case 70:  /* *i370.md:3289 */
    case 69:  /* iorhi3 */
    case 68:  /* *i370.md:3228 */
    case 67:  /* iorsi3 */
    case 66:  /* *i370.md:3179 */
    case 65:  /* andqi3 */
    case 64:  /* *i370.md:3099 */
    case 63:  /* andhi3 */
    case 62:  /* *i370.md:3038 */
    case 61:  /* andsi3 */
    case 60:  /* *i370.md:2989 */
    case 59:  /* *i370.md:2940 */
    case 58:  /* divsf3 */
    case 57:  /* divdf3 */
    case 56:  /* *i370.md:2774 */
    case 55:  /* mulsf3 */
    case 54:  /* muldf3 */
    case 53:  /* *i370.md:2611 */
    case 52:  /* *i370.md:2595 */
    case 51:  /* subsf3 */
    case 50:  /* subdf3 */
    case 49:  /* subqi3 */
    case 48:  /* subhi3 */
    case 47:  /* subsi3 */
    case 45:  /* addsf3 */
    case 44:  /* adddf3 */
    case 43:  /* addqi3 */
    case 42:  /* addhi3 */
    case 41:  /* addsi3 */
    case 40:  /* *i370.md:2134 */
    case 39:  /* *i370.md:2117 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 46:  /* *i370.md:2333 */
    case 38:  /* *i370.md:2064 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 34:  /* fix_truncdfsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 91:  /* one_cmplqi2 */
    case 90:  /* *i370.md:3775 */
    case 89:  /* one_cmplhi2 */
    case 88:  /* *i370.md:3738 */
    case 87:  /* one_cmplsi2 */
    case 86:  /* *i370.md:3700 */
    case 85:  /* abssf2 */
    case 84:  /* absdf2 */
    case 83:  /* abshi2 */
    case 82:  /* abssi2 */
    case 81:  /* negsf2 */
    case 80:  /* negdf2 */
    case 79:  /* neghi2 */
    case 78:  /* negsi2 */
    case 37:  /* extendsfdf2 */
    case 36:  /* truncdfsf2 */
    case 35:  /* floatsidf2 */
    case 33:  /* truncsihi2 */
    case 32:  /* zero_extendqihi2 */
    case 31:  /* zero_extendqisi2 */
    case 30:  /* zero_extendhisi2 */
    case 29:  /* extendqihi2 */
    case 28:  /* extendqisi2 */
    case 27:  /* extendhisi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 26:  /* movstrsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[3] = 0;
      break;

    case 25:  /* *i370.md:1630 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 131:  /* *i370.md:4836 */
    case 20:  /* movstricthi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 129:  /* call */
    case 24:  /* movsf */
    case 23:  /* *i370.md:1410 */
    case 22:  /* movdf */
    case 21:  /* *i370.md:1285 */
    case 19:  /* movqi */
    case 18:  /* *i370.md:1104 */
    case 17:  /* movhi */
    case 16:  /* *i370.md:1010 */
    case 15:  /* movsi */
    case 14:  /* movdi */
    case 13:  /* *i370.md:792 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 12:  /* cmpstrsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[3] = 1;
      break;

    case 11:  /* *i370.md:746 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 10:  /* cmpsf */
    case 9:  /* cmpdf */
    case 8:  /* cmpqi */
    case 7:  /* *i370.md:522 */
    case 6:  /* cmphi */
    case 5:  /* cmpsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 127:  /* indirect_jump */
    case 4:  /* tstsf */
    case 3:  /* tstdf */
    case 2:  /* tsthi */
    case 1:  /* tstsi */
    case 0:  /* tstdi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    default:
      abort ();
    }
}
