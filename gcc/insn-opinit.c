/* Generated automatically by the program `genopinit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "flags.h"
#include "insn-config.h"
#include "recog.h"
#include "expr.h"
#include "optabs.h"
#include "reload.h"

void
init_all_optabs ()
{
  tst_optab->handlers[(int) DImode].insn_code = CODE_FOR_tstdi;
  tst_optab->handlers[(int) SImode].insn_code = CODE_FOR_tstsi;
  tst_optab->handlers[(int) HImode].insn_code = CODE_FOR_tsthi;
  tst_optab->handlers[(int) DFmode].insn_code = CODE_FOR_tstdf;
  tst_optab->handlers[(int) SFmode].insn_code = CODE_FOR_tstsf;
  cmp_optab->handlers[(int) SImode].insn_code = CODE_FOR_cmpsi;
  cmp_optab->handlers[(int) HImode].insn_code = CODE_FOR_cmphi;
  cmp_optab->handlers[(int) QImode].insn_code = CODE_FOR_cmpqi;
  cmp_optab->handlers[(int) DFmode].insn_code = CODE_FOR_cmpdf;
  cmp_optab->handlers[(int) SFmode].insn_code = CODE_FOR_cmpsf;
  mov_optab->handlers[(int) DImode].insn_code = CODE_FOR_movdi;
  mov_optab->handlers[(int) SImode].insn_code = CODE_FOR_movsi;
  mov_optab->handlers[(int) HImode].insn_code = CODE_FOR_movhi;
  mov_optab->handlers[(int) QImode].insn_code = CODE_FOR_movqi;
  movstrict_optab->handlers[(int) HImode].insn_code = CODE_FOR_movstricthi;
  mov_optab->handlers[(int) DFmode].insn_code = CODE_FOR_movdf;
  mov_optab->handlers[(int) SFmode].insn_code = CODE_FOR_movsf;
  extendtab[(int) SImode][(int) HImode][0] = CODE_FOR_extendhisi2;
  extendtab[(int) SImode][(int) QImode][0] = CODE_FOR_extendqisi2;
  extendtab[(int) HImode][(int) QImode][0] = CODE_FOR_extendqihi2;
  extendtab[(int) SImode][(int) HImode][1] = CODE_FOR_zero_extendhisi2;
  extendtab[(int) SImode][(int) QImode][1] = CODE_FOR_zero_extendqisi2;
  extendtab[(int) HImode][(int) QImode][1] = CODE_FOR_zero_extendqihi2;
  fixtrunctab[(int) DFmode][(int) SImode][0] = CODE_FOR_fix_truncdfsi2;
  floattab[(int) DFmode][(int) SImode][0] = CODE_FOR_floatsidf2;
  extendtab[(int) DFmode][(int) SFmode][0] = CODE_FOR_extendsfdf2;
  add_optab->handlers[(int) SImode].insn_code = CODE_FOR_addsi3;
  add_optab->handlers[(int) HImode].insn_code = CODE_FOR_addhi3;
  add_optab->handlers[(int) QImode].insn_code = CODE_FOR_addqi3;
  addv_optab->handlers[(int) (int) DFmode].insn_code =
    add_optab->handlers[(int) (int) DFmode].insn_code = CODE_FOR_adddf3;
  addv_optab->handlers[(int) (int) SFmode].insn_code =
    add_optab->handlers[(int) (int) SFmode].insn_code = CODE_FOR_addsf3;
  sub_optab->handlers[(int) SImode].insn_code = CODE_FOR_subsi3;
  sub_optab->handlers[(int) HImode].insn_code = CODE_FOR_subhi3;
  sub_optab->handlers[(int) QImode].insn_code = CODE_FOR_subqi3;
  subv_optab->handlers[(int) (int) DFmode].insn_code =
    sub_optab->handlers[(int) (int) DFmode].insn_code = CODE_FOR_subdf3;
  subv_optab->handlers[(int) (int) SFmode].insn_code =
    sub_optab->handlers[(int) (int) SFmode].insn_code = CODE_FOR_subsf3;
  smulv_optab->handlers[(int) (int) DFmode].insn_code =
    smul_optab->handlers[(int) (int) DFmode].insn_code = CODE_FOR_muldf3;
  smulv_optab->handlers[(int) (int) SFmode].insn_code =
    smul_optab->handlers[(int) (int) SFmode].insn_code = CODE_FOR_mulsf3;
  sdiv_optab->handlers[(int) DFmode].insn_code = CODE_FOR_divdf3;
  sdiv_optab->handlers[(int) SFmode].insn_code = CODE_FOR_divsf3;
  and_optab->handlers[(int) SImode].insn_code = CODE_FOR_andsi3;
  and_optab->handlers[(int) HImode].insn_code = CODE_FOR_andhi3;
  and_optab->handlers[(int) QImode].insn_code = CODE_FOR_andqi3;
  ior_optab->handlers[(int) SImode].insn_code = CODE_FOR_iorsi3;
  ior_optab->handlers[(int) HImode].insn_code = CODE_FOR_iorhi3;
  ior_optab->handlers[(int) QImode].insn_code = CODE_FOR_iorqi3;
  xor_optab->handlers[(int) SImode].insn_code = CODE_FOR_xorsi3;
  xor_optab->handlers[(int) HImode].insn_code = CODE_FOR_xorhi3;
  xor_optab->handlers[(int) QImode].insn_code = CODE_FOR_xorqi3;
  neg_optab->handlers[(int) SImode].insn_code = CODE_FOR_negsi2;
  neg_optab->handlers[(int) HImode].insn_code = CODE_FOR_neghi2;
  negv_optab->handlers[(int) (int) DFmode].insn_code =
    neg_optab->handlers[(int) (int) DFmode].insn_code = CODE_FOR_negdf2;
  negv_optab->handlers[(int) (int) SFmode].insn_code =
    neg_optab->handlers[(int) (int) SFmode].insn_code = CODE_FOR_negsf2;
  abs_optab->handlers[(int) SImode].insn_code = CODE_FOR_abssi2;
  abs_optab->handlers[(int) HImode].insn_code = CODE_FOR_abshi2;
  absv_optab->handlers[(int) (int) DFmode].insn_code =
    abs_optab->handlers[(int) (int) DFmode].insn_code = CODE_FOR_absdf2;
  absv_optab->handlers[(int) (int) SFmode].insn_code =
    abs_optab->handlers[(int) (int) SFmode].insn_code = CODE_FOR_abssf2;
  one_cmpl_optab->handlers[(int) SImode].insn_code = CODE_FOR_one_cmplsi2;
  one_cmpl_optab->handlers[(int) HImode].insn_code = CODE_FOR_one_cmplhi2;
  one_cmpl_optab->handlers[(int) QImode].insn_code = CODE_FOR_one_cmplqi2;
  ashl_optab->handlers[(int) DImode].insn_code = CODE_FOR_ashldi3;
  ashr_optab->handlers[(int) DImode].insn_code = CODE_FOR_ashrdi3;
  ashl_optab->handlers[(int) SImode].insn_code = CODE_FOR_ashlsi3;
  ashr_optab->handlers[(int) SImode].insn_code = CODE_FOR_ashrsi3;
  ashl_optab->handlers[(int) HImode].insn_code = CODE_FOR_ashlhi3;
  ashr_optab->handlers[(int) HImode].insn_code = CODE_FOR_ashrhi3;
  ashl_optab->handlers[(int) QImode].insn_code = CODE_FOR_ashlqi3;
  ashr_optab->handlers[(int) QImode].insn_code = CODE_FOR_ashrqi3;
  lshr_optab->handlers[(int) DImode].insn_code = CODE_FOR_lshrdi3;
  lshr_optab->handlers[(int) SImode].insn_code = CODE_FOR_lshrsi3;
  lshr_optab->handlers[(int) HImode].insn_code = CODE_FOR_lshrhi3;
  lshr_optab->handlers[(int) QImode].insn_code = CODE_FOR_lshrqi3;
  bcc_gen_fctn[(int) EQ] = gen_beq;
  bcc_gen_fctn[(int) NE] = gen_bne;
  bcc_gen_fctn[(int) GT] = gen_bgt;
  bcc_gen_fctn[(int) GTU] = gen_bgtu;
  bcc_gen_fctn[(int) LT] = gen_blt;
  bcc_gen_fctn[(int) LTU] = gen_bltu;
  bcc_gen_fctn[(int) GE] = gen_bge;
  bcc_gen_fctn[(int) GEU] = gen_bgeu;
  bcc_gen_fctn[(int) LE] = gen_ble;
  bcc_gen_fctn[(int) LEU] = gen_bleu;
  clrstr_optab[(int) SImode] = CODE_FOR_clrstrsi;
  movstr_optab[(int) SImode] = CODE_FOR_movstrsi;
  extendtab[(int) DImode][(int) SImode][0] = CODE_FOR_extendsidi2;
  extendtab[(int) DImode][(int) SImode][1] = CODE_FOR_zero_extendsidi2;
  add_optab->handlers[(int) DImode].insn_code = CODE_FOR_adddi3;
  smul_optab->handlers[(int) SImode].insn_code = CODE_FOR_mulsi3;
  sdiv_optab->handlers[(int) SImode].insn_code = CODE_FOR_divsi3;
  udiv_optab->handlers[(int) SImode].insn_code = CODE_FOR_udivsi3;
  smod_optab->handlers[(int) SImode].insn_code = CODE_FOR_modsi3;
  umod_optab->handlers[(int) SImode].insn_code = CODE_FOR_umodsi3;
}
