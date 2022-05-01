/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "ggc.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = gen_sequence (), end_sequence (), _val)
rtx
gen_tstdi (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0);
}

rtx
gen_tstsi (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0);
}

rtx
gen_tsthi (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0);
}

rtx
gen_tstdf (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0);
}

rtx
gen_tstsf (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0);
}

rtx
gen_cmpsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

rtx
gen_cmphi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

rtx
gen_cmpqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

rtx
gen_cmpdf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

rtx
gen_cmpsf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

rtx
gen_cmpstrsi_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (SImode,
	gen_rtx_MEM (BLKmode,
	operand1),
	gen_rtx_MEM (BLKmode,
	operand2))),
		gen_rtx_USE (VOIDmode,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

rtx
gen_movdi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movhi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movstricthi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1);
}

rtx
gen_movdf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movsf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movstrsi_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand0),
	gen_rtx_MEM (BLKmode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand0),
		gen_rtx_USE (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1)));
}

rtx
gen_extendhisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

rtx
gen_extendqisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

rtx
gen_extendqihi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

rtx
gen_zero_extendhisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

rtx
gen_zero_extendqisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

rtx
gen_zero_extendqihi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1));
}

rtx
gen_truncsihi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (HImode,
	operand1));
}

rtx
gen_fix_truncdfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_TRUNCATE (DFmode,
	operand1))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DFmode,
	16))));
}

rtx
gen_floatsidf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

rtx
gen_truncdfsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

rtx
gen_extendsfdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1));
}

rtx
gen_addsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

rtx
gen_addhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2));
}

rtx
gen_addqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2));
}

rtx
gen_adddf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

rtx
gen_addsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

rtx
gen_subsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

rtx
gen_subhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2));
}

rtx
gen_subqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2));
}

rtx
gen_subdf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

rtx
gen_subsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

rtx
gen_muldf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

rtx
gen_mulsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

rtx
gen_divdf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2));
}

rtx
gen_divsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2));
}

rtx
gen_andsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2));
}

rtx
gen_andhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2));
}

rtx
gen_andqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2));
}

rtx
gen_iorsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2));
}

rtx
gen_iorhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2));
}

rtx
gen_iorqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2));
}

rtx
gen_xorsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

rtx
gen_xorhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2));
}

rtx
gen_xorqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2));
}

rtx
gen_negsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1));
}

rtx
gen_neghi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (HImode,
	operand1));
}

rtx
gen_negdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1));
}

rtx
gen_negsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1));
}

rtx
gen_abssi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SImode,
	operand1));
}

rtx
gen_abshi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (HImode,
	operand1));
}

rtx
gen_absdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1));
}

rtx
gen_abssf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1));
}

rtx
gen_one_cmplsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

rtx
gen_one_cmplhi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (HImode,
	operand1));
}

rtx
gen_one_cmplqi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (QImode,
	operand1));
}

rtx
gen_ashldi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2));
}

rtx
gen_ashrdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2));
}

rtx
gen_ashlsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2));
}

rtx
gen_ashrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2));
}

rtx
gen_ashlhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (HImode,
	operand1,
	operand2));
}

rtx
gen_ashrhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (HImode,
	operand1,
	operand2));
}

rtx
gen_ashlqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (QImode,
	operand1,
	operand2));
}

rtx
gen_ashrqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (QImode,
	operand1,
	operand2));
}

rtx
gen_lshrdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2));
}

rtx
gen_lshrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2));
}

rtx
gen_lshrhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (HImode,
	operand1,
	operand2));
}

rtx
gen_lshrqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (QImode,
	operand1,
	operand2));
}

rtx
gen_beq (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_EQ (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bne (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bgt (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GT (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bgtu (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GTU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_blt (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LT (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bltu (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LTU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bge (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bgeu (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GEU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_ble (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bleu (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LEU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_jump (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

rtx
gen_indirect_jump (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

rtx
gen_tablejump (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

rtx
gen_call (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_CALL (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_call_value (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2));
}

rtx
gen_nop ()
{
  return const0_rtx;
}

rtx
gen_cmpstrsi (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;

{
  rtx op1, op2;

  op1 = XEXP (operands[1], 0);
  if (GET_CODE (op1) == REG
      || (GET_CODE (op1) == PLUS && GET_CODE (XEXP (op1, 0)) == REG
	  && GET_CODE (XEXP (op1, 1)) == CONST_INT
	  && (unsigned) INTVAL (XEXP (op1, 1)) < 4096))
    {
      op1 = operands[1];
    }
  else
    {
      op1 = gen_rtx_MEM (BLKmode, copy_to_mode_reg (SImode, op1));
    }

  op2 = XEXP (operands[2], 0);
  if (GET_CODE (op2) == REG
      || (GET_CODE (op2) == PLUS && GET_CODE (XEXP (op2, 0)) == REG
	  && GET_CODE (XEXP (op2, 1)) == CONST_INT
	  && (unsigned) INTVAL (XEXP (op2, 1)) < 4096))
    {
      op2 = operands[2];
    }
  else
    {
      op2 = gen_rtx_MEM (BLKmode, copy_to_mode_reg (SImode, op2));
    }
      
  if (GET_CODE (operands[3]) == CONST_INT 
      && (unsigned)INTVAL (operands[3]) <= 256)
    {
      emit_insn (gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode, operands[0], 
			gen_rtx_COMPARE (SImode, op1, op2)), /* was VOIDmode */
		gen_rtx_USE (VOIDmode, operands[3]))));
    }
  else
    {
        /* implementation suggested by  Richard Henderson <rth@cygnus.com> */
        rtx reg1 = gen_reg_rtx (DImode);
        rtx reg2 = gen_reg_rtx (DImode);
        rtx result = operands[0];
        rtx mem1 = operands[1];
        rtx mem2 = operands[2];
        rtx len = operands[3];
        if (!CONSTANT_P (len))
          len = force_reg (SImode, len);

        /* Load up the address+length pairs.  */
        emit_insn (gen_rtx_CLOBBER (VOIDmode, reg1));
        emit_move_insn (gen_rtx_SUBREG (SImode, reg1, 0),
                        force_operand (XEXP (mem1, 0), NULL_RTX));
        emit_move_insn (gen_rtx_SUBREG (SImode, reg1, GET_MODE_SIZE (SImode)), len);

        emit_insn (gen_rtx_CLOBBER (VOIDmode, reg2));
        emit_move_insn (gen_rtx_SUBREG (SImode, reg2, 0),
                        force_operand (XEXP (mem2, 0), NULL_RTX));
        emit_move_insn (gen_rtx_SUBREG (SImode, reg2, GET_MODE_SIZE (SImode)), len);

        /* Compare! */
        emit_insn (gen_cmpstrsi_1 (result, reg1, reg2));
    }
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (VOIDmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_clrstrsi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  {
        /* implementation suggested by  Richard Henderson <rth@cygnus.com> */
        rtx reg1 = gen_reg_rtx (DImode);
        rtx reg2 = gen_reg_rtx (DImode);
        rtx mem1 = operands[0];
        rtx zippo = gen_rtx_CONST_INT (SImode, 0);
        rtx len = operands[1];
        if (!CONSTANT_P (len))
          len = force_reg (SImode, len);

        /* Load up the address+length pairs.  */
        emit_insn (gen_rtx_CLOBBER (VOIDmode, reg1));
        emit_move_insn (gen_rtx_SUBREG (SImode, reg1, 0),
                        force_operand (XEXP (mem1, 0), NULL_RTX));
        emit_move_insn (gen_rtx_SUBREG (SImode, reg1, GET_MODE_SIZE (SImode)), len);

        emit_insn (gen_rtx_CLOBBER (VOIDmode, reg2));
        emit_move_insn (gen_rtx_SUBREG (SImode, reg2, 0), zippo);
        emit_move_insn (gen_rtx_SUBREG (SImode, reg2, GET_MODE_SIZE (SImode)), zippo);

        /* Copy! */
        emit_insn (gen_movstrsi_1 (reg1, reg2));
  }
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit (operand2);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movstrsi (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

{
  rtx op0, op1;

  op0 = XEXP (operands[0], 0);
  if (GET_CODE (op0) == REG
      || (GET_CODE (op0) == PLUS && GET_CODE (XEXP (op0, 0)) == REG
	  && GET_CODE (XEXP (op0, 1)) == CONST_INT
	  && (unsigned) INTVAL (XEXP (op0, 1)) < 4096))
    op0 = operands[0];
  else
    op0 = replace_equiv_address (operands[0], copy_to_mode_reg (SImode, op0));

  op1 = XEXP (operands[1], 0);
  if (GET_CODE (op1) == REG
      || (GET_CODE (op1) == PLUS && GET_CODE (XEXP (op1, 0)) == REG
	  && GET_CODE (XEXP (op1, 1)) == CONST_INT
	  && (unsigned) INTVAL (XEXP (op1, 1)) < 4096))
    op1 = operands[1];
  else
    op1 = replace_equiv_address (operands[1], copy_to_mode_reg (SImode, op1));

  if (GET_CODE (operands[2]) == CONST_INT
      && (unsigned) INTVAL (operands[2]) <= 256)
    emit_insn (gen_rtx_PARALLEL (VOIDmode,
			gen_rtvec (2,
				   gen_rtx_SET (VOIDmode, op0, op1),
				   gen_rtx_USE (VOIDmode, operands[2]))));

  else
    {
        /* implementation provided by  Richard Henderson <rth@cygnus.com> */
        rtx reg1 = gen_reg_rtx (DImode);
        rtx reg2 = gen_reg_rtx (DImode);
        rtx mem1 = operands[0];
        rtx mem2 = operands[1];
        rtx len = operands[2];
        if (!CONSTANT_P (len))
          len = force_reg (SImode, len);

        /* Load up the address+length pairs.  */
        emit_insn (gen_rtx_CLOBBER (VOIDmode, reg1));
        emit_move_insn (gen_rtx_SUBREG (SImode, reg1, 0),
                        force_operand (XEXP (mem1, 0), NULL_RTX));
        emit_move_insn (gen_rtx_SUBREG (SImode, reg1, GET_MODE_SIZE (SImode)), len);

        emit_insn (gen_rtx_CLOBBER (VOIDmode, reg2));
        emit_move_insn (gen_rtx_SUBREG (SImode, reg2, 0),
                        force_operand (XEXP (mem2, 0), NULL_RTX));
        emit_move_insn (gen_rtx_SUBREG (SImode, reg2, GET_MODE_SIZE (SImode)), len);

        /* Copy! */
        emit_insn (gen_movstrsi_1 (reg1, reg2));
    }
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit (operand3);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_extendsidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

{
  if (GET_CODE (operands[1]) != CONST_INT)
    {
      emit_insn (gen_rtx_SET (VOIDmode,
		  operand_subword (operands[0], 0, 1, DImode), operands[1]));
      emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			gen_rtx_ASHIFTRT (DImode, operands[0],
				gen_rtx_CONST_INT (SImode, 32))));
    }
  else
    {
      if (INTVAL (operands[1]) < 0)
	{
	  emit_insn (gen_rtx_SET (VOIDmode,
				  operand_subword (operands[0], 0, 1, DImode),
			       gen_rtx_CONST_INT (SImode, -1)));
        }
      else
	{
	  emit_insn (gen_rtx_SET (VOIDmode,
				operand_subword (operands[0], 0, 1, DImode),
			       gen_rtx_CONST_INT (SImode, 0)));
        }
      emit_insn (gen_rtx_SET (VOIDmode, gen_lowpart (SImode, operands[0]),
			   operands[1]));
    }
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_zero_extendsidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

{
      emit_insn (gen_rtx_SET (VOIDmode,
		  operand_subword (operands[0], 0, 1, DImode), operands[1]));
      emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			gen_rtx_LSHIFTRT (DImode, operands[0],
				gen_rtx_CONST_INT (SImode, 32))));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_adddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  rtx label = gen_label_rtx ();
  rtx op0_high = operand_subword (operands[0], 0, 1, DImode);
  rtx op0_low = gen_lowpart (SImode, operands[0]);
	
  emit_insn (gen_rtx_SET (VOIDmode, op0_high,
		    gen_rtx_PLUS (SImode,
			    operand_subword (operands[1], 0, 1, DImode),
			    operand_subword (operands[2], 0, 1, DImode))));
  emit_jump_insn (gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
	      gen_rtx_SET (VOIDmode, op0_low,
		      gen_rtx_PLUS (SImode, gen_lowpart (SImode, operands[1]),
			      gen_lowpart (SImode, operands[2]))),
	      gen_rtx_USE (VOIDmode, gen_rtx_LABEL_REF (VOIDmode, label)))));
  emit_insn (gen_rtx_SET (VOIDmode, op0_high,
		    gen_rtx_PLUS (SImode, op0_high,
			    gen_rtx_CONST_INT (SImode, 1))));
  emit_label (label);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_mulsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  if (GET_CODE (operands[1]) == CONST_INT
      && REG_P (operands[0])
      && CONST_OK_FOR_LETTER_P (INTVAL (operands[1]), 'K'))
    {
      emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_MULT (SImode, operands[2], operands[1])));
    }
  else if (GET_CODE (operands[2]) == CONST_INT
           && REG_P (operands[0])
	   && CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'K'))
    {
      emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_MULT (SImode, operands[1], operands[2])));
    }
  else
    {
      rtx r = gen_reg_rtx (DImode);

      /* XXX trouble.  Below we generate some rtx's that model what
       * is really supposed to happen with multiply on the 370/390
       * hardware, and that is all well & good.  However, during optimization
       * it can happen that the two operands are exchanged (after all,
       * multiplication is commutitive), in which case the doubleword
       * ends up in memory and everything is hosed.  The gen_reg_rtx
       * should have kept it in a reg ...  We hack around this
       * below, in the M/MR isntruction pattern, and constrain it to
       * "di" instead of "g".  But this still ends up with lots & lots of
       * movement between registers & memory and is an awful waste.
       * Dunno how to untwist it elegantly; but it seems to work for now.
       
       * Note, this comment doesn't seem to be relevant for 3.4.6
       * at least, so it is being opened up.
       */
      if (GET_CODE (operands[1]) == CONST_INT)
      {
      emit_insn (gen_rtx_SET (VOIDmode,
			  gen_rtx_SUBREG (SImode, r, GET_MODE_SIZE (SImode)),
					  operands[1]));
      emit_insn (gen_rtx_SET (VOIDmode, r,
			  gen_rtx_MULT (DImode, r, operands[2])));
      }
      else
      {
      emit_insn (gen_rtx_SET (VOIDmode,
			  gen_rtx_SUBREG (SImode, r, GET_MODE_SIZE (SImode)),
					  operands[2]));
      emit_insn (gen_rtx_SET (VOIDmode, r,
			  gen_rtx_MULT (DImode, r, operands[1])));
      }
      emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_SUBREG (SImode, r, GET_MODE_SIZE (SImode))));
    }
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_divsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  rtx r = gen_reg_rtx (DImode);

  emit_insn (gen_extendsidi2 (r, operands[1]));
  emit_insn (gen_rtx_SET (VOIDmode, r,
			gen_rtx_DIV (DImode, r, operands[2])));
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			gen_rtx_SUBREG (SImode, r, GET_MODE_SIZE (SImode))));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_udivsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  rtx dr = gen_reg_rtx (DImode);
  rtx dr_0 = gen_rtx_SUBREG (SImode, dr, 0);
  rtx dr_1 = gen_rtx_SUBREG (SImode, dr, GET_MODE_SIZE (SImode));


  if (GET_CODE (operands[2]) == CONST_INT)
    {
      if (INTVAL (operands[2]) > 0)
	{
	  emit_insn (gen_zero_extendsidi2 (dr, operands[1]));
	  emit_insn (gen_rtx_SET (VOIDmode, dr,
			gen_rtx_DIV (DImode, dr, operands[2])));
	}
      else
	{
	  rtx label1 = gen_label_rtx ();

	  emit_insn (gen_rtx_SET (VOIDmode, dr_0, operands[1]));
	  emit_insn (gen_rtx_SET (VOIDmode, dr_1, const0_rtx));
	  emit_insn (gen_cmpsi (dr_0, operands[2]));
	  emit_jump_insn (gen_bltu (label1));
	  emit_insn (gen_rtx_SET (VOIDmode, dr_1, const1_rtx));
	  emit_label (label1);
	}
    }
  else
    {
      rtx label1 = gen_label_rtx ();
      rtx label2 = gen_label_rtx ();
      rtx label3 = gen_label_rtx ();
      rtx sr = gen_reg_rtx (SImode);

      emit_insn (gen_rtx_SET (VOIDmode, dr_0, operands[1]));
      emit_insn (gen_rtx_SET (VOIDmode, sr, operands[2]));
      emit_insn (gen_rtx_SET (VOIDmode, dr_1, const0_rtx));
      emit_insn (gen_cmpsi (sr, dr_0));
      emit_jump_insn (gen_bgtu (label3));
      emit_insn (gen_cmpsi (sr, const0_rtx));
      emit_jump_insn (gen_blt (label2));
      emit_insn (gen_cmpsi (sr, const1_rtx));
      emit_jump_insn (gen_beq (label1));
      emit_insn (gen_rtx_SET (VOIDmode, dr,
			  gen_rtx_LSHIFTRT (DImode, dr,
				    gen_rtx_CONST_INT (SImode, 32))));
      emit_insn (gen_rtx_SET (VOIDmode, dr,
		    gen_rtx_DIV (DImode, dr, sr)));
      emit_jump_insn (gen_jump (label3));
      emit_label (label1);
      emit_insn (gen_rtx_SET (VOIDmode, dr_1, dr_0));
      emit_jump_insn (gen_jump (label3));
      emit_label (label2);
      emit_insn (gen_rtx_SET (VOIDmode, dr_1, const1_rtx));
      emit_label (label3);
    }
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], dr_1));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_modsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  rtx r = gen_reg_rtx (DImode);

  emit_insn (gen_extendsidi2 (r, operands[1]));
  emit_insn (gen_rtx_SET (VOIDmode, r,
			gen_rtx_MOD (DImode, r, operands[2])));
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			gen_rtx_SUBREG (SImode, r, 0)));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MOD (SImode,
	operand1,
	operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_umodsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  rtx dr = gen_reg_rtx (DImode);
  rtx dr_0 = gen_rtx_SUBREG (SImode, dr, 0);

  emit_insn (gen_rtx_SET (VOIDmode, dr_0, operands[1]));

  if (GET_CODE (operands[2]) == CONST_INT)
    {
      if (INTVAL (operands[2]) > 0)
	{
	  emit_insn (gen_rtx_SET (VOIDmode, dr,
			      gen_rtx_LSHIFTRT (DImode, dr,
					gen_rtx_CONST_INT (SImode, 32))));
	  emit_insn (gen_rtx_SET (VOIDmode, dr,
			gen_rtx_MOD (DImode, dr, operands[2])));
	}
      else
	{
	  rtx label1 = gen_label_rtx ();
	  rtx sr = gen_reg_rtx (SImode);

	  emit_insn (gen_rtx_SET (VOIDmode, sr, operands[2]));
	  emit_insn (gen_cmpsi (dr_0, sr));
	  emit_jump_insn (gen_bltu (label1));
	  emit_insn (gen_rtx_SET (VOIDmode, sr, gen_rtx_ABS (SImode, sr)));
	  emit_insn (gen_rtx_SET (VOIDmode, dr_0,
			      gen_rtx_PLUS (SImode, dr_0, sr)));
	  emit_label (label1);
	}
    }
  else
    {
      rtx label1 = gen_label_rtx ();
      rtx label2 = gen_label_rtx ();
      rtx label3 = gen_label_rtx ();
      rtx sr = gen_reg_rtx (SImode);

      emit_insn (gen_rtx_SET (VOIDmode, dr_0, operands[1]));
      emit_insn (gen_rtx_SET (VOIDmode, sr, operands[2]));
      emit_insn (gen_cmpsi (sr, dr_0));
      emit_jump_insn (gen_bgtu (label3));
      emit_insn (gen_cmpsi (sr, const0_rtx));
      emit_jump_insn (gen_blt (label2));
      emit_insn (gen_cmpsi (sr, const1_rtx));
      emit_jump_insn (gen_beq (label1));
      emit_insn (gen_rtx_SET (VOIDmode, dr,
			  gen_rtx_LSHIFTRT (DImode, dr,
				    gen_rtx_CONST_INT (SImode, 32))));
      emit_insn (gen_rtx_SET (VOIDmode, dr, gen_rtx_MOD (DImode, dr, sr)));
      emit_jump_insn (gen_jump (label3));
      emit_label (label1);
      emit_insn (gen_rtx_SET (VOIDmode, dr_0, const0_rtx));
      emit_jump_insn (gen_jump (label3));
      emit_label (label2);
      emit_insn (gen_rtx_SET (VOIDmode, dr_0,
			  gen_rtx_MINUS (SImode, dr_0, sr)));
      emit_label (label3);

    }
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], dr_0));

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_untyped_call (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

{
  int i;

  emit_call_insn (GEN_CALL (operands[0], const0_rtx, const0_rtx, const0_rtx));

  for (i = 0; i < XVECLEN (operands[2], 0); i++)
    {
      rtx set = XVECEXP (operands[2], 0, i);
      emit_move_insn (SET_DEST (set), SET_SRC (set));
    }

  /* The optimizer does not know that the call sets the function value
     registers we stored in the result block.  We avoid problems by
     claiming that all hard registers are used and clobbered at this
     point.  */
  /* emit_insn (gen_blockage ()); */

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}



void
add_clobbers (pattern, insn_code_number)
     rtx pattern ATTRIBUTE_UNUSED;
     int insn_code_number;
{
  switch (insn_code_number)
    {
    case 34:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DFmode,
	16));
      break;

    default:
      abort ();
    }
}


int
added_clobbers_hard_reg_p (insn_code_number)
     int insn_code_number;
{
  switch (insn_code_number)
    {
    case 34:
      return 1;

    default:
      abort ();
    }
}
