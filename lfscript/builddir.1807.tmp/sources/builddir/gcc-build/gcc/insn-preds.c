/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc-4.6.2/gcc/config/i386/i386.md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tree.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"

int
any_fp_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 24 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(ANY_FP_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
fp_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 29 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(FP_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
register_and_not_any_fp_reg_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (!(
#line 34 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(ANY_FP_REGNO_P (REGNO (op)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
register_and_not_fp_reg_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (!(
#line 39 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(FP_REGNO_P (REGNO (op)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
mmx_reg_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 44 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(MMX_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
sse_reg_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 49 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(SSE_REGNO_P (REGNO (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
q_regs_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 54 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);
  return ANY_QI_REG_P (op);
}

int
q_regs_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(q_regs_operand_1 (op, mode)));
}

static inline int
ext_register_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 63 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  if ((!TARGET_64BIT || GET_MODE (op) != DImode)
      && GET_MODE (op) != SImode && GET_MODE (op) != HImode)
    return false;
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  /* Be careful to accept only registers having upper parts.  */
  return (REG_P (op)
	  && (REGNO (op) > LAST_VIRTUAL_REGISTER || REGNO (op) <= BX_REG));
}

int
ext_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(ext_register_operand_1 (op, mode)));
}

int
ax_reg_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 78 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(REGNO (op) == AX_REG))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
flags_reg_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 83 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(REGNO (op) == FLAGS_REG))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
ext_QIreg_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 89 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(TARGET_64BIT
		    && GET_MODE (op) == QImode
		    && REGNO (op) > BX_REG))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
ext_QIreg_nomode_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 96 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(TARGET_64BIT
		    && REGNO (op) > BX_REG))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
reg_not_xmm0_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 102 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  return !REG_P (op) || REGNO (op) != FIRST_SSE_REG;
}

int
reg_not_xmm0_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(reg_not_xmm0_operand_1 (op, mode)));
}

int
nonimm_not_xmm0_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) || (reg_not_xmm0_operand (op, mode));
}

static inline int
x86_64_immediate_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 117 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  if (!TARGET_64BIT)
    return immediate_operand (op, mode);

  switch (GET_CODE (op))
    {
    case CONST_INT:
      /* CONST_DOUBLES never match, since HOST_BITS_PER_WIDE_INT is known
         to be at least 32 and this all acceptable constants are
	 represented as CONST_INT.  */
      if (HOST_BITS_PER_WIDE_INT == 32)
	return true;
      else
	{
	  HOST_WIDE_INT val = trunc_int_for_mode (INTVAL (op), DImode);
	  return trunc_int_for_mode (val, SImode) == val;
	}
      break;

    case SYMBOL_REF:
      /* For certain code models, the symbolic references are known to fit.
	 in CM_SMALL_PIC model we know it fits if it is local to the shared
	 library.  Don't count TLS SYMBOL_REFs here, since they should fit
	 only if inside of UNSPEC handled below.  */
      /* TLS symbols are not constant.  */
      if (SYMBOL_REF_TLS_MODEL (op))
	return false;
      return (ix86_cmodel == CM_SMALL || ix86_cmodel == CM_KERNEL
	      || (ix86_cmodel == CM_MEDIUM && !SYMBOL_REF_FAR_ADDR_P (op)));

    case LABEL_REF:
      /* For certain code models, the code is near as well.  */
      return (ix86_cmodel == CM_SMALL || ix86_cmodel == CM_MEDIUM
	      || ix86_cmodel == CM_KERNEL);

    case CONST:
      /* We also may accept the offsetted memory references in certain
	 special cases.  */
      if (GET_CODE (XEXP (op, 0)) == UNSPEC)
	switch (XINT (XEXP (op, 0), 1))
	  {
	  case UNSPEC_GOTPCREL:
	  case UNSPEC_DTPOFF:
	  case UNSPEC_GOTNTPOFF:
	  case UNSPEC_NTPOFF:
	    return true;
	  default:
	    break;
	  }

      if (GET_CODE (XEXP (op, 0)) == PLUS)
	{
	  rtx op1 = XEXP (XEXP (op, 0), 0);
	  rtx op2 = XEXP (XEXP (op, 0), 1);
	  HOST_WIDE_INT offset;

	  if (ix86_cmodel == CM_LARGE)
	    return false;
	  if (!CONST_INT_P (op2))
	    return false;
	  offset = trunc_int_for_mode (INTVAL (op2), DImode);
	  switch (GET_CODE (op1))
	    {
	    case SYMBOL_REF:
	      /* TLS symbols are not constant.  */
	      if (SYMBOL_REF_TLS_MODEL (op1))
		return false;
	      /* For CM_SMALL assume that latest object is 16MB before
		 end of 31bits boundary.  We may also accept pretty
		 large negative constants knowing that all objects are
		 in the positive half of address space.  */
	      if ((ix86_cmodel == CM_SMALL
		   || (ix86_cmodel == CM_MEDIUM
		       && !SYMBOL_REF_FAR_ADDR_P (op1)))
		  && offset < 16*1024*1024
		  && trunc_int_for_mode (offset, SImode) == offset)
		return true;
	      /* For CM_KERNEL we know that all object resist in the
		 negative half of 32bits address space.  We may not
		 accept negative offsets, since they may be just off
		 and we may accept pretty large positive ones.  */
	      if (ix86_cmodel == CM_KERNEL
		  && offset > 0
		  && trunc_int_for_mode (offset, SImode) == offset)
		return true;
	      break;

	    case LABEL_REF:
	      /* These conditions are similar to SYMBOL_REF ones, just the
		 constraints for code models differ.  */
	      if ((ix86_cmodel == CM_SMALL || ix86_cmodel == CM_MEDIUM)
		  && offset < 16*1024*1024
		  && trunc_int_for_mode (offset, SImode) == offset)
		return true;
	      if (ix86_cmodel == CM_KERNEL
		  && offset > 0
		  && trunc_int_for_mode (offset, SImode) == offset)
		return true;
	      break;

	    case UNSPEC:
	      switch (XINT (op1, 1))
		{
		case UNSPEC_DTPOFF:
		case UNSPEC_NTPOFF:
		  if (offset > 0
		      && trunc_int_for_mode (offset, SImode) == offset)
		    return true;
		}
	      break;

	    default:
	      break;
	    }
	}
      break;

      default:
	gcc_unreachable ();
    }

  return false;
}

int
x86_64_immediate_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case SYMBOL_REF:
    case LABEL_REF:
    case CONST:
      break;
    default:
      return false;
    }
  return 
(x86_64_immediate_operand_1 (op, mode));
}

static inline int
x86_64_zext_immediate_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 244 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
      if (HOST_BITS_PER_WIDE_INT == 32)
	return (GET_MODE (op) == VOIDmode && !CONST_DOUBLE_HIGH (op));
      else
	return false;

    case CONST_INT:
      if (HOST_BITS_PER_WIDE_INT == 32)
	return INTVAL (op) >= 0;
      else
	return !(INTVAL (op) & ~(HOST_WIDE_INT) 0xffffffff);

    case SYMBOL_REF:
      /* For certain code models, the symbolic references are known to fit.  */
      /* TLS symbols are not constant.  */
      if (SYMBOL_REF_TLS_MODEL (op))
	return false;
      return (ix86_cmodel == CM_SMALL
	      || (ix86_cmodel == CM_MEDIUM
		  && !SYMBOL_REF_FAR_ADDR_P (op)));

    case LABEL_REF:
      /* For certain code models, the code is near as well.  */
      return ix86_cmodel == CM_SMALL || ix86_cmodel == CM_MEDIUM;

    case CONST:
      /* We also may accept the offsetted memory references in certain
	 special cases.  */
      if (GET_CODE (XEXP (op, 0)) == PLUS)
	{
	  rtx op1 = XEXP (XEXP (op, 0), 0);
	  rtx op2 = XEXP (XEXP (op, 0), 1);

	  if (ix86_cmodel == CM_LARGE)
	    return false;
	  switch (GET_CODE (op1))
	    {
	    case SYMBOL_REF:
	      /* TLS symbols are not constant.  */
	      if (SYMBOL_REF_TLS_MODEL (op1))
		return false;
	      /* For small code model we may accept pretty large positive
		 offsets, since one bit is available for free.  Negative
		 offsets are limited by the size of NULL pointer area
		 specified by the ABI.  */
	      if ((ix86_cmodel == CM_SMALL
		   || (ix86_cmodel == CM_MEDIUM
		       && !SYMBOL_REF_FAR_ADDR_P (op1)))
		  && CONST_INT_P (op2)
		  && trunc_int_for_mode (INTVAL (op2), DImode) > -0x10000
		  && trunc_int_for_mode (INTVAL (op2), SImode) == INTVAL (op2))
		return true;
	      /* ??? For the kernel, we may accept adjustment of
		 -0x10000000, since we know that it will just convert
		 negative address space to positive, but perhaps this
		 is not worthwhile.  */
	      break;

	    case LABEL_REF:
	      /* These conditions are similar to SYMBOL_REF ones, just the
		 constraints for code models differ.  */
	      if ((ix86_cmodel == CM_SMALL || ix86_cmodel == CM_MEDIUM)
		  && CONST_INT_P (op2)
		  && trunc_int_for_mode (INTVAL (op2), DImode) > -0x10000
		  && trunc_int_for_mode (INTVAL (op2), SImode) == INTVAL (op2))
		return true;
	      break;

	    default:
	      return false;
	    }
	}
      break;

    default:
      gcc_unreachable ();
    }
  return false;
}

int
x86_64_zext_immediate_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case SYMBOL_REF:
    case LABEL_REF:
    case CONST:
      break;
    default:
      return false;
    }
  return 
(x86_64_zext_immediate_operand_1 (op, mode));
}

int
x86_64_general_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 329 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((nonimmediate_operand (op, mode)) || (x86_64_immediate_operand (op, mode))) : (general_operand (op, mode));
}

int
x86_64_szext_general_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 337 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((nonimmediate_operand (op, mode)) || ((x86_64_immediate_operand (op, mode)) || (x86_64_zext_immediate_operand (op, mode)))) : (general_operand (op, mode));
}

int
x86_64_nonmemory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 345 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((register_operand (op, mode)) || (x86_64_immediate_operand (op, mode))) : (nonmemory_operand (op, mode));
}

int
x86_64_szext_nonmemory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 352 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? ((register_operand (op, mode)) || ((x86_64_immediate_operand (op, mode)) || (x86_64_zext_immediate_operand (op, mode)))) : (nonmemory_operand (op, mode));
}

static inline int
pic_32bit_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 362 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  if (!flag_pic)
    return false;
  /* Rule out relocations that translate into 64bit constants.  */
  if (TARGET_64BIT && GET_CODE (op) == CONST)
    {
      op = XEXP (op, 0);
      if (GET_CODE (op) == PLUS && CONST_INT_P (XEXP (op, 1)))
	op = XEXP (op, 0);
      if (GET_CODE (op) == UNSPEC
	  && (XINT (op, 1) == UNSPEC_GOTOFF
	      || XINT (op, 1) == UNSPEC_GOT))
	return false;
    }
  return symbolic_operand (op, mode);
}

int
pic_32bit_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(pic_32bit_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
x86_64_movabs_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 382 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(!TARGET_64BIT || !flag_pic)) ? (nonmemory_operand (op, mode)) : ((register_operand (op, mode)) || ((const_double_operand (op, mode)) && (
#line 386 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(GET_MODE_SIZE (mode) <= 8))));
}

static inline int
symbolic_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 392 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case LABEL_REF:
      return true;

    case CONST:
      op = XEXP (op, 0);
      if (GET_CODE (op) == SYMBOL_REF
	  || GET_CODE (op) == LABEL_REF
	  || (GET_CODE (op) == UNSPEC
	      && (XINT (op, 1) == UNSPEC_GOT
		  || XINT (op, 1) == UNSPEC_GOTOFF
		  || XINT (op, 1) == UNSPEC_GOTPCREL)))
	return true;
      if (GET_CODE (op) != PLUS
	  || !CONST_INT_P (XEXP (op, 1)))
	return false;

      op = XEXP (op, 0);
      if (GET_CODE (op) == SYMBOL_REF
	  || GET_CODE (op) == LABEL_REF)
	return true;
      /* Only @GOTOFF gets offsets.  */
      if (GET_CODE (op) != UNSPEC
	  || XINT (op, 1) != UNSPEC_GOTOFF)
	return false;

      op = XVECEXP (op, 0, 0);
      if (GET_CODE (op) == SYMBOL_REF
	  || GET_CODE (op) == LABEL_REF)
	return true;
      return false;

    default:
      gcc_unreachable ();
    }
}

int
symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case SYMBOL_REF:
    case LABEL_REF:
    case CONST:
      break;
    default:
      return false;
    }
  return (
(symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
local_symbolic_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 435 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  if (GET_CODE (op) == CONST
      && GET_CODE (XEXP (op, 0)) == PLUS
      && CONST_INT_P (XEXP (XEXP (op, 0), 1)))
    op = XEXP (XEXP (op, 0), 0);

  if (GET_CODE (op) == LABEL_REF)
    return true;

  if (GET_CODE (op) != SYMBOL_REF)
    return false;

  if (SYMBOL_REF_TLS_MODEL (op))
    return false;

  if (SYMBOL_REF_LOCAL_P (op))
    return true;

  /* There is, however, a not insubstantial body of code in the rest of
     the compiler that assumes it can just stick the results of
     ASM_GENERATE_INTERNAL_LABEL in a symbol_ref and have done.  */
  /* ??? This is a hack.  Should update the body of the compiler to
     always create a DECL an invoke targetm.encode_section_info.  */
  if (strncmp (XSTR (op, 0), internal_label_prefix,
	       internal_label_prefix_len) == 0)
    return true;

  return false;
}

int
local_symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case LABEL_REF:
    case SYMBOL_REF:
      break;
    default:
      return false;
    }
  return (
(local_symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
gotoff_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 474 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(!TARGET_VXWORKS_RTP)) && (local_symbolic_operand (op, mode));
}

int
tls_symbolic_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 480 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(SYMBOL_REF_TLS_MODEL (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
tls_modbase_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
#line 484 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(op == ix86_tls_module_base ()))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
tp_or_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == UNSPEC) && (
#line 489 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(XINT (op, 1) == UNSPEC_TP))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

static inline int
constant_call_address_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 494 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  if (ix86_cmodel == CM_LARGE || ix86_cmodel == CM_LARGE_PIC)
    return false;
  if (TARGET_DLLIMPORT_DECL_ATTRIBUTES && SYMBOL_REF_DLLIMPORT_P (op))
    return false;
  return true;
}

int
constant_call_address_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
(constant_call_address_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
call_register_no_elim_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 508 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);

  if (!TARGET_64BIT && op == stack_pointer_rtx)
    return false;

  return register_no_elim_operand (op, mode);
}

int
call_register_no_elim_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(call_register_no_elim_operand_1 (op, mode)));
}

static inline int
register_no_elim_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 522 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);
  return !(op == arg_pointer_rtx
	   || op == frame_pointer_rtx
	   || IN_RANGE (REGNO (op),
			FIRST_PSEUDO_REGISTER, LAST_VIRTUAL_REGISTER));
}

int
register_no_elim_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(register_no_elim_operand_1 (op, mode)));
}

static inline int
index_register_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 535 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  if (GET_CODE (op) == SUBREG)
    op = SUBREG_REG (op);
  if (reload_in_progress || reload_completed)
    return REG_OK_FOR_INDEX_STRICT_P (op);
  else
    return REG_OK_FOR_INDEX_NONSTRICT_P (op);
}

int
index_register_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
(index_register_operand_1 (op, mode)));
}

int
general_no_elim_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == REG || GET_CODE (op) == SUBREG) ? (register_no_elim_operand (op, mode)) : (general_operand (op, mode));
}

int
nonmemory_no_elim_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_no_elim_operand (op, mode)) || (immediate_operand (op, mode));
}

int
call_insn_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (constant_call_address_operand (op, mode)) || ((call_register_no_elim_operand (op, mode)) || (memory_operand (op, mode)));
}

int
sibcall_insn_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (constant_call_address_operand (op, mode)) || (register_no_elim_operand (op, mode));
}

static inline int
const0_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 570 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  if (mode == VOIDmode)
    mode = GET_MODE (op);
  return op == CONST0_RTX (mode);
}

int
const0_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
(const0_operand_1 (op, mode));
}

int
const1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 579 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(op == const1_rtx));
}

int
const8_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 584 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(INTVAL (op) == 8));
}

int
const128_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 589 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(INTVAL (op) == 128));
}

static inline int
const248_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 594 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  HOST_WIDE_INT i = INTVAL (op);
  return i == 2 || i == 4 || i == 8;
}

int
const248_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const248_operand_1 (op, mode)));
}

int
const_0_to_1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 602 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(op == const0_rtx || op == const1_rtx));
}

int
const_0_to_3_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 607 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 3)));
}

int
const_0_to_7_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 612 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 7)));
}

int
const_0_to_15_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 617 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 15)));
}

int
const_0_to_31_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 622 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 31)));
}

int
const_0_to_63_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 627 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 63)));
}

int
const_0_to_255_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 632 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 0, 255)));
}

static inline int
const_0_to_255_mul_8_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 637 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  unsigned HOST_WIDE_INT val = INTVAL (op);
  return val <= 255*8 && val % 8 == 0;
}

int
const_0_to_255_mul_8_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_0_to_255_mul_8_operand_1 (op, mode)));
}

int
const_1_to_31_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 646 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 1, 31)));
}

int
const_1_to_63_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 652 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 1, 63)));
}

int
const_2_to_3_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 657 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 2, 3)));
}

int
const_4_to_5_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 662 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 4, 5)));
}

int
const_4_to_7_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 667 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 4, 7)));
}

int
const_6_to_7_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 672 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 6, 7)));
}

int
const_8_to_11_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 677 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 8, 11)));
}

int
const_12_to_15_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 682 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(IN_RANGE (INTVAL (op), 12, 15)));
}

int
const_pow2_1_to_2_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 687 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(INTVAL (op) == 1 || INTVAL (op) == 2));
}

static inline int
const_pow2_1_to_8_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 692 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  unsigned int log = exact_log2 (INTVAL (op));
  return log <= 3;
}

int
const_pow2_1_to_8_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_pow2_1_to_8_operand_1 (op, mode)));
}

static inline int
const_pow2_1_to_128_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 700 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  unsigned int log = exact_log2 (INTVAL (op));
  return log <= 7;
}

int
const_pow2_1_to_128_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_pow2_1_to_128_operand_1 (op, mode)));
}

static inline int
const_pow2_1_to_32768_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 708 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  unsigned int log = exact_log2 (INTVAL (op));
  return log <= 15;
}

int
const_pow2_1_to_32768_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_pow2_1_to_32768_operand_1 (op, mode)));
}

static inline int
incdec_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 716 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  /* On Pentium4, the inc and dec operations causes extra dependency on flag
     registers, since carry flag is not set.  */
  if (!TARGET_USE_INCDEC && !optimize_insn_for_size_p ())
    return false;
  return op == const1_rtx || op == constm1_rtx;
}

int
incdec_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(incdec_operand_1 (op, mode)));
}

int
reg_or_pm1_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((GET_CODE (op) == CONST_INT) && (
#line 728 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(op == const1_rtx || op == constm1_rtx)));
}

int
shiftdi_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 732 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? (nonimmediate_operand (op, mode)) : (register_operand (op, mode));
}

int
ashldi_input_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 737 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(TARGET_64BIT)) ? (nonimmediate_operand (op, mode)) : (reg_or_pm1_operand (op, mode));
}

static inline int
zero_extended_scalar_load_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 745 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  unsigned n_elts;
  op = maybe_get_pool_constant (op);

  if (!(op && GET_CODE (op) == CONST_VECTOR))
    return false;

  n_elts = CONST_VECTOR_NUNITS (op);

  for (n_elts--; n_elts > 0; n_elts--)
    {
      rtx elt = CONST_VECTOR_ELT (op, n_elts);
      if (elt != CONST0_RTX (GET_MODE_INNER (GET_MODE (op))))
	return false;
    }
  return true;
}

int
zero_extended_scalar_load_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
(zero_extended_scalar_load_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
vector_all_ones_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 766 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  int nunits = GET_MODE_NUNITS (mode);

  if (GET_CODE (op) == CONST_VECTOR
      && CONST_VECTOR_NUNITS (op) == nunits)
    {
      int i;
      for (i = 0; i < nunits; ++i)
        {
          rtx x = CONST_VECTOR_ELT (op, i);
          if (x != constm1_rtx)
            return false;
        }
      return true;
    }

  return false;
}

int
vector_all_ones_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
(vector_all_ones_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
vector_move_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) || (const0_operand (op, mode));
}

static inline int
nonimmediate_or_sse_const_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 793 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  if (nonimmediate_operand (op, mode))
    return true;
  if (standard_sse_constant_p (op) > 0)
    return true;
  return false;
}

int
nonimmediate_or_sse_const_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (general_operand (op, mode)) && (
(nonimmediate_or_sse_const_operand_1 (op, mode)));
}

int
reg_or_0_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (const0_operand (op, mode));
}

static inline int
no_seg_address_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 810 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  ok = ix86_decompose_address (op, &parts);
  gcc_assert (ok);
  return parts.seg == SEG_DEFAULT;
}

int
no_seg_address_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (address_operand (op, mode)) && (
(no_seg_address_operand_1 (op, mode)));
}

static inline int
aligned_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 822 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  /* Registers and immediate operands are always "aligned".  */
  if (!MEM_P (op))
    return true;

  /* All patterns using aligned_operand on memory operands ends up
     in promoting memory operand to 64bit and thus causing memory mismatch.  */
  if (TARGET_MEMORY_MISMATCH_STALL && !optimize_insn_for_size_p ())
    return false;

  /* Don't even try to do any aligned optimizations with volatiles.  */
  if (MEM_VOLATILE_P (op))
    return false;

  if (MEM_ALIGN (op) >= 32)
    return true;

  op = XEXP (op, 0);

  /* Pushes and pops are only valid on the stack pointer.  */
  if (GET_CODE (op) == PRE_DEC
      || GET_CODE (op) == POST_INC)
    return true;

  /* Decode the address.  */
  ok = ix86_decompose_address (op, &parts);
  gcc_assert (ok);

  /* Look for some component that isn't known to be aligned.  */
  if (parts.index)
    {
      if (REGNO_POINTER_ALIGN (REGNO (parts.index)) * parts.scale < 32)
	return false;
    }
  if (parts.base)
    {
      if (REGNO_POINTER_ALIGN (REGNO (parts.base)) < 32)
	return false;
    }
  if (parts.disp)
    {
      if (!CONST_INT_P (parts.disp)
	  || (INTVAL (parts.disp) & 3))
	return false;
    }

  /* Didn't find one -- this must be an aligned address.  */
  return true;
}

int
aligned_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (general_operand (op, mode)) && (
(aligned_operand_1 (op, mode)));
}

static inline int
memory_displacement_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 878 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  ok = ix86_decompose_address (XEXP (op, 0), &parts);
  gcc_assert (ok);
  return parts.disp != NULL_RTX;
}

int
memory_displacement_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
(memory_displacement_operand_1 (op, mode)));
}

static inline int
memory_displacement_only_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 890 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  if (TARGET_64BIT)
    return false;

  ok = ix86_decompose_address (XEXP (op, 0), &parts);
  gcc_assert (ok);

  if (parts.base || parts.index)
    return false;

  return parts.disp != NULL_RTX;
}

int
memory_displacement_only_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
(memory_displacement_only_operand_1 (op, mode)));
}

static inline int
cmpxchg8b_pic_memory_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 910 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  struct ix86_address parts;
  int ok;

  ok = ix86_decompose_address (XEXP (op, 0), &parts);
  gcc_assert (ok);
  if (parts.base == NULL_RTX
      || parts.base == arg_pointer_rtx
      || parts.base == frame_pointer_rtx
      || parts.base == hard_frame_pointer_rtx
      || parts.base == stack_pointer_rtx)
    return true;

  if (parts.index == NULL_RTX
      || parts.index == arg_pointer_rtx
      || parts.index == frame_pointer_rtx
      || parts.index == hard_frame_pointer_rtx
      || parts.index == stack_pointer_rtx)
    return true;

  return false;
}

int
cmpxchg8b_pic_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
(cmpxchg8b_pic_memory_operand_1 (op, mode)));
}

int
long_memory_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (memory_operand (op, mode)) && (
#line 938 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(memory_address_length (op)));
}

static inline int
fcmov_comparison_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 943 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  enum machine_mode inmode = GET_MODE (XEXP (op, 0));
  enum rtx_code code = GET_CODE (op);

  if (inmode == CCFPmode || inmode == CCFPUmode)
    {
      if (!ix86_trivial_fp_comparison_operator (op, mode))
	return false;
      code = ix86_fp_compare_code_to_integer (code);
    }
  /* i387 supports just limited amount of conditional codes.  */
  switch (code)
    {
    case LTU: case GTU: case LEU: case GEU:
      if (inmode == CCmode || inmode == CCFPmode || inmode == CCFPUmode
	  || inmode == CCCmode)
	return true;
      return false;
    case ORDERED: case UNORDERED:
    case EQ: case NE:
      return true;
    default:
      return false;
    }
}

int
fcmov_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (comparison_operator (op, mode)) && (
(fcmov_comparison_operator_1 (op, mode)));
}

int
sse_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case LT:
    case LE:
    case UNORDERED:
    case NE:
    case UNGE:
    case UNGT:
    case ORDERED:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
avx_comparison_float_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
    case LTGT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
ix86_comparison_int_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
ix86_comparison_uns_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NE:
    case EQ:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
bt_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case NE:
    case EQ:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

static inline int
ix86_comparison_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 993 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  enum machine_mode inmode = GET_MODE (XEXP (op, 0));
  enum rtx_code code = GET_CODE (op);

  if (inmode == CCFPmode || inmode == CCFPUmode)
    return ix86_trivial_fp_comparison_operator (op, mode);

  switch (code)
    {
    case EQ: case NE:
      return true;
    case LT: case GE:
      if (inmode == CCmode || inmode == CCGCmode
	  || inmode == CCGOCmode || inmode == CCNOmode)
	return true;
      return false;
    case LTU: case GTU: case LEU: case GEU:
      if (inmode == CCmode || inmode == CCCmode)
	return true;
      return false;
    case ORDERED: case UNORDERED:
      if (inmode == CCmode)
	return true;
      return false;
    case GT: case LE:
      if (inmode == CCmode || inmode == CCGCmode || inmode == CCNOmode)
	return true;
      return false;
    default:
      return false;
    }
}

int
ix86_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (comparison_operator (op, mode)) && (
(ix86_comparison_operator_1 (op, mode)));
}

static inline int
ix86_carry_flag_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 1030 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  enum machine_mode inmode = GET_MODE (XEXP (op, 0));
  enum rtx_code code = GET_CODE (op);

  if (inmode == CCFPmode || inmode == CCFPUmode)
    {
      if (!ix86_trivial_fp_comparison_operator (op, mode))
	return false;
      code = ix86_fp_compare_code_to_integer (code);
    }
  else if (inmode == CCCmode)
   return code == LTU || code == GTU;
  else if (inmode != CCmode)
    return false;

  return code == LTU;
}

int
ix86_carry_flag_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LTU:
    case LT:
    case UNLT:
    case GTU:
    case GT:
    case UNGT:
    case LE:
    case UNLE:
    case GE:
    case UNGE:
    case LTGT:
    case UNEQ:
      break;
    default:
      return false;
    }
  return (
(ix86_carry_flag_operator_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
ix86_trivial_fp_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GT:
    case GE:
    case UNLT:
    case UNLE:
    case UNEQ:
    case LTGT:
    case ORDERED:
    case UNORDERED:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
ix86_fp_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 1056 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(ix86_fp_comparison_strategy (GET_CODE (op))
                             == IX86_FPCMP_ARITH)) ? (comparison_operator (op, mode)) : (ix86_trivial_fp_comparison_operator (op, mode));
}

static inline int
ix86_swapped_fp_comparison_operator_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 1064 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  enum rtx_code code = GET_CODE (op);
  bool ret;

  PUT_CODE (op, swap_condition (code));
  ret = ix86_fp_comparison_operator (op, mode);
  PUT_CODE (op, code);
  return ret;
}

int
ix86_swapped_fp_comparison_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (comparison_operator (op, mode)) && (
(ix86_swapped_fp_comparison_operator_1 (op, mode)));
}

int
cmp_fp_expander_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_DOUBLE) || (general_operand (op, mode));
}

int
binary_fp_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case MULT:
    case DIV:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
mult_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == MULT) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
div_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == DIV) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
float_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == FLOAT) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
arith_or_logical_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MULT:
    case AND:
    case IOR:
    case XOR:
    case SMIN:
    case SMAX:
    case UMIN:
    case UMAX:
    case COMPARE:
    case MINUS:
    case DIV:
    case MOD:
    case UDIV:
    case UMOD:
    case ASHIFT:
    case ROTATE:
    case ASHIFTRT:
    case LSHIFTRT:
    case ROTATERT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
commutative_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MULT:
    case AND:
    case IOR:
    case XOR:
    case SMIN:
    case SMAX:
    case UMIN:
    case UMAX:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
promotable_binary_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PLUS || GET_CODE (op) == AND || GET_CODE (op) == IOR || GET_CODE (op) == XOR || GET_CODE (op) == ASHIFT) || ((GET_CODE (op) == MULT) && (
#line 1110 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(TARGET_TUNE_PROMOTE_HIMODE_IMUL)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
compare_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == COMPARE) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
absneg_operator (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case ABS:
    case NEG:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

int
misaligned_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 1121 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(MEM_ALIGN (op) < GET_MODE_ALIGNMENT (mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
emms_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 1126 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  unsigned i;

  if (XVECLEN (op, 0) != 17)
    return false;

  for (i = 0; i < 8; i++)
    {
      rtx elt = XVECEXP (op, 0, i+1);

      if (GET_CODE (elt) != CLOBBER
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != XFmode
	  || REGNO (SET_DEST (elt)) != FIRST_STACK_REG + i)
        return false;

      elt = XVECEXP (op, 0, i+9);

      if (GET_CODE (elt) != CLOBBER
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != DImode
	  || REGNO (SET_DEST (elt)) != FIRST_MMX_REG + i)
	return false;
    }
  return true;
}

int
emms_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(emms_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
vzeroall_operation_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 1156 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  unsigned i, nregs = TARGET_64BIT ? 16 : 8;

  if ((unsigned) XVECLEN (op, 0) != 1 + nregs)
    return false;

  for (i = 0; i < nregs; i++)
    {
      rtx elt = XVECEXP (op, 0, i+1);

      if (GET_CODE (elt) != SET
	  || GET_CODE (SET_DEST (elt)) != REG
	  || GET_MODE (SET_DEST (elt)) != V8SImode
	  || REGNO (SET_DEST (elt)) != SSE_REGNO (i)
	  || SET_SRC (elt) != CONST0_RTX (V8SImode))
	return false;
    }
  return true;
}

int
vzeroall_operation (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
(vzeroall_operation_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avx_vpermilp_v8sf_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
#line 1183 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(avx_vpermilp_parallel (op, V8SFmode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avx_vpermilp_v4df_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
#line 1187 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(avx_vpermilp_parallel (op, V4DFmode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avx_vpermilp_v4sf_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
#line 1191 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(avx_vpermilp_parallel (op, V4SFmode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avx_vpermilp_v2df_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
#line 1195 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(avx_vpermilp_parallel (op, V2DFmode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avx_vperm2f128_v8sf_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
#line 1201 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(avx_vperm2f128_parallel (op, V8SFmode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avx_vperm2f128_v8si_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
#line 1205 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(avx_vperm2f128_parallel (op, V8SImode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

int
avx_vperm2f128_v4df_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == PARALLEL) && (
#line 1209 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
(avx_vperm2f128_parallel (op, V4DFmode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

static inline int
avx_vbroadcast_operand_1 (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
#line 1216 "../../gcc-4.6.2/gcc/config/i386/predicates.md"
{
  rtx elt = XVECEXP (op, 0, 0);
  int i, nelt = XVECLEN (op, 0);

  /* Don't bother checking there are the right number of operands,
     merely that they're all identical.  */
  for (i = 1; i < nelt; ++i)
    if (XVECEXP (op, 0, i) != elt)
      return false;
  return true;
}

int
avx_vbroadcast_operand (rtx op, enum machine_mode mode ATTRIBUTE_UNUSED)
{
  return (((GET_CODE (op) == PARALLEL) && (GET_CODE (XVECEXP (op, 0, 0)) == CONST_INT)) && (
(avx_vbroadcast_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

enum constraint_num
lookup_constraint (const char *str)
{
  switch (str[0])
    {
    case 'A':
      return CONSTRAINT_A;
    case 'C':
      return CONSTRAINT_C;
    case 'D':
      return CONSTRAINT_D;
    case 'G':
      return CONSTRAINT_G;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      return CONSTRAINT_M;
    case 'N':
      return CONSTRAINT_N;
    case 'O':
      return CONSTRAINT_O;
    case 'Q':
      return CONSTRAINT_Q;
    case 'R':
      return CONSTRAINT_R;
    case 'S':
      return CONSTRAINT_S;
    case 'U':
      return CONSTRAINT_U;
    case 'Y':
      if (!strncmp (str, "Y2", 2))
        return CONSTRAINT_Y2;
      if (!strncmp (str, "Yi", 2))
        return CONSTRAINT_Yi;
      if (!strncmp (str, "Ym", 2))
        return CONSTRAINT_Ym;
      if (!strncmp (str, "Yz", 2))
        return CONSTRAINT_Yz;
      break;
    case 'Z':
      return CONSTRAINT_Z;
    case 'a':
      return CONSTRAINT_a;
    case 'b':
      return CONSTRAINT_b;
    case 'c':
      return CONSTRAINT_c;
    case 'd':
      return CONSTRAINT_d;
    case 'e':
      return CONSTRAINT_e;
    case 'f':
      return CONSTRAINT_f;
    case 'l':
      return CONSTRAINT_l;
    case 'q':
      return CONSTRAINT_q;
    case 't':
      return CONSTRAINT_t;
    case 'u':
      return CONSTRAINT_u;
    case 'x':
      return CONSTRAINT_x;
    case 'y':
      return CONSTRAINT_y;
    case 'z':
      return CONSTRAINT_z;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

enum reg_class
regclass_for_constraint (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_R: return LEGACY_REGS;
    case CONSTRAINT_q: return TARGET_64BIT ? GENERAL_REGS : Q_REGS;
    case CONSTRAINT_Q: return Q_REGS;
    case CONSTRAINT_l: return INDEX_REGS;
    case CONSTRAINT_a: return AREG;
    case CONSTRAINT_b: return BREG;
    case CONSTRAINT_c: return CREG;
    case CONSTRAINT_d: return DREG;
    case CONSTRAINT_S: return SIREG;
    case CONSTRAINT_D: return DIREG;
    case CONSTRAINT_A: return AD_REGS;
    case CONSTRAINT_U: return CLOBBERED_REGS;
    case CONSTRAINT_f: return TARGET_80387 || TARGET_FLOAT_RETURNS_IN_80387 ? FLOAT_REGS : NO_REGS;
    case CONSTRAINT_t: return TARGET_80387 || TARGET_FLOAT_RETURNS_IN_80387 ? FP_TOP_REG : NO_REGS;
    case CONSTRAINT_u: return TARGET_80387 || TARGET_FLOAT_RETURNS_IN_80387 ? FP_SECOND_REG : NO_REGS;
    case CONSTRAINT_y: return TARGET_MMX ? MMX_REGS : NO_REGS;
    case CONSTRAINT_x: return TARGET_SSE ? SSE_REGS : NO_REGS;
    case CONSTRAINT_Yz: return TARGET_SSE ? SSE_FIRST_REG : NO_REGS;
    case CONSTRAINT_Y2: return TARGET_SSE2 ? SSE_REGS : NO_REGS;
    case CONSTRAINT_Yi: return TARGET_SSE2 && TARGET_INTER_UNIT_MOVES ? SSE_REGS : NO_REGS;
    case CONSTRAINT_Ym: return TARGET_MMX && TARGET_INTER_UNIT_MOVES ? MMX_REGS : NO_REGS;
    default: break;
    }
  return NO_REGS;
}

bool
constraint_satisfied_p (rtx op, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_z: return satisfies_constraint_z (op);
    case CONSTRAINT_I: return satisfies_constraint_I (op);
    case CONSTRAINT_J: return satisfies_constraint_J (op);
    case CONSTRAINT_K: return satisfies_constraint_K (op);
    case CONSTRAINT_L: return satisfies_constraint_L (op);
    case CONSTRAINT_M: return satisfies_constraint_M (op);
    case CONSTRAINT_N: return satisfies_constraint_N (op);
    case CONSTRAINT_O: return satisfies_constraint_O (op);
    case CONSTRAINT_G: return satisfies_constraint_G (op);
    case CONSTRAINT_C: return satisfies_constraint_C (op);
    case CONSTRAINT_e: return satisfies_constraint_e (op);
    case CONSTRAINT_Z: return satisfies_constraint_Z (op);
    default: break;
    }
  return false;
}

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I:
      return 
#line 116 "../../gcc-4.6.2/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 31));

    case CONSTRAINT_J:
      return 
#line 121 "../../gcc-4.6.2/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 63));

    case CONSTRAINT_K:
      return 
#line 126 "../../gcc-4.6.2/gcc/config/i386/constraints.md"
(IN_RANGE (ival, -128, 127));

    case CONSTRAINT_L:
      return 
#line 131 "../../gcc-4.6.2/gcc/config/i386/constraints.md"
(ival == 0xFF || ival == 0xFFFF);

    case CONSTRAINT_M:
      return 
#line 136 "../../gcc-4.6.2/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 3));

    case CONSTRAINT_N:
      return 
#line 142 "../../gcc-4.6.2/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 255));

    case CONSTRAINT_O:
      return 
#line 147 "../../gcc-4.6.2/gcc/config/i386/constraints.md"
(IN_RANGE (ival, 0, 127));

    default: break;
    }
  return false;
}

