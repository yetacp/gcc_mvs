/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"

static const char *output_0 PARAMS ((rtx *, rtx));

static const char *
output_0 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  return "SRDA	%0,0";
}
}

static const char *output_1 PARAMS ((rtx *, rtx));

static const char *
output_1 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "LTR	%0,%0";
}
}

static const char *output_2 PARAMS ((rtx *, rtx));

static const char *
output_2 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 2);
  return "CH	%0,=H'0'";
}
}

static const char *output_3 PARAMS ((rtx *, rtx));

static const char *
output_3 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "LTDR	%0,%0";
}
}

static const char *output_4 PARAMS ((rtx *, rtx));

static const char *
output_4 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "LTER	%0,%0";
}
}

static const char *output_5 PARAMS ((rtx *, rtx));

static const char *
output_5 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[1]))
    {
      mvs_check_page (0, 2, 0);
      if (unsigned_jump_follows_p (insn))
	return "CLR	%0,%1";
      return "CR	%0,%1";
    }
  if (GET_CODE (operands[1]) == CONST_INT)
    {
      mvs_check_page (0, 4, 4);
      if (unsigned_jump_follows_p (insn))
	 return "CL	%0,=F'%c1'";
      return "C	%0,=F'%c1'";
    }
  mvs_check_page (0, 4, 0);
  if (unsigned_jump_follows_p (insn))
    return "CL	%0,%1";
  return "C	%0,%1";
}
}

static const char *output_6 PARAMS ((rtx *, rtx));

static const char *
output_6 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[1]))
    {
      mvs_check_page (0, 8, 0);
      if (unsigned_jump_follows_p (insn))
	return "STH	%1," CONVLO "(,13)\n\tCLM	%0,3," CONVLO "(13)";
      return "STH	%1," CONVLO "(,13)\n\tCH	%0," CONVLO "(,13)";
    }
  if (GET_CODE (operands[1]) == CONST_INT)
    {
      if (unsigned_jump_follows_p (insn))
        {
      mvs_check_page (0, 4, 2);
      return "CLM	%0,3,%H1";
        }
      mvs_check_page (0, 4, 2);
      return "CH	%0,%H1";
    }
  if (unsigned_jump_follows_p (insn))
    {
      mvs_check_page (0, 10, 0);
      if (REG_P (operands[1]))
	return "STH	%1," CONVLO "(,13)\n\tCLM	%0,3," CONVLO "(13)";
      return "MVC	" CONVLO "(2,13),%1\n\tCLM	%0,3," CONVLO "(13)";
    }
  mvs_check_page (0, 4, 0);
  return "CH	%0,%1";
}
}

static const char *output_7 PARAMS ((rtx *, rtx));

static const char *
output_7 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 8, 0);
          return "STC	%1," CONVLO "(,13)\n\tCLM	%0,1," CONVLO "(13)";
        }
      if (GET_CODE (operands[1]) == CONST_INT)
	{
	  mvs_check_page (0, 4, 1);
          return "CLM	%0,1,=XL1'%X1'";
        }
      mvs_check_page (0, 4, 0);
      return "CLM	%0,1,%1";
    }
  else if (GET_CODE (operands[0]) == CONST_INT)
    {
      cc_status.flags |= CC_REVERSED;
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 4, 1);
          return "CLM	%1,1,=XL1'%X0'";
        }
      mvs_check_page (0, 4, 0);
      return "CLI	%1,%B0";
    }
  if (GET_CODE (operands[1]) == CONST_INT)
    {
      mvs_check_page (0, 4, 0);
      return "CLI	%0,%B1";
    }
  if (GET_CODE (operands[1]) == MEM)
    {
      mvs_check_page (0, 6, 0);
      return "CLC	%O0(1,%R0),%1";
    }
  cc_status.flags |= CC_REVERSED;
  mvs_check_page (0, 4, 0);
  return "CLM	%1,1,%0";
}
}

static const char *output_8 PARAMS ((rtx *, rtx));

static const char *
output_8 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (unsigned_jump_follows_p (insn))
    {
      if (GET_CODE (operands[1]) == CONST_INT)
	{
	  mvs_check_page (0, 4, 1);
          return "CLM	%0,1,=XL1'%X1'";
        }
      if (!(REG_P (operands[1])))
	{
	  mvs_check_page (0, 4, 0);
          return "CLM	%0,1,%1";
        }
      mvs_check_page (0, 8, 0);
      return "STC	%1," CONVLO "(,13)\n\tCLM	%0,1," CONVLO "(13)";
    }
  if (REG_P (operands[1]))
    {
      mvs_check_page (0, 18, 0);
      return "SLL	%0,24\n\tSRA	%0,24\n\tSLL	%1,24\n\tSRA	%1,24\n\tCR	%0,%1";
    }
  mvs_check_page (0, 12, 0);
  return "SLL	%0,24\n\tSRA	%0,24\n\tC	%0,%1";
}
}

static const char *output_9 PARAMS ((rtx *, rtx));

static const char *
output_9 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 2, 0);
	  return "CDR	%0,%1";
	}
      mvs_check_page (0, 4, 0);
      return "CD	%0,%1";
    }
  cc_status.flags |= CC_REVERSED;
  mvs_check_page (0, 4, 0);
  return "CD	%1,%0";
}
}

static const char *output_10 PARAMS ((rtx *, rtx));

static const char *
output_10 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
check_label_emit ();
  if (FP_REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 2, 0);
	  return "CER	%0,%1";
	}
      mvs_check_page (0, 4, 0);
      return "CE	%0,%1";
    }
  cc_status.flags |= CC_REVERSED;
  mvs_check_page (0, 4, 0);
  return "CE	%1,%0";
}
}

static const char *output_11 PARAMS ((rtx *, rtx));

static const char *
output_11 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 22, 0);
  return "CLC	%O1(%c3,%R1),%2\n\tLA	%0,1(0,0)\n\tBH	*+12\n\tBL	*+6\n\tSLR	%0,%0\n\tLNR	%0,%0";
}
}

static const char *output_12 PARAMS ((rtx *, rtx));

static const char *
output_12 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 18, 0);
  return "LA	%0,1(0,0)\n\tCLCL	%1,%2\n\tBH	*+12\n\tBL	*+6\n\tSLR	%0,%0\n\tLNR	%0,%0";
}
}

static const char *output_13 PARAMS ((rtx *, rtx));

static const char *
output_13 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 8, 0);
	  return "STD	%1," CONVLO "(,13)\n\tLM	%0,%N0," CONVLO "(13)";
	}
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 4, 0);
	  return "LR	%0,%1\n\tLR	%N0,%N1";
	}
      if (operands[1] == const0_rtx)
	{
	  CC_STATUS_INIT;
	  mvs_check_page (0, 4, 0);
	  return "SLR	%0,%0\n\tSLR	%N0,%N0";
	}
      if (GET_CODE (operands[1]) == CONST_INT
  	  && (unsigned) INTVAL (operands[1]) < 4096)
	{
	  CC_STATUS_INIT;
	  mvs_check_page (0, 6, 0);
	  return "SLR	%0,%0\n\tLA	%N0,%c1(0,0)";
	}
      if (GET_CODE (operands[1]) == CONST_INT)
	{
	  CC_STATUS_SET (operands[0], operands[1]);
	  mvs_check_page (0, 8, 0);
	  return "L	%0,%1\n\tSRDA	%0,32";
	}
      if (GET_CODE (operands[1]) == CONST_DOUBLE)
	{
	  mvs_check_page (0, 6, 8);
	  return "LM	%0,%N0,%1";
	}
      mvs_check_page (0, 4, 0);
      /*return "LM	%0,%N0,%1";*/
      return "L	%0,%1\n\tL	%N0,4+%1";
    }
  else if (FP_REG_P (operands[1]))
    {
      mvs_check_page (0, 4, 0);
      return "STD	%1,%0";
    }
  else if (REG_P (operands[1]))
    {
      mvs_check_page (0, 4, 0);
      /*return "STM	%1,%N1,%0"; */
      return "ST	%1,%0\n\tST	%N1,4+%0"; 
    }
  mvs_check_page (0, 6, 8);
  return "MVC	%O0(8,%R0),%1";
}
}

static const char *output_14 PARAMS ((rtx *, rtx));

static const char *
output_14 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 8, 0);
	  return "STD	%1," CONVLO "(,13)\n\tLM	%0,%N0," CONVLO "(13)";
	}
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 4, 0);
	  return "LR	%0,%1\n\tLR	%N0,%N1";
	}
      if (operands[1] == const0_rtx)
	{
	  CC_STATUS_INIT;
	  mvs_check_page (0, 4, 0);
	  return "SLR	%0,%0\n\tSLR	%N0,%N0";
	}
      if (GET_CODE (operands[1]) == CONST_INT
  	  && (unsigned) INTVAL (operands[1]) < 4096)
	{
	  CC_STATUS_INIT;
	  mvs_check_page (0, 6, 0);
	  return "SLR	%0,%0\n\tLA	%N0,%c1(0,0)";
	}
      if (GET_CODE (operands[1]) == CONST_INT)
	{
	  CC_STATUS_SET (operands[0], operands[1]);
	  mvs_check_page (0, 8, 0);
	  return "L	%0,%1\n\tSRDA	%0,32";
	}
      mvs_check_page (0, 4, 0);
      /*return "LM	%0,%N0,%1";*/
      return "L	%0,%1\n\tL	%N0,4+%1";
    }
  else if (FP_REG_P (operands[1]))
    {
      mvs_check_page (0, 4, 0);
      return "STD	%1,%0";
    }
  mvs_check_page (0, 4, 0);
  /*return "STM	%1,%N1,%0"; */
  return "ST	%1,%0\n\tST	%N1,4+%0"; 
}
}

static const char *output_15 PARAMS ((rtx *, rtx));

static const char *
output_15 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 8, 0);
	  return "STE	%1," CONVLO "(,13)\n\tL	%0," CONVLO "(,13)";
	}
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 2, 0);
	  return "LR	%0,%1";
	}
      if (operands[1] == const0_rtx)
	{
	  CC_STATUS_INIT;
	  mvs_check_page (0, 2, 0);
	  return "SLR	%0,%0";
	}
      if (GET_CODE (operands[1]) == CONST_INT
	  && (unsigned) INTVAL (operands[1]) < 4096)
	{
	  mvs_check_page (0, 4, 0);
	  return "LA	%0,%c1(0,0)";
	}
      mvs_check_page (0, 4, 0);
      return "L	%0,%1";
    }
  else if (FP_REG_P (operands[1]))
    {
      mvs_check_page (0, 4, 0);
      return "STE	%1,%0";
    }
  else if (!REG_P (operands[1]))
    {
      mvs_check_page (0, 6, 0);
      return "MVC	%O0(4,%R0),%1";
    }
  mvs_check_page (0, 4, 0);
  return "ST	%1,%0";
}
}

static const char *output_16 PARAMS ((rtx *, rtx));

static const char *
output_16 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 2, 0);
	  return "LR	%0,%1";
	}
      if (operands[1] == const0_rtx)
	{
	  CC_STATUS_INIT;
	  mvs_check_page (0, 2, 0);
	  return "SLR	%0,%0";
	}
      if (GET_CODE (operands[1]) == CONST_INT
	  && (unsigned) INTVAL (operands[1]) < 4096)
	{
	  mvs_check_page (0, 4, 0);
	  return "LA	%0,%c1(0,0)";
	}
      if (GET_CODE (operands[1]) == CONST_INT)
	{
	  mvs_check_page (0, 4, 2);
	  return "LH	%0,%H1";
	}
      mvs_check_page (0, 4, 0);
      return "LH	%0,%1";
    }
  else if (REG_P (operands[1]))
    {
      mvs_check_page (0, 4, 0);
      return "STH	%1,%0";
    }
  if (GET_CODE (operands[1]) == CONST_INT)
    {
      mvs_check_page (0, 6, 2);
      return "MVC	%O0(2,%R0),%H1";
    }
  mvs_check_page (0, 6, 0);
  return "MVC	%O0(2,%R0),%1";
}
}

static const char *output_17 PARAMS ((rtx *, rtx));

static const char *
output_17 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 2, 0);
	  return "LR	%0,%1";
	}
      if (operands[1] == const0_rtx)
	{
	  CC_STATUS_INIT;
	  mvs_check_page (0, 2, 0);
	  return "SLR	%0,%0";
	}
      if (GET_CODE (operands[1]) == CONST_INT
	  && (unsigned) INTVAL (operands[1]) < 4096)
	{
	  mvs_check_page (0, 4, 0);
	  return "LA	%0,%c1(0,0)";
	}
      if (GET_CODE (operands[1]) == CONST_INT)
	{
	  mvs_check_page (0, 4, 2);
	  return "LH	%0,%H1";
	}
      mvs_check_page (0, 4, 0);
      return "LH	%0,%1";
    }
  mvs_check_page (0, 4, 0);
  return "STH	%1,%0";
}
}

static const char *output_18 PARAMS ((rtx *, rtx));

static const char *
output_18 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 2, 0);
	  return "LR	%0,%1";
	}
      if (operands[1] == const0_rtx)
	{
	  CC_STATUS_INIT;
	  mvs_check_page (0, 2, 0);
	  return "SLR	%0,%0";
	}
      if (GET_CODE (operands[1]) == CONST_INT)
	{
	  if ((INTVAL (operands[1]) >= 0)
  	      && (unsigned) INTVAL (operands[1]) < 4096)
	    {
	      mvs_check_page (0, 4, 0);
	      return "LA	%0,%c1(0,0)";
	    }
	  mvs_check_page (0, 4, 4);
	  return "L	%0,=F'%c1'";
	}
      mvs_check_page (0, 4, 0);
      return "IC	%0,%1";
    }
  else if (REG_P (operands[1]))
    {
      mvs_check_page (0, 4, 0);
      return "STC	%1,%0";
    }
  else if (GET_CODE (operands[1]) == CONST_INT)
    {
      mvs_check_page (0, 4, 0);
      return "MVI	%0,%B1";
    }
  mvs_check_page (0, 6, 0);
  return "MVC	%O0(1,%R0),%1";
}
}

static const char *output_19 PARAMS ((rtx *, rtx));

static const char *
output_19 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 2, 0);
	  return "LR	%0,%1";
	}
      if (operands[1] == const0_rtx)
	{
	  CC_STATUS_INIT;
	  mvs_check_page (0, 2, 0);
	  return "SLR	%0,%0";
	}
      if (GET_CODE (operands[1]) == CONST_INT)
	{
	  if ((INTVAL (operands[1]) >= 0)
  	      && (unsigned) INTVAL (operands[1]) < 4096)
	    {
	      mvs_check_page (0, 4, 0);
	      return "LA	%0,%c1(0,0)";
	    }
	  mvs_check_page (0, 4, 4);
	  return "L	%0,=F'%c1'";
	}
      mvs_check_page (0, 4, 0);
      return "IC	%0,%1";
    }
  mvs_check_page (0, 4, 0);
  return "STC	%1,%0";
}
}

static const char *output_20 PARAMS ((rtx *, rtx));

static const char *
output_20 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      mvs_check_page (0, 8, 0);
      return "STH	%1," CONVLO "(,13)\n\tICM	%0,3," CONVLO "(13)";
    }
  mvs_check_page (0, 4, 0);
  return "STH	%1,%0";
}
}

static const char *output_21 PARAMS ((rtx *, rtx));

static const char *
output_21 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 2, 0);
	  return "LDR	%0,%1";
	}
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 8, 0);
	  return "STM	%1,%N1," CONVLO "(13)\n\tLD	%0," CONVLO "(,13)";
	}
      if (operands[1] == const0_rtx)
	{
	  CC_STATUS_SET (operands[0], operands[1]);
	  mvs_check_page (0, 2, 0);
	  return "SDR	%0,%0";
	}
      mvs_check_page (0, 4, 0);
      return "LD	%0,%1";
    }
  if (REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 12, 0);
	  return "STD	%1," CONVLO "(,13)\n\tLM	%0,%N0," CONVLO "(13)";
	}
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 4, 0);
	  return "LR	%0,%1\n\tLR	%N0,%N1";
	}
      mvs_check_page (0, 4, 0);
      return "LM	%0,%N0,%1";
      /*return "L	%0,%1\n\tL	%N0,4+%1";*/
    }
  else if (FP_REG_P (operands[1]))
    {
      mvs_check_page (0, 4, 0);
      return "STD	%1,%0";
    }
  else if (REG_P (operands[1]))
    {
      mvs_check_page (0, 4, 0);
      /*return "STM	%1,%N1,%0"; */
      return "ST	%1,%0\n\tST	%N1,4+%0"; 
    }
  mvs_check_page (0, 6, 8);
  return "MVC	%O0(8,%R0),%1";
}
}

static const char *output_22 PARAMS ((rtx *, rtx));

static const char *
output_22 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 2, 0);
	  return "LDR	%0,%1";
	}
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 8, 0);
	  return "STM	%1,%N1," CONVLO "(13)\n\tLD	%0," CONVLO "(,13)";
	}
      if (operands[1] == const0_rtx)
	{
	  CC_STATUS_SET (operands[0], operands[1]);
	  mvs_check_page (0, 2, 0);
	  return "SDR	%0,%0";
	}
      mvs_check_page (0, 4, 0);
      return "LD	%0,%1";
    }
  else if (REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 12, 0);
	  return "STD	%1," CONVLO "(,13)\n\tLM	%0,%N0," CONVLO "(13)";
	}
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 4, 0);
	  return "LR	%0,%1\n\tLR	%N0,%N1";
	}
      mvs_check_page (0, 4, 0);
      /*return "LM	%0,%N0,%1";*/
      return "L	%0,%1\n\tL	%N0,4+%1";
    }
  else if (FP_REG_P (operands[1]))
    {
      mvs_check_page (0, 4, 0);
      return "STD	%1,%0";
    }
  mvs_check_page (0, 4, 0);
  /*return "STM	%1,%N1,%0"; */
  return "ST	%1,%0\n\tST	%N1,4+%0"; 
}
}

static const char *output_23 PARAMS ((rtx *, rtx));

static const char *
output_23 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 2, 0);
	  return "LER	%0,%1";
	}
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 8, 0);
	  return "ST	%1," CONVLO "(,13)\n\tLE	%0," CONVLO "(,13)";
	}
      if (operands[1] == const0_rtx)
	{
	  CC_STATUS_SET (operands[0], operands[1]);
	  mvs_check_page (0, 2, 0);
	  return "SER	%0,%0";
	}
      mvs_check_page (0, 4, 0);
      return "LE	%0,%1";
    }
  else if (REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 8, 0);
	  return "STE	%1," CONVLO "(,13)\n\tL	%0," CONVLO "(,13)";
	}
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 2, 0);
	  return "LR	%0,%1";
	}
      mvs_check_page (0, 4, 0);
      return "L	%0,%1";
    }
  else if (FP_REG_P (operands[1]))
    {
      mvs_check_page (0, 4, 0);
      return "STE	%1,%0";
    }
  else if (REG_P (operands[1]))
    {
      mvs_check_page (0, 4, 0);
      return "ST	%1,%0";
    }
  mvs_check_page (0, 6, 0);
  return "MVC	%O0(4,%R0),%1";
}
}

static const char *output_24 PARAMS ((rtx *, rtx));

static const char *
output_24 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 2, 0);
	  return "LER	%0,%1";
	}
      if (REG_P (operands[1]))
	{
	  mvs_check_page (0, 8, 0);
	  return "ST	%1," CONVLO "(,13)\n\tLE	%0," CONVLO "(,13)";
	}
      if (operands[1] == const0_rtx)
	{
	  CC_STATUS_SET (operands[0], operands[1]);
	  mvs_check_page (0, 2, 0);
	  return "SER	%0,%0";
	}
      mvs_check_page (0, 4, 0);
      return "LE	%0,%1";
    }
  else if (REG_P (operands[0]))
    {
      if (FP_REG_P (operands[1]))
	{
	  mvs_check_page (0, 8, 0);
	  return "STE	%1," CONVLO "(,13)\n\tL	%0," CONVLO "(,13)";
	}
      mvs_check_page (0, 4, 0);
      return "L	%0,%1";
    }
  else if (FP_REG_P (operands[1]))
    {
      mvs_check_page (0, 4, 0);
      return "STE	%1,%0";
    }
  mvs_check_page (0, 4, 0);
  return "ST	%1,%0";
}
}

static const char *output_25 PARAMS ((rtx *, rtx));

static const char *
output_25 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 6, 0);
  return "MVC	%O0(%c2,%R0),%1";
}
}

static const char *output_26 PARAMS ((rtx *, rtx));

static const char *
output_26 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "MVCL	%0,%1";
}
}

static const char *output_27 PARAMS ((rtx *, rtx));

static const char *
output_27 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      if (REG_P (operands[1]))
      {
        if (REGNO (operands[0]) != REGNO (operands[1]))
	  {
	    mvs_check_page (0, 10, 0);
            return "LR	%0,%1\n\tSLL	%0,16\n\tSRA	%0,16";
	  }
        else
          return ""; /* Should be empty.  16-bits regs are always 32-bits.  */
      }
      if (operands[1] == const0_rtx)
	{
	  CC_STATUS_INIT;
	  mvs_check_page (0, 2, 0);
	  return "SLR	%0,%0";
	}
      if (GET_CODE (operands[1]) == CONST_INT
 	  && (unsigned) INTVAL (operands[1]) < 4096)
	{
	  mvs_check_page (0, 4, 0);
	  return "LA	%0,%c1(0,0)";
	}
      if (GET_CODE (operands[1]) == CONST_INT)
	{
	  mvs_check_page (0, 4, 2);
	  return "LH	%0,%H1";
	}
      mvs_check_page (0, 4, 0);
      return "LH	%0,%1";
    }
  mvs_check_page (0, 12, 0);
  return "SLL	%1,16\n\tSRA	%1,16\n\tST	%1,%0";
}
}

static const char *output_28 PARAMS ((rtx *, rtx));

static const char *
output_28 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_SET (operands[0], operands[1]);
  if (REG_P (operands[1]))
    {
      mvs_check_page (0, 8, 0);
      return "SLL	%0,24\n\tSRA	%0,24";
    }
  if (s_operand (operands[1], GET_MODE (operands[1])))
    {
      mvs_check_page (0, 8, 0);
      return "ICM	%0,8,%1\n\tSRA	%0,24";
    }
  mvs_check_page (0, 12, 0);
  return "IC	%0,%1\n\tSLL	%0,24\n\tSRA	%0,24";
}
}

static const char *output_29 PARAMS ((rtx *, rtx));

static const char *
output_29 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_SET (operands[0], operands[1]);
  if (REG_P (operands[1]))
    {
      mvs_check_page (0, 8, 0);
      return "SLL	%0,24\n\tSRA	%0,24";
    }
  if (s_operand (operands[1], GET_MODE (operands[1])))
    {
      mvs_check_page (0, 8, 0);
      return "ICM	%0,8,%1\n\tSRA	%0,24";
    }
  mvs_check_page (0, 12, 0);
  return "IC	%0,%1\n\tSLL	%0,24\n\tSRA	%0,24";
}
}

static const char *output_30 PARAMS ((rtx *, rtx));

static const char *
output_30 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  /* AND only sets zero/not-zero bits not the arithmetic bits ...  */
  CC_STATUS_INIT;
  mvs_check_page (0, 4, 4);
  return "N	%1,=XL4'0000FFFF'";
}
}

static const char *output_31 PARAMS ((rtx *, rtx));

static const char *
output_31 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[1]))
    {
      /* AND only sets zero/not-zero bits not the arithmetic bits ...  */
      CC_STATUS_INIT;
      mvs_check_page (0, 4, 4);
      return "N	%0,=XL4'000000FF'";
    }
  if (GET_CODE (operands[1]) == CONST_INT)
    {
      mvs_check_page (0, 4, 0);
      return "LA	%0,%c1(0,0)";
    }
  CC_STATUS_INIT;
  mvs_check_page (0, 8, 0);
  return "SLR	%0,%0\n\tIC	%0,%1";
}
}

static const char *output_32 PARAMS ((rtx *, rtx));

static const char *
output_32 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[1]))
    {
      /* AND only sets zero/not-zero bits not the arithmetic bits ...  */
      CC_STATUS_INIT;
      mvs_check_page (0, 4, 4);
      return "N	%0,=XL4'000000FF'";
    }
  if (GET_CODE (operands[1]) == CONST_INT)
    {
      mvs_check_page (0, 4, 0);
      return "LA	%0,%c1(0,0)";
    }
  CC_STATUS_INIT;
  mvs_check_page (0, 8, 0);
  return "SLR	%0,%0\n\tIC	%0,%1";
}
}

static const char *output_33 PARAMS ((rtx *, rtx));

static const char *
output_33 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      CC_STATUS_SET (operands[0], operands[1]);
      mvs_check_page (0, 8, 0);
      return "SLL	%0,16\n\tSRA	%0,16";
    }
  mvs_check_page (0, 4, 0);
  return "STH	%1,%0";
}
}

static const char *output_34 PARAMS ((rtx *, rtx));

static const char *
output_34 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;
  if (REGNO (operands[1]) == 16)
    {
      mvs_check_page (0, 12, 8);
      return "AD	0,=XL8'4F08000000000000'\n\tSTD	0," CONVLO "(,13)\n\tL	%0," CONVHI "(,13)";
    }
  mvs_check_page (0, 14, 8);
  return "LDR	0,%1\n\tAD	0,=XL8'4F08000000000000'\n\tSTD	0," CONVLO "(,13)\n\tL	%0," CONVHI "(,13)";
}
}

static const char *output_35 PARAMS ((rtx *, rtx));

static const char *
output_35 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;
#if defined(TARGET_LINUX)
  mvs_check_page (0, 22, 12);
  return "MVC	" CONVLO "(4,13),=XL4'4E000000'\n\tST	%1," CONVLO "+4(,13)\n\tXI	" CONVLO "+4(13),128\n\tLD	%0," CONVLO "(,13)\n\tSD	%0,=XL8'4E00000080000000'";
#elif defined(TARGET_DIGNUS) || defined(TARGET_PDPMAC)
  mvs_check_page (0, 22, 12);
  return "MVC	" CONVLO "(4,13),=XL8'4E00000080000000'\n\tST	%1," CONVHI "(,13)\n\tXI	" CONVHI "(13),128\n\tLD	%0," CONVLO "(,13)\n\tSD	%0,=XL8'4E00000080000000'";
#else
  mvs_check_page (0, 16, 8);
  return "ST	%1,508(,12)\n\tXI	508(12),128\n\tLD	%0,504(,12)\n\tSD	%0,=XL8'4E00000080000000'";
#endif
}
}

static const char *output_36 PARAMS ((rtx *, rtx));

static const char *
output_36 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "LRER	%0,%1";
}
}

static const char *output_37 PARAMS ((rtx *, rtx));

static const char *
output_37 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_SET (0, const0_rtx);
  if (FP_REG_P (operands[1]))
    {
      if (REGNO (operands[0]) == REGNO (operands[1]))
	{
	  mvs_check_page (0, 10, 0);
	  return "STE	%1," CONVLO "(,13)\n\tSDR	%0,%0\n\tLE	%0," CONVLO "(,13)";
	}
      mvs_check_page (0, 4, 0);
      return "SDR	%0,%0\n\tLER	%0,%1";
    }
  mvs_check_page (0, 6, 0);
  return "SDR	%0,%0\n\tLE	%0,%1";
}
}

static const char *output_38 PARAMS ((rtx *, rtx));

static const char *
output_38 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  int onpage;

  check_label_emit ();
  onpage = mvs_check_label (CODE_LABEL_NUMBER (operands[3]));
  if (REG_P (operands[2]))
    {
      if (!onpage)
	{
	  mvs_check_page (0, 8, 4);
	  return "ALR	%0,%2\n\tL	14,=A(%l3)\n\tBCR	12,14";
	}
      if (mvs_check_page (0, 6, 0))
	{
	  mvs_check_page (0, 2, 4);
	  return "ALR	%0,%2\n\tL	14,=A(%l3)\n\tBCR	12,14";
	}
      return "ALR	%0,%2\n\tBC	12,%l3";
    }
  if (!onpage)
    {
      mvs_check_page (0, 10, 4);
      return "AL	%0,%2\n\tL	14,=A(%l3)\n\tBCR	12,14";
    }
  if (mvs_check_page (0, 8 ,0))
    {
      mvs_check_page (0, 2, 4);
      return "AL	%0,%2\n\tL	14,=A(%l3)\n\tBCR	12,14";
    }
  return "AL	%0,%2\n\tBC	12,%l3";
}
}

static const char *output_39 PARAMS ((rtx *, rtx));

static const char *
output_39 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* add assumes CC but LA doesn't set CC */
  mvs_check_page (0, 4, 0);
  return "LA	%0,%c2(,%1)";
}
}

static const char *output_40 PARAMS ((rtx *, rtx));

static const char *
output_40 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if ((unsigned) INTVAL (operands[2]) < 4096)
    {
      CC_STATUS_INIT;  /* add assumes CC but LA doesn't set CC */
      mvs_check_page (0, 4, 0);
      return "LA	%0,%c2(,%1)";
    }
  if (REGNO (operands[1]) == REGNO (operands[0]))
    {
      CC_STATUS_INIT;
      mvs_check_page (0, 4, 0);
      return "A	%0,%2";
    }
  mvs_check_page (0, 6, 0);
  return "L	%0,%2\n\tAR	%0,%1";
}
}

static const char *output_41 PARAMS ((rtx *, rtx));

static const char *
output_41 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "AR	%0,%2";
    }
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      if (INTVAL (operands[2]) == -1)
	{
          CC_STATUS_INIT;  /* add assumes CC but BCTR doesn't set CC */
	  mvs_check_page (0, 2, 0);
	  return "BCTR	%0,0";
	}
    }
  mvs_check_page (0, 4, 0);
  return "A	%0,%2";
}
}

static const char *output_42 PARAMS ((rtx *, rtx));

static const char *
output_42 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 8, 0);
      return "STH	%2," CONVLO "(,13)\n\tAH	%0," CONVLO "(,13)";
    }
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      if (INTVAL (operands[2]) == -1)
	{
          CC_STATUS_INIT;  /* add assumes CC but BCTR doesn't set CC */
	  mvs_check_page (0, 2, 0);
	  return "BCTR	%0,0";
	}
      mvs_check_page (0, 4, 2);
      return "AH	%0,%H2";
    }
  mvs_check_page (0, 4, 0);
  return "AH	%0,%2";
}
}

static const char *output_43 PARAMS ((rtx *, rtx));

static const char *
output_43 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* add assumes CC but LA doesn't set CC */
  mvs_check_page (0, 4, 0);
  if (REG_P (operands[2]))
    return "LA	%0,0(%1,%2)";
  return "LA	%0,%B2(,%1)";
}
}

static const char *output_44 PARAMS ((rtx *, rtx));

static const char *
output_44 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "ADR	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "AD	%0,%2";
}
}

static const char *output_45 PARAMS ((rtx *, rtx));

static const char *
output_45 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "AER	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "AE	%0,%2";
}
}

static const char *output_46 PARAMS ((rtx *, rtx));

static const char *
output_46 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  int onpage;

  check_label_emit ();
  CC_STATUS_INIT;
  onpage = mvs_check_label (CODE_LABEL_NUMBER (operands[3]));
  if (REG_P (operands[2]))
    {
      if (!onpage)
	{
	  mvs_check_page (0, 8, 4);
	  return "SLR	%0,%2\n\tL	14,=A(%l3)\n\tBCR	12,14";
	}
      if (mvs_check_page (0, 6, 0))
	{
	  mvs_check_page (0, 2, 4);
	  return "SLR	%0,%2\n\tL	14,=A(%l3)\n\tBCR	12,14";
	}
      return "SLR	%0,%2\n\tBC	12,%l3";
    }
  if (!onpage)
    {
      mvs_check_page (0, 10, 4);
      return "SL	%0,%2\n\tL	14,=A(%l3)\n\tBCR	12,14";
    }
  if (mvs_check_page (0, 8, 0))
    {
      mvs_check_page (0, 2, 4);
      return "SL	%0,%2\n\tL	14,=A(%l3)\n\tBCR	12,14";
    }
  return "SL	%0,%2\n\tBC	12,%l3";
}
}

static const char *output_47 PARAMS ((rtx *, rtx));

static const char *
output_47 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "SR	%0,%2";
    }
  if (operands[2] == const1_rtx)
    {
      CC_STATUS_INIT;  /* subtract assumes CC but BCTR doesn't set CC */
      mvs_check_page (0, 2, 0);
      return "BCTR	%0,0";
    }
  mvs_check_page (0, 4, 0);
  return "S	%0,%2";
}
}

static const char *output_48 PARAMS ((rtx *, rtx));

static const char *
output_48 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 8, 0);
      return "STH	%2," CONVLO "(,13)\n\tSH	%0," CONVLO "(,13)";
    }
  if (operands[2] == const1_rtx)
    {
      CC_STATUS_INIT;  /* subtract assumes CC but BCTR doesn't set CC */
      mvs_check_page (0, 2, 0);
      return "BCTR	%0,0";
    }
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      mvs_check_page (0, 4, 2);
      return "SH	%0,%H2";
    }
  mvs_check_page (0, 4, 0);
  return "SH	%0,%2";
}
}

static const char *output_49 PARAMS ((rtx *, rtx));

static const char *
output_49 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "SR	%0,%2";
}
}

static const char *output_50 PARAMS ((rtx *, rtx));

static const char *
output_50 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "SDR	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "SD	%0,%2";
}
}

static const char *output_51 PARAMS ((rtx *, rtx));

static const char *
output_51 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "SER	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "SE	%0,%2";
}
}

static const char *output_52 PARAMS ((rtx *, rtx));

static const char *
output_52 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  return "MH	%0,%H2";
}
}

static const char *output_53 PARAMS ((rtx *, rtx));

static const char *
output_53 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "MR	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "M	%0,%2";
}
}

static const char *output_54 PARAMS ((rtx *, rtx));

static const char *
output_54 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "MDR	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "MD	%0,%2";
}
}

static const char *output_55 PARAMS ((rtx *, rtx));

static const char *
output_55 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "MER	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "ME	%0,%2";
}
}

static const char *output_56 PARAMS ((rtx *, rtx));

static const char *
output_56 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "DR	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "D	%0,%2";
}
}

static const char *output_57 PARAMS ((rtx *, rtx));

static const char *
output_57 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "DDR	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "DD	%0,%2";
}
}

static const char *output_58 PARAMS ((rtx *, rtx));

static const char *
output_58 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (FP_REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "DER	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "DE	%0,%2";
}
}

static const char *output_59 PARAMS ((rtx *, rtx));

static const char *
output_59 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "DR	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "D	%0,%2";
}
}

static const char *output_60 PARAMS ((rtx *, rtx));

static const char *
output_60 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* AND sets CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "NR	%0,%2";
    }
  if (REG_P (operands[0]))
    {
      mvs_check_page (0, 4, 0);
      return "N	%0,%2";
    }
  mvs_check_page (0, 6, 0);
  return "NC	%O0(4,%R0),%2";
}
}

static const char *output_61 PARAMS ((rtx *, rtx));

static const char *
output_61 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* AND sets CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "NR	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "N	%0,%2";
}
}

static const char *output_62 PARAMS ((rtx *, rtx));

static const char *
output_62 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* AND sets CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "NR	%0,%2";
    }
  if (REG_P (operands[0]))
    {
      /* %K2 == sign extend operand to 32 bits so that CH works - huh??? */
      if (GET_CODE (operands[2]) == CONST_INT)
        {
          mvs_check_page (0, 4, 4);
          return "N	%0,%K2";
        }
      mvs_check_page (0, 4, 0);
      return "N	%0,%2";
    }
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      mvs_check_page (0, 6, 2);
      return "NC	%O0(2,%R0),%H2";
    }
  mvs_check_page (0, 6, 0);
  return "NC	%O0(2,%R0),%2";
}
}

static const char *output_63 PARAMS ((rtx *, rtx));

static const char *
output_63 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* AND sets CC but not how we want it */
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      /* %K2 == sign extend operand to 32 bits so that CH works - huh??? */
      mvs_check_page (0, 4, 4);
      return "N	%0,%K2";
    }
  mvs_check_page (0, 2, 0);
  return "NR	%0,%2";
}
}

static const char *output_64 PARAMS ((rtx *, rtx));

static const char *
output_64 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* AND sets CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "NR	%0,%2";
    }
  if (REG_P (operands[0]))
    {
      mvs_check_page (0, 4, 0);
      return "N	%0,%2";
    }
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      mvs_check_page (0, 4, 0);
      return "NI	%0,%B2";
    }
  mvs_check_page (0, 6, 0);
  return "NC	%O0(1,%R0),%2";
}
}

static const char *output_65 PARAMS ((rtx *, rtx));

static const char *
output_65 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* AND sets CC but not how we want it */
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      mvs_check_page (0, 4, 4);
      return "N	%0,=XL4'%X2'";
    }
  mvs_check_page (0, 2, 0);
  return "NR	%0,%2";
}
}

static const char *output_66 PARAMS ((rtx *, rtx));

static const char *
output_66 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* OR sets CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "OR	%0,%2";
    }
  if (REG_P (operands[0]))
    {
      mvs_check_page (0, 4, 0);
      return "O	%0,%2";
    }
  mvs_check_page (0, 6, 0);
  return "OC	%O0(4,%R0),%2";
}
}

static const char *output_67 PARAMS ((rtx *, rtx));

static const char *
output_67 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* OR sets CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "OR	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "O	%0,%2";
}
}

static const char *output_68 PARAMS ((rtx *, rtx));

static const char *
output_68 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* OR sets CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "OR	%0,%2";
    }
  if (REG_P (operands[0]))
    {
      /* %K2 == sign extend operand to 32 bits so that CH works - huh??? */
      if (GET_CODE (operands[2]) == CONST_INT)
        {
          mvs_check_page (0, 4, 4);
          return "O	%0,%K2";
        }
      mvs_check_page (0, 4, 0);
      return "O	%0,%2";
    }
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      mvs_check_page (0, 6, 2);
      return "OC	%O0(2,%R0),%H2";
    }
  mvs_check_page (0, 6, 0);
  return "OC	%O0(2,%R0),%2";
}
}

static const char *output_69 PARAMS ((rtx *, rtx));

static const char *
output_69 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* OR sets CC but not how we want it */
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      /* %K2 == sign extend operand to 32 bits so that CH works - huh??? */
      mvs_check_page (0, 4, 4);
      return "O	%0,%K2";
    }
  mvs_check_page (0, 2, 0);
  return "OR	%0,%2";
}
}

static const char *output_70 PARAMS ((rtx *, rtx));

static const char *
output_70 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* OR sets CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "OR	%0,%2";
    }
  if (REG_P (operands[0]))
    {
      mvs_check_page (0, 4, 0);
      return "O	%0,%2";
    }
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      mvs_check_page (0, 4, 0);
      return "OI	%0,%B2";
    }
  mvs_check_page (0, 6, 0);
  return "OC	%O0(1,%R0),%2";
}
}

static const char *output_71 PARAMS ((rtx *, rtx));

static const char *
output_71 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* OR sets CC but not how we want it */
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      mvs_check_page (0, 4, 4);
      return "O	%0,=XL4'%X2'";
    }
  mvs_check_page (0, 2, 0);
  return "OR	%0,%2";
}
}

static const char *output_72 PARAMS ((rtx *, rtx));

static const char *
output_72 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* XOR sets CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "XR	%0,%2";
    }
  if (REG_P (operands[0]))
    {
      mvs_check_page (0, 4, 0);
      return "X	%0,%2";
    }
  mvs_check_page (0, 6, 0);
  return "XC	%O0(4,%R0),%2";
}
}

static const char *output_73 PARAMS ((rtx *, rtx));

static const char *
output_73 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* XOR sets CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "XR	%0,%2";
    }
  mvs_check_page (0, 4, 0);
  return "X	%0,%2";
}
}

static const char *output_74 PARAMS ((rtx *, rtx));

static const char *
output_74 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* XOR sets CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "XR	%0,%2";
    }
  if (REG_P (operands[0]))
    {
      /* %K2 == sign extend operand to 32 bits so that CH works - huh??? */
      if (GET_CODE (operands[2]) == CONST_INT)
        {
          mvs_check_page (0, 4, 4);
          return "X	%0,%K2";
        }
      mvs_check_page (0, 4, 0);
      return "X	%0,%2";
    }
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      mvs_check_page (0, 6, 2);
      return "XC	%O0(2,%R0),%H2";
    }
  mvs_check_page (0, 6, 0);
  return "XC	%O0(2,%R0),%2";
}
}

static const char *output_75 PARAMS ((rtx *, rtx));

static const char *
output_75 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* XOR sets CC but not how we want it */
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      /* %K2 == sign extend operand to 32 bits so that CH works - huh??? */
      mvs_check_page (0, 4, 4);
      return "X	%0,%K2";
    }
  mvs_check_page (0, 2, 0);
  return "XR	%0,%2";
}
}

static const char *output_76 PARAMS ((rtx *, rtx));

static const char *
output_76 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* XOR sets CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 2, 0);
      return "XR	%0,%2";
    }
  if (REG_P (operands[0]))
    {
      mvs_check_page (0, 4, 0);
      return "X	%0,%2";
    }
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      mvs_check_page (0, 4, 0);
      return "XI	%0,%B2";
    }
  mvs_check_page (0, 6, 0);
  return "XC	%O0(1,%R0),%2";
}
}

static const char *output_77 PARAMS ((rtx *, rtx));

static const char *
output_77 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* XOR sets CC but not how we want it */
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      mvs_check_page (0, 4, 0);
      return "X	%0,=XL4'%X2'";
    }
  mvs_check_page (0, 2, 0);
  return "XR	%0,%2";
}
}

static const char *output_78 PARAMS ((rtx *, rtx));

static const char *
output_78 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "LCR	%0,%1";
}
}

static const char *output_79 PARAMS ((rtx *, rtx));

static const char *
output_79 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 10, 0);
  return "SLL	%1,16\n\tSRA	%1,16\n\tLCR	%0,%1";
}
}

static const char *output_80 PARAMS ((rtx *, rtx));

static const char *
output_80 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "LCDR	%0,%1";
}
}

static const char *output_81 PARAMS ((rtx *, rtx));

static const char *
output_81 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "LCER	%0,%1";
}
}

static const char *output_82 PARAMS ((rtx *, rtx));

static const char *
output_82 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "LPR	%0,%1";
}
}

static const char *output_83 PARAMS ((rtx *, rtx));

static const char *
output_83 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 10, 0);
  return "SLL	%1,16\n\tSRA	%1,16\n\tLPR	%0,%1";
}
}

static const char *output_84 PARAMS ((rtx *, rtx));

static const char *
output_84 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "LPDR	%0,%1";
}
}

static const char *output_85 PARAMS ((rtx *, rtx));

static const char *
output_85 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "LPER	%0,%1";
}
}

static const char *output_86 PARAMS ((rtx *, rtx));

static const char *
output_86 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* XOR sets CC but not how we want it */
  if (REG_P (operands[0]))
    {
      mvs_check_page (0, 4, 4);
      return "X	%0,=F'-1'";
    }
  CC_STATUS_INIT;
  mvs_check_page (0, 6, 4);
  return "XC	%O0(4,%R0),=F'-1'";
}
}

static const char *output_87 PARAMS ((rtx *, rtx));

static const char *
output_87 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* XOR sets CC but not how we want it */
  mvs_check_page (0, 4, 4);
  return "X	%0,=F'-1'";
}
}

static const char *output_88 PARAMS ((rtx *, rtx));

static const char *
output_88 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* XOR sets CC but not how we want it */
  if (REG_P (operands[0]))
    {
      mvs_check_page (0, 4, 4);
      return "X	%0,=F'-1'";
    }
  mvs_check_page (0, 6, 2);
  return "XC	%O0(2,%R0),=XL2'FFFF'";
}
}

static const char *output_89 PARAMS ((rtx *, rtx));

static const char *
output_89 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* XOR sets CC but not how we want it */
  mvs_check_page (0, 4, 4);
  return "X	%0,=F'-1'";
}
}

static const char *output_90 PARAMS ((rtx *, rtx));

static const char *
output_90 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* XOR sets CC but not how we want it */
  if (REG_P (operands[0]))
    {
      mvs_check_page (0, 4, 4);
      return "X	%0,=F'-1'";
    }
  mvs_check_page (0, 4, 0);
  return "XI	%0,255";
}
}

static const char *output_91 PARAMS ((rtx *, rtx));

static const char *
output_91 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT;  /* XOR sets CC but not how we want it */
  mvs_check_page (0, 4, 4);
  return "X	%0,=F'-1'";
}
}

static const char *output_92 PARAMS ((rtx *, rtx));

static const char *
output_92 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  /* this status set seems not have the desired effect,
   * proably because the 64-bit long-long test is emulated ?! */
  CC_STATUS_SET (operands[0], operands[1]);
  mvs_check_page (0, 4, 0);
  if (REG_P (operands[2]))
    return "SLDA	%0,0(%2)";
  return "SLDA	%0,%c2";
}
}

static const char *output_93 PARAMS ((rtx *, rtx));

static const char *
output_93 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  /* this status set seems not have the desired effect,
   * proably because the 64-bit long-long test is emulated ?! */
  CC_STATUS_SET (operands[0], operands[1]);
  mvs_check_page (0, 4, 0);
  if (REG_P (operands[2])) 
    return "SRDA	%0,0(%2)";
  return "SRDA	%0,%c2";
}
}

static const char *output_94 PARAMS ((rtx *, rtx));

static const char *
output_94 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (REG_P (operands[2])) 
    return "SLL	%0,0(%2)";
  return "SLL	%0,%c2";
}
}

static const char *output_95 PARAMS ((rtx *, rtx));

static const char *
output_95 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_SET (operands[0], operands[1]);
  mvs_check_page (0, 4, 0);
  if (REG_P (operands[2])) 
    return "SRA	%0,0(%2)";
  return "SRA	%0,%c2";
}
}

static const char *output_96 PARAMS ((rtx *, rtx));

static const char *
output_96 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 8, 0);
  if (REG_P (operands[2])) 
    return "SLL	%0,16(%2)\n\tSRA	%0,16";
  return "SLL	%0,16+%c2\n\tSRA	%0,16";
}
}

static const char *output_97 PARAMS ((rtx *, rtx));

static const char *
output_97 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 8, 0);
  if (REG_P (operands[2])) 
    return "SLL	%0,16\n\tSRA	%0,16(%2)";
  return "SLL	%0,16\n\tSRA	%0,16+%c2";
}
}

static const char *output_98 PARAMS ((rtx *, rtx));

static const char *
output_98 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (REG_P (operands[2])) 
    return "SLL	%0,0(%2)";
  return "SLL	%0,%c2";
}
}

static const char *output_99 PARAMS ((rtx *, rtx));

static const char *
output_99 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 8, 0);
  if (REG_P (operands[2])) 
    return "SLL	%0,24\n\tSRA	%0,24(%2)";
  return "SLL	%0,24\n\tSRA	%0,24+%c2";
}
}

static const char *output_100 PARAMS ((rtx *, rtx));

static const char *
output_100 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (REG_P (operands[2])) 
    return "SRDL	%0,0(%2)";
  return "SRDL	%0,%c2";
}
}

static const char *output_101 PARAMS ((rtx *, rtx));

static const char *
output_101 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (REG_P (operands[2])) 
    return "SRL	%0,0(%2)";
  return "SRL	%0,%c2";
}
}

static const char *output_102 PARAMS ((rtx *, rtx));

static const char *
output_102 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT; /* AND sets the CC but not how we want it */
  if (REG_P (operands[2]))
    {
      mvs_check_page (0, 8, 4);
      return "N	%0,=XL4'0000FFFF'\n\tSRL	%0,0(%2)";
    }
  mvs_check_page (0, 8, 4);
  return "N	%0,=XL4'0000FFFF'\n\tSRL	%0,%c2";
}
}

static const char *output_103 PARAMS ((rtx *, rtx));

static const char *
output_103 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  CC_STATUS_INIT; /* AND sets the CC but not how we want it */
  mvs_check_page (0, 8, 4);
  if (REG_P (operands[2])) 
    return "N	%0,=XL4'000000FF'\n\tSRL	%0,0(%2)";
  return "N	%0,=XL4'000000FF'\n\tSRL	%0,%c2";
}
}

static const char *output_104 PARAMS ((rtx *, rtx));

static const char *
output_104 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BE	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBER	14";
}
}

static const char *output_105 PARAMS ((rtx *, rtx));

static const char *
output_105 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BNE	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBNER	14";
}
}

static const char *output_106 PARAMS ((rtx *, rtx));

static const char *
output_106 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BH	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBHR	14";
}
}

static const char *output_107 PARAMS ((rtx *, rtx));

static const char *
output_107 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BH	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBHR	14";
}
}

static const char *output_108 PARAMS ((rtx *, rtx));

static const char *
output_108 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BL	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBLR	14";
}
}

static const char *output_109 PARAMS ((rtx *, rtx));

static const char *
output_109 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BL	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBLR	14";
}
}

static const char *output_110 PARAMS ((rtx *, rtx));

static const char *
output_110 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BNL	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBNLR	14";
}
}

static const char *output_111 PARAMS ((rtx *, rtx));

static const char *
output_111 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BNL	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBNLR	14";
}
}

static const char *output_112 PARAMS ((rtx *, rtx));

static const char *
output_112 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BNH	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBNHR	14";
}
}

static const char *output_113 PARAMS ((rtx *, rtx));

static const char *
output_113 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BNH	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBNHR	14";
}
}

static const char *output_114 PARAMS ((rtx *, rtx));

static const char *
output_114 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BNE	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBNER	14";
}
}

static const char *output_115 PARAMS ((rtx *, rtx));

static const char *
output_115 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BE	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBER	14";
}
}

static const char *output_116 PARAMS ((rtx *, rtx));

static const char *
output_116 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BNH	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBNHR	14";
}
}

static const char *output_117 PARAMS ((rtx *, rtx));

static const char *
output_117 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BNH	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBNHR	14";
}
}

static const char *output_118 PARAMS ((rtx *, rtx));

static const char *
output_118 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BNL	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBNLR	14";
}
}

static const char *output_119 PARAMS ((rtx *, rtx));

static const char *
output_119 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BNL	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBNLR	14";
}
}

static const char *output_120 PARAMS ((rtx *, rtx));

static const char *
output_120 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BL	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBLR	14";
}
}

static const char *output_121 PARAMS ((rtx *, rtx));

static const char *
output_121 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BL	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBLR	14";
}
}

static const char *output_122 PARAMS ((rtx *, rtx));

static const char *
output_122 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BH	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBHR	14";
}
}

static const char *output_123 PARAMS ((rtx *, rtx));

static const char *
output_123 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    { 
      return "BH	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBHR	14";
}
}

static const char *output_124 PARAMS ((rtx *, rtx));

static const char *
output_124 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (mvs_check_label (CODE_LABEL_NUMBER (operands[1])))
    {
      return "BCT	%0,%l1";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l1)\n\tBCTR	%0,14";
}
}

static const char *output_125 PARAMS ((rtx *, rtx));

static const char *
output_125 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (mvs_check_label (CODE_LABEL_NUMBER (operands[1])))
    {
      return "BCT	%0,%l1";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l1)\n\tBCTR	%0,14";
}
}

static const char *output_126 PARAMS ((rtx *, rtx));

static const char *
output_126 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 4, 0);
  if (i370_short_branch(insn) || mvs_check_label (CODE_LABEL_NUMBER (operands[0])))
    {
      return "B	%l0";
    }
  mvs_check_page (0, 2, 4);
  return "L	14,=A(%l0)\n\tBR	14";
}
}

static const char *output_127 PARAMS ((rtx *, rtx));

static const char *
output_127 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      mvs_check_page (0, 2, 0);
      return "BR	%0";
    }
  mvs_check_page (0, 4, 0);
  return "B	%0";
}
}

static const char *output_128 PARAMS ((rtx *, rtx));

static const char *
output_128 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  if (REG_P (operands[0]))
    {
      mvs_check_page (0, 6, 0);
      return "BR	%0\n\tDS	0F";
    }
  mvs_check_page (0, 10, 0);
  return "L	14,%0\n\tBR	14\n\tDS	0F";
}
}

static const char *output_129 PARAMS ((rtx *, rtx));

static const char *
output_129 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
#ifdef TARGET_LINUX
#ifdef STACK_GROWS_DOWNWARD
  static char temp[128];
  int i = STACK_POINTER_OFFSET;

  CC_STATUS_INIT;
  check_label_emit ();
  mvs_check_page (0, 10, 4);
  sprintf ( temp, "LA	r2,%d(,sp)\n\tLA	15,%%0\n\tBASR	14,15", i );
  return temp;
#else /* STACK_GROWS_DOWNWARD */
  CC_STATUS_INIT;
  check_label_emit ();
  mvs_check_page (0, 6, 4);
  return "LA	15,%0\n\tBASR	14,15";
#endif /* STACK_GROWS_DOWNWARD */

#else

  static char temp[128];
  int i = STACK_POINTER_OFFSET;

  CC_STATUS_INIT;
  check_label_emit ();
  if (mvs_function_check (XSTR (operands[0], 0)))
    {
      mvs_check_page (0, 22, 4);
      sprintf ( temp, "LA	1,136(,13)\n\tST	1,%d(,13)\n\tLA 1,%d(,13)\n\tLA	15,%%0\n\tBALR	14,15\n\tLD	0,136(,13)",
	     i - 4, i - 4 );
    }
  else
    {
      mvs_check_page (0, 10, 4);
      sprintf ( temp, "LA	1,%d(,13)\n\tLA	15,%%0\n\tBALR	14,15", i );
    }
  return temp;
#endif
}
}

static const char *output_130 PARAMS ((rtx *, rtx));

static const char *
output_130 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
#ifdef TARGET_LINUX
#ifdef STACK_GROWS_DOWNWARD
  static char temp[128];
  int i = STACK_POINTER_OFFSET;
  CC_STATUS_INIT;
  mvs_check_page (0, 10, 4);
  sprintf ( temp, "LA	r2,%d(,sp)\n\tLA	15,%%1\n\tBASR	14,15", i );
  return temp;     

#else /* STACK_GROWS_DOWNWARD */
  CC_STATUS_INIT;
  check_label_emit ();
  mvs_check_page (0, 6, 4);
  return "LA	15,%1\n\tBASR	14,15";
#endif /* STACK_GROWS_DOWNWARD */

#else

  static char temp[128];
  int i = STACK_POINTER_OFFSET;
  CC_STATUS_INIT;

  check_label_emit ();
  if (mvs_function_check (XSTR (operands[1], 0)))
    {
      mvs_check_page (0, 22, 4);
      sprintf ( temp, "LA	1,136(,13)\n\tST	1,%d(,13)\n\tLA 1,%d(,13)\n\tLA	15,%%1\n\tBALR	14,15\n\tLD	0,136(,13)",
	   i - 4, i - 4 );
    }
  else
    {
      mvs_check_page (0, 10, 4);
      sprintf ( temp, "LA	1,%d(,13)\n\tLA	15,%%1\n\tBALR	14,15", i );
    }
  return temp;

#endif
}
}

static const char *output_131 PARAMS ((rtx *, rtx));

static const char *
output_131 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
#ifdef TARGET_LINUX
#ifdef STACK_GROWS_DOWNWARD
  static char temp[128];
  int i = STACK_POINTER_OFFSET;
  CC_STATUS_INIT;
  mvs_check_page (0, 10, 4);
  sprintf ( temp, "LA	r2,%d(,sp)\n\tL	15,%%0\n\tBASR	14,15", i );
  return temp;

#else /* STACK_GROWS_DOWNWARD */
  CC_STATUS_INIT;
  check_label_emit ();
  mvs_check_page (0, 6, 4);
  return "L	15,%0\n\tBASR	14,15";
#endif /* STACK_GROWS_DOWNWARD */

#else

  static char temp[128];
  int i = STACK_POINTER_OFFSET;
  CC_STATUS_INIT;

  check_label_emit ();
  if (mvs_function_check (XSTR (operands[0], 0)))
    {
      mvs_check_page (0, 22, 4);
      sprintf ( temp, "LA	1,136(,13)\n\tST	1,%d(,13)\n\tLA	1,%d(,13)\n\tL	15,%%0\n\tBALR	14,15\n\tLD	0,136(,13)",
	   i - 4, i - 4 );
    }
  else
    {
      mvs_check_page (0, 10, 4);
      sprintf ( temp, "LA	1,%d(,13)\n\tL	15,%%0\n\tBALR	14,15", i );
    }
  return temp;
#endif
}
}

static const char *output_132 PARAMS ((rtx *, rtx));

static const char *
output_132 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
#ifdef TARGET_LINUX
#ifdef STACK_GROWS_DOWNWARD
  static char temp[128];
  int i = STACK_POINTER_OFFSET;
  CC_STATUS_INIT;

  check_label_emit ();
  mvs_check_page (0, 10, 4);
  sprintf ( temp, "LA	r2,%d(,sp)\n\tL	15,%%1\n\tBASR	14,15", i );
  return temp;

#else /* STACK_GROWS_DOWNWARD */
  CC_STATUS_INIT;
  check_label_emit ();
  mvs_check_page (0, 6, 4);
  return "L	15,%1\n\tBASR	14,15";
#endif /* STACK_GROWS_DOWNWARD */

#else

  static char temp[128];
  int i = STACK_POINTER_OFFSET;
  CC_STATUS_INIT;

  check_label_emit ();
  if (mvs_function_check (XSTR (operands[1], 0)))
    {
      mvs_check_page (0, 22, 4);
      sprintf ( temp, "LA	1,136(,13)\n\tST	1,%d(,13)\n\tLA	1,%d(,13)\n\tL	15,%%1\n\tBALR	14,15\n\tLD	0,136(,13)",
	   i - 4, i - 4 );
    }
  else
    {
      mvs_check_page (0, 10, 4);
      sprintf ( temp, "LA	1,%d(,13)\n\tL	15,%%1\n\tBALR	14,15", i );
    }
  return temp;
#endif
}
}

static const char *output_133 PARAMS ((rtx *, rtx));

static const char *
output_133 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  check_label_emit ();
  mvs_check_page (0, 2, 0);
  return "NOPR	0";
}
}


extern int register_operand PARAMS ((rtx, enum machine_mode));
extern int general_operand PARAMS ((rtx, enum machine_mode));
extern int r_or_s_operand PARAMS ((rtx, enum machine_mode));
extern int s_operand PARAMS ((rtx, enum machine_mode));
extern int immediate_operand PARAMS ((rtx, enum machine_mode));
extern int nonimmediate_operand PARAMS ((rtx, enum machine_mode));
extern int const_int_operand PARAMS ((rtx, enum machine_mode));
extern int memory_operand PARAMS ((rtx, enum machine_mode));



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "md",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "???diS",
    HImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "dS",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "diS",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "di",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "f,mF",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fmF,f",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "f,mF",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fmF,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    s_operand,
    "S",
    BLKmode,
    0,
    1
  },
  {
    s_operand,
    "S",
    BLKmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m,S",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "g,d,SF",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,dm",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "dimF,*fd",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,dm,R",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "dimF,*fd,R",
    SImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "=R,d",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "R,g",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "g,d",
    HImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "=R,d",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "R,g",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "g,d",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+dm",
    HImode,
    1,
    1
  },
  {
    general_operand,
    "d",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,fS,*dS,???d",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fmF,f,*dS,fSF,???d",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,fS,*d,???d",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fmF,f,*d,SfF,???d",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f*d,fm,S,???d",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fmF,fF*d,S,???d",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,fm,m,*d",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fmF,*d,f,fmF",
    SFmode,
    0,
    1
  },
  {
    s_operand,
    "=S",
    BLKmode,
    0,
    1
  },
  {
    s_operand,
    "S",
    BLKmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g,d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "0mi",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "0m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d,&d",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "0i,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d,&d",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "0i,m",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=d,m",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "0,d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fmF",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "%a",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "J",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%a",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "dmi",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "%a",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "ai",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fmF",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "%0",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fmF",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "g",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "d",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fmF",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fmF",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "K",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "g",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "dm",
    SImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "=d,R",
    SImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g,Si",
    SImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "=d,S",
    HImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "di,Si",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "di",
    HImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "=d,S",
    QImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "di,Si",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "di",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    r_or_s_operand,
    "=dm",
    SImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "=dm",
    HImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "=dm",
    QImode,
    0,
    1
  },
  {
    r_or_s_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "Ja",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "Ja",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "Ja",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "Ja",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+d",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "am",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    0,
    "=rf",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    0,
    "i",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g",
    SImode,
    0,
    1
  },
  {
    0,
    "=rf",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "i",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "g",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
};



const struct insn_data insn_data[] = 
{
  {
    "tstdi",
    __extension__ (const PTR) output_0,
    (insn_gen_fn) gen_tstdi,
    &operand_data[1],
    1,
    0,
    1,
    3
  },
  {
    "tstsi",
    __extension__ (const PTR) output_1,
    (insn_gen_fn) gen_tstsi,
    &operand_data[2],
    1,
    0,
    1,
    3
  },
  {
    "tsthi",
    __extension__ (const PTR) output_2,
    (insn_gen_fn) gen_tsthi,
    &operand_data[3],
    1,
    0,
    1,
    3
  },
  {
    "tstdf",
    __extension__ (const PTR) output_3,
    (insn_gen_fn) gen_tstdf,
    &operand_data[4],
    1,
    0,
    1,
    3
  },
  {
    "tstsf",
    __extension__ (const PTR) output_4,
    (insn_gen_fn) gen_tstsf,
    &operand_data[5],
    1,
    0,
    1,
    3
  },
  {
    "cmpsi",
    __extension__ (const PTR) output_5,
    (insn_gen_fn) gen_cmpsi,
    &operand_data[6],
    2,
    0,
    1,
    3
  },
  {
    "cmphi",
    __extension__ (const PTR) output_6,
    (insn_gen_fn) gen_cmphi,
    &operand_data[8],
    2,
    0,
    1,
    3
  },
  {
    "*i370.md:522",
    __extension__ (const PTR) output_7,
    0,
    &operand_data[10],
    2,
    0,
    1,
    3
  },
  {
    "cmpqi",
    __extension__ (const PTR) output_8,
    (insn_gen_fn) gen_cmpqi,
    &operand_data[12],
    2,
    0,
    1,
    3
  },
  {
    "cmpdf",
    __extension__ (const PTR) output_9,
    (insn_gen_fn) gen_cmpdf,
    &operand_data[14],
    2,
    0,
    2,
    3
  },
  {
    "cmpsf",
    __extension__ (const PTR) output_10,
    (insn_gen_fn) gen_cmpsf,
    &operand_data[16],
    2,
    0,
    2,
    3
  },
  {
    "*i370.md:746",
    __extension__ (const PTR) output_11,
    0,
    &operand_data[18],
    4,
    0,
    1,
    3
  },
  {
    "cmpstrsi_1",
    __extension__ (const PTR) output_12,
    (insn_gen_fn) gen_cmpstrsi_1,
    &operand_data[22],
    3,
    4,
    1,
    3
  },
  {
    "*i370.md:792",
    __extension__ (const PTR) output_13,
    0,
    &operand_data[25],
    2,
    0,
    3,
    3
  },
  {
    "movdi",
    __extension__ (const PTR) output_14,
    (insn_gen_fn) gen_movdi,
    &operand_data[27],
    2,
    0,
    2,
    3
  },
  {
    "movsi",
    __extension__ (const PTR) output_15,
    (insn_gen_fn) gen_movsi,
    &operand_data[29],
    2,
    0,
    3,
    3
  },
  {
    "*i370.md:1010",
    __extension__ (const PTR) output_16,
    0,
    &operand_data[31],
    2,
    0,
    2,
    3
  },
  {
    "movhi",
    __extension__ (const PTR) output_17,
    (insn_gen_fn) gen_movhi,
    &operand_data[33],
    2,
    0,
    2,
    3
  },
  {
    "*i370.md:1104",
    __extension__ (const PTR) output_18,
    0,
    &operand_data[35],
    2,
    0,
    2,
    3
  },
  {
    "movqi",
    __extension__ (const PTR) output_19,
    (insn_gen_fn) gen_movqi,
    &operand_data[37],
    2,
    0,
    2,
    3
  },
  {
    "movstricthi",
    __extension__ (const PTR) output_20,
    (insn_gen_fn) gen_movstricthi,
    &operand_data[39],
    2,
    0,
    1,
    3
  },
  {
    "*i370.md:1285",
    __extension__ (const PTR) output_21,
    0,
    &operand_data[41],
    2,
    0,
    5,
    3
  },
  {
    "movdf",
    __extension__ (const PTR) output_22,
    (insn_gen_fn) gen_movdf,
    &operand_data[43],
    2,
    0,
    5,
    3
  },
  {
    "*i370.md:1410",
    __extension__ (const PTR) output_23,
    0,
    &operand_data[45],
    2,
    0,
    4,
    3
  },
  {
    "movsf",
    __extension__ (const PTR) output_24,
    (insn_gen_fn) gen_movsf,
    &operand_data[47],
    2,
    0,
    4,
    3
  },
  {
    "*i370.md:1630",
    __extension__ (const PTR) output_25,
    0,
    &operand_data[49],
    3,
    0,
    1,
    3
  },
  {
    "movstrsi_1",
    __extension__ (const PTR) output_26,
    (insn_gen_fn) gen_movstrsi_1,
    &operand_data[23],
    2,
    4,
    1,
    3
  },
  {
    "extendhisi2",
    __extension__ (const PTR) output_27,
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[52],
    2,
    0,
    2,
    3
  },
  {
    "extendqisi2",
    __extension__ (const PTR) output_28,
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[54],
    2,
    0,
    1,
    3
  },
  {
    "extendqihi2",
    __extension__ (const PTR) output_29,
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[56],
    2,
    0,
    1,
    3
  },
  {
    "zero_extendhisi2",
    __extension__ (const PTR) output_30,
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[58],
    2,
    0,
    1,
    3
  },
  {
    "zero_extendqisi2",
    __extension__ (const PTR) output_31,
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[60],
    2,
    0,
    2,
    3
  },
  {
    "zero_extendqihi2",
    __extension__ (const PTR) output_32,
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[62],
    2,
    0,
    2,
    3
  },
  {
    "truncsihi2",
    __extension__ (const PTR) output_33,
    (insn_gen_fn) gen_truncsihi2,
    &operand_data[64],
    2,
    0,
    2,
    3
  },
  {
    "fix_truncdfsi2",
    __extension__ (const PTR) output_34,
    (insn_gen_fn) gen_fix_truncdfsi2,
    &operand_data[66],
    2,
    0,
    1,
    3
  },
  {
    "floatsidf2",
    __extension__ (const PTR) output_35,
    (insn_gen_fn) gen_floatsidf2,
    &operand_data[68],
    2,
    0,
    1,
    3
  },
  {
    "truncdfsf2",
    __extension__ (const PTR) output_36,
    (insn_gen_fn) gen_truncdfsf2,
    &operand_data[70],
    2,
    0,
    1,
    3
  },
  {
    "extendsfdf2",
    __extension__ (const PTR) output_37,
    (insn_gen_fn) gen_extendsfdf2,
    &operand_data[72],
    2,
    0,
    1,
    3
  },
  {
    "*i370.md:2064",
    __extension__ (const PTR) output_38,
    0,
    &operand_data[74],
    4,
    0,
    1,
    3
  },
  {
    "*i370.md:2117",
    __extension__ (const PTR) output_39,
    0,
    &operand_data[78],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:2134",
    __extension__ (const PTR) output_40,
    0,
    &operand_data[81],
    3,
    0,
    1,
    3
  },
  {
    "addsi3",
    __extension__ (const PTR) output_41,
    (insn_gen_fn) gen_addsi3,
    &operand_data[74],
    3,
    0,
    1,
    3
  },
  {
    "addhi3",
    __extension__ (const PTR) output_42,
    (insn_gen_fn) gen_addhi3,
    &operand_data[84],
    3,
    0,
    1,
    3
  },
  {
    "addqi3",
    __extension__ (const PTR) output_43,
    (insn_gen_fn) gen_addqi3,
    &operand_data[87],
    3,
    0,
    1,
    3
  },
  {
    "adddf3",
    __extension__ (const PTR) output_44,
    (insn_gen_fn) gen_adddf3,
    &operand_data[90],
    3,
    0,
    1,
    3
  },
  {
    "addsf3",
    __extension__ (const PTR) output_45,
    (insn_gen_fn) gen_addsf3,
    &operand_data[93],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:2333",
    __extension__ (const PTR) output_46,
    0,
    &operand_data[96],
    4,
    0,
    1,
    3
  },
  {
    "subsi3",
    __extension__ (const PTR) output_47,
    (insn_gen_fn) gen_subsi3,
    &operand_data[96],
    3,
    0,
    1,
    3
  },
  {
    "subhi3",
    __extension__ (const PTR) output_48,
    (insn_gen_fn) gen_subhi3,
    &operand_data[100],
    3,
    0,
    1,
    3
  },
  {
    "subqi3",
    __extension__ (const PTR) output_49,
    (insn_gen_fn) gen_subqi3,
    &operand_data[103],
    3,
    0,
    1,
    3
  },
  {
    "subdf3",
    __extension__ (const PTR) output_50,
    (insn_gen_fn) gen_subdf3,
    &operand_data[106],
    3,
    0,
    1,
    3
  },
  {
    "subsf3",
    __extension__ (const PTR) output_51,
    (insn_gen_fn) gen_subsf3,
    &operand_data[109],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:2595",
    __extension__ (const PTR) output_52,
    0,
    &operand_data[112],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:2611",
    __extension__ (const PTR) output_53,
    0,
    &operand_data[115],
    3,
    0,
    1,
    3
  },
  {
    "muldf3",
    __extension__ (const PTR) output_54,
    (insn_gen_fn) gen_muldf3,
    &operand_data[90],
    3,
    0,
    1,
    3
  },
  {
    "mulsf3",
    __extension__ (const PTR) output_55,
    (insn_gen_fn) gen_mulsf3,
    &operand_data[93],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:2774",
    __extension__ (const PTR) output_56,
    0,
    &operand_data[118],
    3,
    0,
    1,
    3
  },
  {
    "divdf3",
    __extension__ (const PTR) output_57,
    (insn_gen_fn) gen_divdf3,
    &operand_data[106],
    3,
    0,
    1,
    3
  },
  {
    "divsf3",
    __extension__ (const PTR) output_58,
    (insn_gen_fn) gen_divsf3,
    &operand_data[109],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:2940",
    __extension__ (const PTR) output_59,
    0,
    &operand_data[118],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:2989",
    __extension__ (const PTR) output_60,
    0,
    &operand_data[121],
    3,
    0,
    2,
    3
  },
  {
    "andsi3",
    __extension__ (const PTR) output_61,
    (insn_gen_fn) gen_andsi3,
    &operand_data[74],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:3038",
    __extension__ (const PTR) output_62,
    0,
    &operand_data[124],
    3,
    0,
    2,
    3
  },
  {
    "andhi3",
    __extension__ (const PTR) output_63,
    (insn_gen_fn) gen_andhi3,
    &operand_data[127],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:3099",
    __extension__ (const PTR) output_64,
    0,
    &operand_data[130],
    3,
    0,
    2,
    3
  },
  {
    "andqi3",
    __extension__ (const PTR) output_65,
    (insn_gen_fn) gen_andqi3,
    &operand_data[133],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:3179",
    __extension__ (const PTR) output_66,
    0,
    &operand_data[121],
    3,
    0,
    2,
    3
  },
  {
    "iorsi3",
    __extension__ (const PTR) output_67,
    (insn_gen_fn) gen_iorsi3,
    &operand_data[74],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:3228",
    __extension__ (const PTR) output_68,
    0,
    &operand_data[124],
    3,
    0,
    2,
    3
  },
  {
    "iorhi3",
    __extension__ (const PTR) output_69,
    (insn_gen_fn) gen_iorhi3,
    &operand_data[127],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:3289",
    __extension__ (const PTR) output_70,
    0,
    &operand_data[130],
    3,
    0,
    2,
    3
  },
  {
    "iorqi3",
    __extension__ (const PTR) output_71,
    (insn_gen_fn) gen_iorqi3,
    &operand_data[133],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:3369",
    __extension__ (const PTR) output_72,
    0,
    &operand_data[121],
    3,
    0,
    2,
    3
  },
  {
    "xorsi3",
    __extension__ (const PTR) output_73,
    (insn_gen_fn) gen_xorsi3,
    &operand_data[74],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:3418",
    __extension__ (const PTR) output_74,
    0,
    &operand_data[124],
    3,
    0,
    2,
    3
  },
  {
    "xorhi3",
    __extension__ (const PTR) output_75,
    (insn_gen_fn) gen_xorhi3,
    &operand_data[127],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:3479",
    __extension__ (const PTR) output_76,
    0,
    &operand_data[130],
    3,
    0,
    2,
    3
  },
  {
    "xorqi3",
    __extension__ (const PTR) output_77,
    (insn_gen_fn) gen_xorqi3,
    &operand_data[133],
    3,
    0,
    1,
    3
  },
  {
    "negsi2",
    __extension__ (const PTR) output_78,
    (insn_gen_fn) gen_negsi2,
    &operand_data[136],
    2,
    0,
    1,
    3
  },
  {
    "neghi2",
    __extension__ (const PTR) output_79,
    (insn_gen_fn) gen_neghi2,
    &operand_data[138],
    2,
    0,
    1,
    3
  },
  {
    "negdf2",
    __extension__ (const PTR) output_80,
    (insn_gen_fn) gen_negdf2,
    &operand_data[140],
    2,
    0,
    1,
    3
  },
  {
    "negsf2",
    __extension__ (const PTR) output_81,
    (insn_gen_fn) gen_negsf2,
    &operand_data[142],
    2,
    0,
    1,
    3
  },
  {
    "abssi2",
    __extension__ (const PTR) output_82,
    (insn_gen_fn) gen_abssi2,
    &operand_data[136],
    2,
    0,
    1,
    3
  },
  {
    "abshi2",
    __extension__ (const PTR) output_83,
    (insn_gen_fn) gen_abshi2,
    &operand_data[138],
    2,
    0,
    1,
    3
  },
  {
    "absdf2",
    __extension__ (const PTR) output_84,
    (insn_gen_fn) gen_absdf2,
    &operand_data[140],
    2,
    0,
    1,
    3
  },
  {
    "abssf2",
    __extension__ (const PTR) output_85,
    (insn_gen_fn) gen_abssf2,
    &operand_data[142],
    2,
    0,
    1,
    3
  },
  {
    "*i370.md:3700",
    __extension__ (const PTR) output_86,
    0,
    &operand_data[144],
    2,
    0,
    1,
    3
  },
  {
    "one_cmplsi2",
    __extension__ (const PTR) output_87,
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[96],
    2,
    0,
    1,
    3
  },
  {
    "*i370.md:3738",
    __extension__ (const PTR) output_88,
    0,
    &operand_data[146],
    2,
    0,
    1,
    3
  },
  {
    "one_cmplhi2",
    __extension__ (const PTR) output_89,
    (insn_gen_fn) gen_one_cmplhi2,
    &operand_data[100],
    2,
    0,
    1,
    3
  },
  {
    "*i370.md:3775",
    __extension__ (const PTR) output_90,
    0,
    &operand_data[148],
    2,
    0,
    1,
    3
  },
  {
    "one_cmplqi2",
    __extension__ (const PTR) output_91,
    (insn_gen_fn) gen_one_cmplqi2,
    &operand_data[150],
    2,
    0,
    1,
    3
  },
  {
    "ashldi3",
    __extension__ (const PTR) output_92,
    (insn_gen_fn) gen_ashldi3,
    &operand_data[152],
    3,
    0,
    1,
    3
  },
  {
    "ashrdi3",
    __extension__ (const PTR) output_93,
    (insn_gen_fn) gen_ashrdi3,
    &operand_data[152],
    3,
    0,
    1,
    3
  },
  {
    "ashlsi3",
    __extension__ (const PTR) output_94,
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[155],
    3,
    0,
    1,
    3
  },
  {
    "ashrsi3",
    __extension__ (const PTR) output_95,
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[155],
    3,
    0,
    1,
    3
  },
  {
    "ashlhi3",
    __extension__ (const PTR) output_96,
    (insn_gen_fn) gen_ashlhi3,
    &operand_data[158],
    3,
    0,
    1,
    3
  },
  {
    "ashrhi3",
    __extension__ (const PTR) output_97,
    (insn_gen_fn) gen_ashrhi3,
    &operand_data[158],
    3,
    0,
    1,
    3
  },
  {
    "ashlqi3",
    __extension__ (const PTR) output_98,
    (insn_gen_fn) gen_ashlqi3,
    &operand_data[161],
    3,
    0,
    1,
    3
  },
  {
    "ashrqi3",
    __extension__ (const PTR) output_99,
    (insn_gen_fn) gen_ashrqi3,
    &operand_data[161],
    3,
    0,
    1,
    3
  },
  {
    "lshrdi3",
    __extension__ (const PTR) output_100,
    (insn_gen_fn) gen_lshrdi3,
    &operand_data[152],
    3,
    0,
    1,
    3
  },
  {
    "lshrsi3",
    __extension__ (const PTR) output_101,
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[155],
    3,
    0,
    1,
    3
  },
  {
    "lshrhi3",
    __extension__ (const PTR) output_102,
    (insn_gen_fn) gen_lshrhi3,
    &operand_data[158],
    3,
    0,
    1,
    3
  },
  {
    "lshrqi3",
    __extension__ (const PTR) output_103,
    (insn_gen_fn) gen_lshrqi3,
    &operand_data[161],
    3,
    0,
    1,
    3
  },
  {
    "beq",
    __extension__ (const PTR) output_104,
    (insn_gen_fn) gen_beq,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "bne",
    __extension__ (const PTR) output_105,
    (insn_gen_fn) gen_bne,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "bgt",
    __extension__ (const PTR) output_106,
    (insn_gen_fn) gen_bgt,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "bgtu",
    __extension__ (const PTR) output_107,
    (insn_gen_fn) gen_bgtu,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "blt",
    __extension__ (const PTR) output_108,
    (insn_gen_fn) gen_blt,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "bltu",
    __extension__ (const PTR) output_109,
    (insn_gen_fn) gen_bltu,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "bge",
    __extension__ (const PTR) output_110,
    (insn_gen_fn) gen_bge,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "bgeu",
    __extension__ (const PTR) output_111,
    (insn_gen_fn) gen_bgeu,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "ble",
    __extension__ (const PTR) output_112,
    (insn_gen_fn) gen_ble,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "bleu",
    __extension__ (const PTR) output_113,
    (insn_gen_fn) gen_bleu,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "*i370.md:4347",
    __extension__ (const PTR) output_114,
    0,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "*i370.md:4370",
    __extension__ (const PTR) output_115,
    0,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "*i370.md:4393",
    __extension__ (const PTR) output_116,
    0,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "*i370.md:4416",
    __extension__ (const PTR) output_117,
    0,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "*i370.md:4439",
    __extension__ (const PTR) output_118,
    0,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "*i370.md:4462",
    __extension__ (const PTR) output_119,
    0,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "*i370.md:4485",
    __extension__ (const PTR) output_120,
    0,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "*i370.md:4508",
    __extension__ (const PTR) output_121,
    0,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "*i370.md:4531",
    __extension__ (const PTR) output_122,
    0,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "*i370.md:4554",
    __extension__ (const PTR) output_123,
    0,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "*i370.md:4582",
    __extension__ (const PTR) output_124,
    0,
    &operand_data[164],
    2,
    2,
    1,
    3
  },
  {
    "*i370.md:4610",
    __extension__ (const PTR) output_125,
    0,
    &operand_data[164],
    2,
    2,
    1,
    3
  },
  {
    "jump",
    __extension__ (const PTR) output_126,
    (insn_gen_fn) gen_jump,
    &operand_data[77],
    1,
    0,
    0,
    3
  },
  {
    "indirect_jump",
    __extension__ (const PTR) output_127,
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[166],
    1,
    0,
    1,
    3
  },
  {
    "tablejump",
    __extension__ (const PTR) output_128,
    (insn_gen_fn) gen_tablejump,
    &operand_data[167],
    2,
    0,
    1,
    3
  },
  {
    "call",
    __extension__ (const PTR) output_129,
    (insn_gen_fn) gen_call,
    &operand_data[169],
    2,
    0,
    1,
    3
  },
  {
    "call_value",
    __extension__ (const PTR) output_130,
    (insn_gen_fn) gen_call_value,
    &operand_data[171],
    3,
    0,
    1,
    3
  },
  {
    "*i370.md:4836",
    __extension__ (const PTR) output_131,
    0,
    &operand_data[174],
    2,
    0,
    1,
    3
  },
  {
    "*i370.md:4884",
    __extension__ (const PTR) output_132,
    0,
    &operand_data[176],
    3,
    0,
    1,
    3
  },
  {
    "nop",
    __extension__ (const PTR) output_133,
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  {
    "cmpstrsi",
    0,
    (insn_gen_fn) gen_cmpstrsi,
    &operand_data[179],
    5,
    0,
    0,
    0
  },
  {
    "clrstrsi",
    0,
    (insn_gen_fn) gen_clrstrsi,
    &operand_data[184],
    3,
    0,
    1,
    0
  },
  {
    "movstrsi",
    0,
    (insn_gen_fn) gen_movstrsi,
    &operand_data[187],
    4,
    0,
    0,
    0
  },
  {
    "extendsidi2",
    0,
    (insn_gen_fn) gen_extendsidi2,
    &operand_data[191],
    2,
    0,
    1,
    0
  },
  {
    "zero_extendsidi2",
    0,
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[191],
    2,
    0,
    1,
    0
  },
  {
    "adddi3",
    0,
    (insn_gen_fn) gen_adddi3,
    &operand_data[193],
    3,
    0,
    0,
    0
  },
  {
    "mulsi3",
    0,
    (insn_gen_fn) gen_mulsi3,
    &operand_data[196],
    3,
    0,
    0,
    0
  },
  {
    "divsi3",
    0,
    (insn_gen_fn) gen_divsi3,
    &operand_data[196],
    3,
    0,
    0,
    0
  },
  {
    "udivsi3",
    0,
    (insn_gen_fn) gen_udivsi3,
    &operand_data[196],
    3,
    0,
    0,
    0
  },
  {
    "modsi3",
    0,
    (insn_gen_fn) gen_modsi3,
    &operand_data[196],
    3,
    0,
    0,
    0
  },
  {
    "umodsi3",
    0,
    (insn_gen_fn) gen_umodsi3,
    &operand_data[196],
    3,
    0,
    0,
    0
  },
  {
    "untyped_call",
    0,
    (insn_gen_fn) gen_untyped_call,
    &operand_data[199],
    3,
    0,
    0,
    0
  },
};


const char *
get_insn_name (code)
     int code;
{
  return insn_data[code].name;
}
