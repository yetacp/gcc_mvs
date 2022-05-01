/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl in a SEQUENCE if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in a SEQUENCE,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/





static int recog_1 PARAMS ((rtx, rtx, int *));
static int
recog_1 (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case DImode:
      goto L779;
    case SImode:
      goto L780;
    case HImode:
      goto L781;
    case QImode:
      goto L783;
    case DFmode:
      goto L785;
    case SFmode:
      goto L786;
    default:
      break;
    }
 L1: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case CC0:
      goto L2;
    case STRICT_LOW_PART:
      goto L97;
    case PC:
      goto L529;
    default:
     break;
   }
 L759: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x1;
  goto L760;

 L779: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L73;
    }
 L792: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L276;
    }
  goto L1;

 L73: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L74;
    }
 L77: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      return 14;
    }
  x1 = XEXP (x0, 0);
  goto L792;

 L74: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 13;
    }
  x1 = XEXP (x0, 1);
  goto L77;

 L276: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L795;
  x1 = XEXP (x0, 0);
  goto L1;

 L795: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L277;
    case DIV:
      goto L292;
    case MOD:
      goto L307;
    case ASHIFT:
      goto L470;
    case ASHIFTRT:
      goto L475;
    case LSHIFTRT:
      goto L510;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1;

 L277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L278;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 53;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L293;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 56;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L308;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 59;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L470: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L471;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 92;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L475: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L476;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 93;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L511;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 100;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L780: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L136;
    }
 L787: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L140;
    }
 L793: ATTRIBUTE_UNUSED_LABEL
  if (r_or_s_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L311;
    }
 L794: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L317;
    }
  goto L1;

 L136: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == SIGN_EXTEND)
    goto L137;
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      return 15;
    }
  x1 = XEXP (x0, 0);
  goto L787;

 L137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      return 27;
    }
  x1 = XEXP (x0, 0);
  goto L787;

 L140: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L801;
  x1 = XEXP (x0, 0);
  goto L793;

 L801: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTEND:
      goto L141;
    case ZERO_EXTEND:
      goto L149;
    case FIX:
      goto L173;
    case PLUS:
      goto L200;
    case MINUS:
      goto L246;
    case MULT:
      goto L271;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L793;

 L141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      return 28;
    }
  x1 = XEXP (x0, 0);
  goto L793;

 L149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      return 30;
    }
 L153: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      return 31;
    }
  x1 = XEXP (x0, 0);
  goto L793;

 L173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == TRUNCATE)
    goto L174;
  x1 = XEXP (x0, 0);
  goto L793;

 L174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L175;
    }
  x1 = XEXP (x0, 0);
  goto L793;

 L175: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 34;
    }
  x1 = XEXP (x0, 0);
  goto L793;

 L200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L201;
    }
 L206: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L207;
    }
 L212: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L213;
    }
  x1 = XEXP (x0, 0);
  goto L793;

 L201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L202;
    }
  x2 = XEXP (x1, 0);
  goto L206;

 L202: ATTRIBUTE_UNUSED_LABEL
  if ((((REGNO (operands[1]) == FRAME_POINTER_REGNUM || REGNO (operands[1]) == ARG_POINTER_REGNUM || REGNO (operands[1]) == STACK_POINTER_REGNUM) && (unsigned) INTVAL (operands[2]) < 4096)))
    {
      return 39;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L206;

 L207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L208;
    }
  x2 = XEXP (x1, 0);
  goto L212;

 L208: ATTRIBUTE_UNUSED_LABEL
  if ((REGNO (operands[1]) == FRAME_POINTER_REGNUM))
    {
      return 40;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L212;

 L213: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 41;
    }
  x1 = XEXP (x0, 0);
  goto L793;

 L246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L247;
    }
  x1 = XEXP (x0, 0);
  goto L793;

 L247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 47;
    }
  x1 = XEXP (x0, 0);
  goto L793;

 L271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L272;
    }
  x1 = XEXP (x0, 0);
  goto L793;

 L272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L273;
    }
  x1 = XEXP (x0, 0);
  goto L793;

 L273: ATTRIBUTE_UNUSED_LABEL
  if ((CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'K')))
    {
      return 52;
    }
  x1 = XEXP (x0, 0);
  goto L793;

 L311: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L807;
  x1 = XEXP (x0, 0);
  goto L794;

 L807: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L312;
    case IOR:
      goto L345;
    case XOR:
      goto L378;
    case NOT:
      goto L443;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L794;

 L312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (r_or_s_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L313;
    }
  x1 = XEXP (x0, 0);
  goto L794;

 L313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L314;
    }
  x1 = XEXP (x0, 0);
  goto L794;

 L314: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 60;
    }
  x1 = XEXP (x0, 0);
  goto L794;

 L345: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (r_or_s_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L346;
    }
  x1 = XEXP (x0, 0);
  goto L794;

 L346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L347;
    }
  x1 = XEXP (x0, 0);
  goto L794;

 L347: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 66;
    }
  x1 = XEXP (x0, 0);
  goto L794;

 L378: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (r_or_s_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L379;
    }
  x1 = XEXP (x0, 0);
  goto L794;

 L379: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L380;
    }
  x1 = XEXP (x0, 0);
  goto L794;

 L380: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 72;
    }
  x1 = XEXP (x0, 0);
  goto L794;

 L443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (r_or_s_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L444;
    }
  x1 = XEXP (x0, 0);
  goto L794;

 L444: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 86;
    }
  x1 = XEXP (x0, 0);
  goto L794;

 L317: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L811;
  x1 = XEXP (x0, 0);
  goto L1;

 L811: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L318;
    case IOR:
      goto L351;
    case XOR:
      goto L384;
    case NEG:
      goto L411;
    case ABS:
      goto L427;
    case NOT:
      goto L448;
    case ASHIFT:
      goto L480;
    case ASHIFTRT:
      goto L485;
    case LSHIFTRT:
      goto L515;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1;

 L318: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L319;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 61;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L351: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L352;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L352: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 67;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L385;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 73;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      return 78;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      return 82;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L448: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      return 87;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L481;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L481: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 94;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L486;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 95;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L516;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 101;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L781: ATTRIBUTE_UNUSED_LABEL
  if (r_or_s_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L322;
    }
 L782: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L160;
    }
 L788: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L144;
    }
  goto L1;

 L322: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L820;
 L83: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L84;
    }
  x1 = XEXP (x0, 0);
  goto L782;

 L820: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L323;
    case IOR:
      goto L356;
    case XOR:
      goto L389;
    case NOT:
      goto L452;
    default:
     break;
   }
  goto L83;

 L323: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (r_or_s_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L324;
    }
  goto L83;

 L324: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L325;
    }
  goto L83;

 L325: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 62;
    }
  x1 = XEXP (x0, 1);
  goto L83;

 L356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (r_or_s_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L357;
    }
  goto L83;

 L357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L358;
    }
  goto L83;

 L358: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 68;
    }
  x1 = XEXP (x0, 1);
  goto L83;

 L389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (r_or_s_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L390;
    }
  goto L83;

 L390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      goto L391;
    }
  goto L83;

 L391: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 74;
    }
  x1 = XEXP (x0, 1);
  goto L83;

 L452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (r_or_s_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L453;
    }
  goto L83;

 L453: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 88;
    }
  x1 = XEXP (x0, 1);
  goto L83;

 L84: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 16;
    }
  x1 = XEXP (x0, 0);
  goto L782;

 L160: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == TRUNCATE)
    goto L161;
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      return 17;
    }
  x1 = XEXP (x0, 0);
  goto L788;

 L161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      return 33;
    }
  x1 = XEXP (x0, 0);
  goto L788;

 L144: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode)
    goto L824;
  x1 = XEXP (x0, 0);
  goto L1;

 L824: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case SIGN_EXTEND:
      goto L145;
    case ZERO_EXTEND:
      goto L157;
    case PLUS:
      goto L217;
    case MINUS:
      goto L251;
    case AND:
      goto L329;
    case IOR:
      goto L362;
    case XOR:
      goto L395;
    case NEG:
      goto L415;
    case ABS:
      goto L431;
    case NOT:
      goto L457;
    case ASHIFT:
      goto L490;
    case ASHIFTRT:
      goto L495;
    case LSHIFTRT:
      goto L520;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1;

 L145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      return 29;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      return 32;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L218;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      return 42;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L252;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L252: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      return 48;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L330;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      return 63;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L363;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      return 69;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L395: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L396;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[2] = x2;
      return 75;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      return 79;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L431: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      return 83;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      return 89;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L490: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L491;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 96;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L496;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 97;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L520: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L521;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L521: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 102;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L783: ATTRIBUTE_UNUSED_LABEL
  if (r_or_s_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L333;
    }
 L784: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L94;
    }
 L791: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L221;
    }
  goto L1;

 L333: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L837;
 L90: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L91;
    }
  x1 = XEXP (x0, 0);
  goto L784;

 L837: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case AND:
      goto L334;
    case IOR:
      goto L367;
    case XOR:
      goto L400;
    case NOT:
      goto L461;
    default:
     break;
   }
  goto L90;

 L334: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (r_or_s_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L335;
    }
  goto L90;

 L335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L336;
    }
  goto L90;

 L336: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 64;
    }
  x1 = XEXP (x0, 1);
  goto L90;

 L367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (r_or_s_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L368;
    }
  goto L90;

 L368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L369;
    }
  goto L90;

 L369: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 70;
    }
  x1 = XEXP (x0, 1);
  goto L90;

 L400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (r_or_s_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L401;
    }
  goto L90;

 L401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      goto L402;
    }
  goto L90;

 L402: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 76;
    }
  x1 = XEXP (x0, 1);
  goto L90;

 L461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (r_or_s_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L462;
    }
  goto L90;

 L462: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 90;
    }
  x1 = XEXP (x0, 1);
  goto L90;

 L91: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 18;
    }
  x1 = XEXP (x0, 0);
  goto L784;

 L94: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      return 19;
    }
  x1 = XEXP (x0, 0);
  goto L791;

 L221: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode)
    goto L841;
  x1 = XEXP (x0, 0);
  goto L1;

 L841: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L222;
    case MINUS:
      goto L256;
    case AND:
      goto L340;
    case IOR:
      goto L373;
    case XOR:
      goto L406;
    case NOT:
      goto L466;
    case ASHIFT:
      goto L500;
    case ASHIFTRT:
      goto L505;
    case LSHIFTRT:
      goto L525;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1;

 L222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L223;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      return 43;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L257;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      operands[2] = x2;
      return 49;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L341;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      return 65;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L374;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      return 71;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L407;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[2] = x2;
      return 77;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      return 91;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L501;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 98;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L506;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 99;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L526;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 103;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L785: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L101;
    }
 L789: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L178;
    }
  goto L1;

 L101: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L102;
    }
 L105: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      return 22;
    }
  x1 = XEXP (x0, 0);
  goto L789;

 L102: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 21;
    }
  x1 = XEXP (x0, 1);
  goto L105;

 L178: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L850;
  x1 = XEXP (x0, 0);
  goto L1;

 L850: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT:
      goto L179;
    case FLOAT_EXTEND:
      goto L187;
    case PLUS:
      goto L227;
    case MINUS:
      goto L261;
    case MULT:
      goto L282;
    case DIV:
      goto L297;
    case NEG:
      goto L419;
    case ABS:
      goto L435;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1;

 L179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      return 35;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    {
      operands[1] = x2;
      return 37;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L228;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    {
      operands[2] = x2;
      return 44;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L261: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L262;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    {
      operands[2] = x2;
      return 50;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L283;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    {
      operands[2] = x2;
      return 54;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L297: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L298;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L298: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    {
      operands[2] = x2;
      return 57;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    {
      operands[1] = x2;
      return 80;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L435: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    {
      operands[1] = x2;
      return 84;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L786: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L108;
    }
 L790: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L182;
    }
  goto L1;

 L108: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L109;
    }
 L112: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SFmode))
    {
      operands[1] = x1;
      return 24;
    }
  x1 = XEXP (x0, 0);
  goto L790;

 L109: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_CHAR_INSTRUCTIONS))
    {
      return 23;
    }
  x1 = XEXP (x0, 1);
  goto L112;

 L182: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L858;
  x1 = XEXP (x0, 0);
  goto L1;

 L858: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case FLOAT_TRUNCATE:
      goto L183;
    case PLUS:
      goto L232;
    case MINUS:
      goto L266;
    case MULT:
      goto L287;
    case DIV:
      goto L302;
    case NEG:
      goto L423;
    case ABS:
      goto L439;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L1;

 L183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DFmode))
    {
      operands[1] = x2;
      return 36;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L233;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    {
      operands[2] = x2;
      return 45;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L267;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L267: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    {
      operands[2] = x2;
      return 51;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L287: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L288;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    {
      operands[2] = x2;
      return 55;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L303;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    {
      operands[2] = x2;
      return 58;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    {
      operands[1] = x2;
      return 81;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SFmode))
    {
      operands[1] = x2;
      return 85;
    }
  x1 = XEXP (x0, 0);
  goto L1;

 L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    case DImode:
      goto L865;
    case SImode:
      goto L866;
    case HImode:
      goto L867;
    default:
      break;
    }
 L17: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == COMPARE)
    goto L18;
  if (general_operand (x1, DFmode))
    {
      operands[0] = x1;
      return 3;
    }
 L14: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SFmode))
    {
      operands[0] = x1;
      return 4;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L865: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      return 0;
    }
  goto L17;

 L866: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      return 1;
    }
  goto L17;

 L867: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, HImode))
    {
      operands[0] = x1;
      return 2;
    }
  goto L17;

 L18: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L868;
    case HImode:
      goto L869;
    case QImode:
      goto L870;
    default:
      break;
    }
  if (general_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L40;
    }
 L44: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L45;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L868: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L19;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L19: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      return 5;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L869: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L24;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L24: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      return 6;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L870: ATTRIBUTE_UNUSED_LABEL
  if (r_or_s_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L29;
    }
 L871: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L35;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L29: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L30;
    }
  x2 = XEXP (x1, 0);
  goto L871;

 L30: ATTRIBUTE_UNUSED_LABEL
  if ((unsigned_jump_follows_p (insn)))
    {
      return 7;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L871;

 L35: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      return 8;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L40: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    {
      operands[1] = x2;
      return 9;
    }
  x2 = XEXP (x1, 0);
  goto L44;

 L45: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    {
      operands[1] = x2;
      return 10;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L97: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L98;
    }
  goto L759;

 L98: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      return 20;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L529: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L530;
    case LABEL_REF:
      goto L744;
    default:
     break;
   }
 L747: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SImode))
    {
      operands[0] = x1;
      return 127;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case EQ:
      goto L531;
    case NE:
      goto L540;
    case GT:
      goto L549;
    case GTU:
      goto L558;
    case LT:
      goto L567;
    case LTU:
      goto L576;
    case GE:
      goto L585;
    case GEU:
      goto L594;
    case LE:
      goto L603;
    case LEU:
      goto L612;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L759;

 L531: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L532;
  x1 = XEXP (x0, 0);
  goto L759;

 L532: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L533;
  x1 = XEXP (x0, 0);
  goto L759;

 L533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L534;
    case PC:
      goto L624;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L759;

 L534: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L535;

 L535: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 104;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L624: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L625;
  x1 = XEXP (x0, 0);
  goto L759;

 L625: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 114;

 L540: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L541;
  x1 = XEXP (x0, 0);
  goto L759;

 L541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L542;
  x1 = XEXP (x0, 0);
  goto L759;

 L542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L543;
    case PC:
      goto L633;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L759;

 L543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L544;

 L544: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 105;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L634;
  x1 = XEXP (x0, 0);
  goto L759;

 L634: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 115;

 L549: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L550;
  x1 = XEXP (x0, 0);
  goto L759;

 L550: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L551;
  x1 = XEXP (x0, 0);
  goto L759;

 L551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L552;
    case PC:
      goto L642;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L759;

 L552: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L553;

 L553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 106;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L642: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L643;
  x1 = XEXP (x0, 0);
  goto L759;

 L643: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 116;

 L558: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L559;
  x1 = XEXP (x0, 0);
  goto L759;

 L559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L560;
  x1 = XEXP (x0, 0);
  goto L759;

 L560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L561;
    case PC:
      goto L651;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L759;

 L561: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L562;

 L562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 107;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L652;
  x1 = XEXP (x0, 0);
  goto L759;

 L652: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 117;

 L567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L568;
  x1 = XEXP (x0, 0);
  goto L759;

 L568: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L569;
  x1 = XEXP (x0, 0);
  goto L759;

 L569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L570;
    case PC:
      goto L660;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L759;

 L570: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L571;

 L571: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 108;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L661;
  x1 = XEXP (x0, 0);
  goto L759;

 L661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 118;

 L576: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L577;
  x1 = XEXP (x0, 0);
  goto L759;

 L577: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L578;
  x1 = XEXP (x0, 0);
  goto L759;

 L578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L579;
    case PC:
      goto L669;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L759;

 L579: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L580;

 L580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 109;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L669: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L670;
  x1 = XEXP (x0, 0);
  goto L759;

 L670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 119;

 L585: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L586;
  x1 = XEXP (x0, 0);
  goto L759;

 L586: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L587;
  x1 = XEXP (x0, 0);
  goto L759;

 L587: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L588;
    case PC:
      goto L678;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L759;

 L588: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L589;

 L589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 110;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L679;
  x1 = XEXP (x0, 0);
  goto L759;

 L679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 120;

 L594: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L595;
  x1 = XEXP (x0, 0);
  goto L759;

 L595: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L596;
  x1 = XEXP (x0, 0);
  goto L759;

 L596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L597;
    case PC:
      goto L687;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L759;

 L597: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L598;

 L598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 111;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L688;
  x1 = XEXP (x0, 0);
  goto L759;

 L688: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 121;

 L603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L604;
  x1 = XEXP (x0, 0);
  goto L759;

 L604: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L605;
  x1 = XEXP (x0, 0);
  goto L759;

 L605: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L606;
    case PC:
      goto L696;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L759;

 L606: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L607;

 L607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 112;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L697;
  x1 = XEXP (x0, 0);
  goto L759;

 L697: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 122;

 L612: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0)
    goto L613;
  x1 = XEXP (x0, 0);
  goto L759;

 L613: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0)
    goto L614;
  x1 = XEXP (x0, 0);
  goto L759;

 L614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L615;
    case PC:
      goto L705;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L759;

 L615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L616;

 L616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC)
    {
      return 113;
    }
  x1 = XEXP (x0, 0);
  goto L759;

 L705: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L706;
  x1 = XEXP (x0, 0);
  goto L759;

 L706: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  return 123;

 L744: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  return 126;

 L760: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL)
    goto L761;
  goto ret0;

 L761: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode)
    goto L872;
  goto ret0;

 L872: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L762;
    }
 L873: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L772;
  goto ret0;

 L762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      return 130;
    }
  x2 = XEXP (x1, 0);
  goto L873;

 L772: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L773;

 L773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L774;
    }
  goto ret0;

 L774: ATTRIBUTE_UNUSED_LABEL
  if ((GET_CODE (operands[1]) == SYMBOL_REF))
    {
      return 132;
    }
  goto ret0;
 ret0:
  return -1;
}

int recog PARAMS ((rtx, rtx, int *));
int
recog (x0, insn, pnum_clobbers)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case SET:
      goto L72;
    case PARALLEL:
      goto L776;
    case CALL:
      goto L756;
    case CONST_INT:
      goto L778;
    default:
     break;
   }
  goto ret0;

 L72: ATTRIBUTE_UNUSED_LABEL
  return recog_1 (x0, insn, pnum_clobbers);

 L776: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L47;
    case 5:
      goto L56;
    default:
      break;
    }
  goto ret0;

 L47: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L48;
  goto ret0;

 L48: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L874;
    case BLKmode:
      goto L875;
    default:
      break;
    }
 L709: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L710;
  goto ret0;

 L874: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L49;
    }
  goto L709;

 L49: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L876;
  x2 = XEXP (x1, 0);
  goto L709;

 L876: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case COMPARE:
      goto L50;
    case FIX:
      goto L166;
    case PLUS:
      goto L192;
    case MINUS:
      goto L238;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L709;

 L50: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_operand (x3, BLKmode))
    {
      operands[1] = x3;
      goto L51;
    }
  x2 = XEXP (x1, 0);
  goto L709;

 L51: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_operand (x3, BLKmode))
    {
      operands[2] = x3;
      goto L52;
    }
  x2 = XEXP (x1, 0);
  goto L709;

 L52: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L53;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L709;

 L53: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L54;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L709;

 L54: ATTRIBUTE_UNUSED_LABEL
  if ((((unsigned) INTVAL (operands[3]) <= 256)))
    {
      return 11;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L709;

 L166: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode
      && GET_CODE (x3) == TRUNCATE)
    goto L167;
  x2 = XEXP (x1, 0);
  goto L709;

 L167: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (general_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L168;
    }
  x2 = XEXP (x1, 0);
  goto L709;

 L168: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L169;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L709;

 L169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 16)
    {
      return 34;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L709;

 L192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L193;
    }
  x2 = XEXP (x1, 0);
  goto L709;

 L193: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L194;
    }
  x2 = XEXP (x1, 0);
  goto L709;

 L194: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L195;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L709;

 L195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L196;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L709;

 L196: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  return 38;

 L238: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L239;
    }
  x2 = XEXP (x1, 0);
  goto L709;

 L239: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L240;
    }
  x2 = XEXP (x1, 0);
  goto L709;

 L240: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L241;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L709;

 L241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L242;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L709;

 L242: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  return 46;

 L875: ATTRIBUTE_UNUSED_LABEL
  if (s_operand (x2, BLKmode))
    {
      operands[0] = x2;
      goto L116;
    }
  goto L709;

 L116: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_operand (x2, BLKmode))
    {
      operands[1] = x2;
      goto L117;
    }
  x2 = XEXP (x1, 0);
  goto L709;

 L117: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L118;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L709;

 L118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L119;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L709;

 L119: ATTRIBUTE_UNUSED_LABEL
  if ((((unsigned) INTVAL (operands[2]) <= 256)))
    {
      return 25;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L709;

 L710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L711;
  if (general_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L752;
    }
  goto ret0;

 L711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case NE:
      goto L712;
    case EQ:
      goto L729;
    default:
     break;
   }
  goto ret0;

 L712: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L713;
  goto ret0;

 L713: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[0] = x5;
      goto L714;
    }
  goto ret0;

 L714: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == -1)
    goto L715;
  goto ret0;

 L715: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L716;
  goto ret0;

 L716: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L717;
  goto ret0;

 L717: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  goto L718;

 L718: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L719;
  goto ret0;

 L719: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L720;
  goto ret0;

 L720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L721;
  goto ret0;

 L721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L722;
  goto ret0;

 L722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L723;
  goto ret0;

 L723: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1)
    {
      return 124;
    }
  goto ret0;

 L729: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L730;
  goto ret0;

 L730: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[0] = x5;
      goto L731;
    }
  goto ret0;

 L731: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == -1)
    goto L732;
  goto ret0;

 L732: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0)
    goto L733;
  goto ret0;

 L733: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PC)
    goto L734;
  goto ret0;

 L734: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L735;
  goto ret0;

 L735: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  goto L736;

 L736: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L737;
  goto ret0;

 L737: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L738;
  goto ret0;

 L738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L739;
  goto ret0;

 L739: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L740;
  goto ret0;

 L740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1)
    {
      return 125;
    }
  goto ret0;

 L752: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L753;
  goto ret0;

 L753: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L754;
  goto ret0;

 L754: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  return 128;

 L56: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L57;
  goto ret0;

 L57: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L880;
    case BLKmode:
      goto L881;
    default:
      break;
    }
  goto ret0;

 L880: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L58;
    }
  goto ret0;

 L58: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == COMPARE)
    goto L59;
  goto ret0;

 L59: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L60;
  goto ret0;

 L60: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L61;
    }
  goto ret0;

 L61: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == BLKmode
      && GET_CODE (x3) == MEM)
    goto L62;
  goto ret0;

 L62: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L63;
    }
  goto ret0;

 L63: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L64;
  goto ret0;

 L64: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L65;
  goto ret0;

 L65: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L66;
  goto ret0;

 L66: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[2]))
    goto L67;
  goto ret0;

 L67: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L68;
  goto ret0;

 L68: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L69;
  goto ret0;

 L69: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L70;
  goto ret0;

 L70: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[2]))
    {
      return 12;
    }
  goto ret0;

 L881: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L123;
  goto ret0;

 L123: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[0] = x3;
      goto L124;
    }
  goto ret0;

 L124: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == MEM)
    goto L125;
  goto ret0;

 L125: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L126;
    }
  goto ret0;

 L126: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L127;
  goto ret0;

 L127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L128;
  goto ret0;

 L128: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L129;
  goto ret0;

 L129: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    goto L130;
  goto ret0;

 L130: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER)
    goto L131;
  goto ret0;

 L131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L132;
  goto ret0;

 L132: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L133;
  goto ret0;

 L133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[1]))
    {
      return 26;
    }
  goto ret0;

 L756: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == QImode)
    goto L882;
  goto ret0;

 L882: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L757;
    }
 L883: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L765;
  goto ret0;

 L757: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (immediate_operand (x1, SImode))
    {
      operands[1] = x1;
      return 129;
    }
  x1 = XEXP (x0, 0);
  goto L883;

 L765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  goto L766;

 L766: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L767;
    }
  goto ret0;

 L767: ATTRIBUTE_UNUSED_LABEL
  if ((GET_CODE (operands[0]) == SYMBOL_REF))
    {
      return 131;
    }
  goto ret0;

 L778: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x0, 0) == 0)
    {
      return 133;
    }
  goto ret0;
 ret0:
  return -1;
}

rtx split_insns PARAMS ((rtx, rtx));
rtx
split_insns (x0, insn)
     rtx x0 ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;
  goto ret0;
 ret0:
  return 0;
}

