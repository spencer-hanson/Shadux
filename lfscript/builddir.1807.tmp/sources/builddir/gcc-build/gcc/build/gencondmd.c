/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

  { "(ix86_target_stack_probe ()) && (Pmode == DImode)",
    __builtin_constant_p (
#line 16688 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 16688 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 11511 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AES",
    __builtin_constant_p 
#line 11511 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AES)
    ? (int) 
#line 11511 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AES)
    : -1 },
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V1DImode, operands)",
    __builtin_constant_p 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V1DImode, operands))
    ? (int) 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V1DImode, operands))
    : -1 },
#line 6439 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP ",
    __builtin_constant_p 
#line 6439 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP )
    ? (int) 
#line 6439 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP )
    : -1 },
#line 6129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 6129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 6129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 5127 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5127 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5127 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4640 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && reload_completed",
    __builtin_constant_p 
#line 4640 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    ? (int) 
#line 4640 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9082 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9082 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1769 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT || TARGET_SSE",
    __builtin_constant_p 
#line 1769 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_SSE)
    ? (int) 
#line 1769 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_SSE)
    : -1 },
#line 7453 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_8BIT_IDIV\n\
   && TARGET_QIMODE_MATH\n\
   && can_create_pseudo_p ()\n\
   && !optimize_insn_for_size_p ()",
    __builtin_constant_p 
#line 7453 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ())
    ? (int) 
#line 7453 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ())
    : -1 },
#line 10605 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 10605 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 10605 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    : -1 },
#line 720 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && ix86_binary_operator_ok (MULT, V4DFmode, operands)",
    __builtin_constant_p 
#line 720 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (MULT, V4DFmode, operands))
    ? (int) 
#line 720 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (MULT, V4DFmode, operands))
    : -1 },
  { "(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15933 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15933 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 411 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 411 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 411 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 4609 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4609 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 4609 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    : -1 },
  { "(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15933 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15933 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 15459 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 15459 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 15459 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 1698 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 1698 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    ? (int) 
#line 1698 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 6506 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6514 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6506 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6514 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 12898 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12898 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12898 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V8HImode, operands)",
    __builtin_constant_p 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V8HImode, operands))
    ? (int) 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V8HImode, operands))
    : -1 },
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (SFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 9583 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[1] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))",
    __builtin_constant_p 
#line 9583 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[1] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    ? (int) 
#line 9583 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[1] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    : -1 },
#line 6559 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 6559 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 6559 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    ? (int) 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    : -1 },
#line 1581 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1581 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1581 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 17898 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE || TARGET_3DNOW",
    __builtin_constant_p 
#line 17898 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_3DNOW)
    ? (int) 
#line 17898 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_3DNOW)
    : -1 },
#line 5574 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && TARGET_SSE\n\
   && reload_completed",
    __builtin_constant_p 
#line 5574 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    ? (int) 
#line 5574 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    : -1 },
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT)
    ? (int) 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT)
    : -1 },
#line 12898 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12898 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12898 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 14793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && ((SImode != DImode) || TARGET_64BIT)\n\
   && !flag_trapping_math && !flag_rounding_math",
    __builtin_constant_p 
#line 14793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    ? (int) 
#line 14793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    : -1 },
#line 1419 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 1419 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 1419 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
  { "(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 16200 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 16200 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 164 "../../gcc-4.6.2/gcc/config/i386/sync.md"
  { "!TARGET_64BIT && TARGET_CMPXCHG8B && flag_pic",
    __builtin_constant_p 
#line 164 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && flag_pic)
    ? (int) 
#line 164 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && flag_pic)
    : -1 },
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V2DImode, operands)",
    __builtin_constant_p 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V2DImode, operands))
    ? (int) 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V2DImode, operands))
    : -1 },
#line 9775 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 9775 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 9775 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 1730 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX256_VEC_FLOAT_MODE_P (V8SFmode)",
    __builtin_constant_p 
#line 1730 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX256_VEC_FLOAT_MODE_P (V8SFmode))
    ? (int) 
#line 1730 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX256_VEC_FLOAT_MODE_P (V8SFmode))
    : -1 },
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (DFmode, DImode)",
    __builtin_constant_p 
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, DImode))
    ? (int) 
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, DImode))
    : -1 },
#line 4319 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4319 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    ? (int) 
#line 4319 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    : -1 },
#line 16402 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 16402 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 16402 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 2911 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)\n\
           && optimize_function_for_size_p (cfun)\n\
	   && standard_80387_constant_p (operands[1]) > 0)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], DFmode))",
    __builtin_constant_p 
#line 2911 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)
           && optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]) > 0)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    ? (int) 
#line 2911 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)
           && optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]) > 0)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    : -1 },
  { "(TARGET_VZEROUPPER && !TARGET_64BIT && !SIBLING_CALL_P (insn)) && ( reload_completed)",
    __builtin_constant_p (
#line 17734 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && !SIBLING_CALL_P (insn)) && 
#line 17736 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 17734 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && !SIBLING_CALL_P (insn)) && 
#line 17736 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4756 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4756 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 5153 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5153 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5153 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 9037 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, HImode, operands)",
    __builtin_constant_p 
#line 9037 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    ? (int) 
#line 9037 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    : -1 },
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    ? (int) 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    : -1 },
#line 10014 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_2\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 10014 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && can_create_pseudo_p ())
    ? (int) 
#line 10014 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && can_create_pseudo_p ())
    : -1 },
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    ? (int) 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    : -1 },
#line 6129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 6129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 6129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 15601 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15601 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 15601 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 13083 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (DFmode)\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13083 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13083 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 6751 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6751 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6751 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands))
    ? (int) 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands))
    : -1 },
  { "(TARGET_LWP) && (Pmode == SImode)",
    __builtin_constant_p (
#line 18276 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 18276 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 3744 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_ZERO_EXTEND_WITH_AND\n\
   || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 3744 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND
   || optimize_function_for_size_p (cfun))
    ? (int) 
#line 3744 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND
   || optimize_function_for_size_p (cfun))
    : -1 },
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10862 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10862 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V16QImode, operands))
    ? (int) 
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V16QImode, operands))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math) && (TARGET_64BIT)",
    __builtin_constant_p 
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math) && (TARGET_64BIT))
    ? (int) 
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math) && (TARGET_64BIT))
    : -1 },
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (XOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    ? (int) 
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    : -1 },
#line 5627 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_AVX\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5627 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_AVX
   && can_create_pseudo_p ())
    ? (int) 
#line 5627 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_AVX
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_SSE) && ( reload_completed)",
    __builtin_constant_p (
#line 4360 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 4362 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 4360 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 4362 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 74 "../../gcc-4.6.2/gcc/config/i386/sync.md"
  { "TARGET_CMPXCHG",
    __builtin_constant_p 
#line 74 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    ? (int) 
#line 74 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    : -1 },
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
#line 17776 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)\n\
   && ix86_cmodel != CM_LARGE && ix86_cmodel != CM_LARGE_PIC",
    __builtin_constant_p 
#line 17776 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)
   && ix86_cmodel != CM_LARGE && ix86_cmodel != CM_LARGE_PIC)
    ? (int) 
#line 17776 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)
   && ix86_cmodel != CM_LARGE && ix86_cmodel != CM_LARGE_PIC)
    : -1 },
#line 17052 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && true_regnum (operands[2]) != AX_REG\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 17052 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 17052 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 7220 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && X87_ENABLE_ARITH (SFmode))\n\
    || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 7220 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 7220 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 7195 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 7195 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 7195 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 7742 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "!TARGET_64BIT && TARGET_SSE",
    __builtin_constant_p 
#line 7742 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE)
    ? (int) 
#line 7742 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE)
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
(((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
(((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (IOR, V8HImode, operands)",
    __builtin_constant_p 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V8HImode, operands))
    ? (int) 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V8HImode, operands))
    : -1 },
#line 1605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "!TARGET_XOP \n\
  && (SSE_FLOAT_MODE_P (DFmode) || SSE_VEC_FLOAT_MODE_P (DFmode))",
    __builtin_constant_p 
#line 1605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_XOP 
  && (SSE_FLOAT_MODE_P (DFmode) || SSE_VEC_FLOAT_MODE_P (DFmode)))
    ? (int) 
#line 1605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_XOP 
  && (SSE_FLOAT_MODE_P (DFmode) || SSE_VEC_FLOAT_MODE_P (DFmode)))
    : -1 },
  { "(TARGET_SSE) && ( reload_completed\n\
   && (TARGET_INTER_UNIT_MOVES\n\
       || MEM_P (operands [0])\n\
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))",
    __builtin_constant_p (
#line 7414 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 7416 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0])))))
    ? (int) (
#line 7414 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 7416 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0])))))
    : -1 },
#line 3620 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || reload_completed",
    __builtin_constant_p 
#line 3620 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || reload_completed)
    ? (int) 
#line 3620 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || reload_completed)
    : -1 },
  { "(TARGET_PREFETCH_SSE) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17922 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17922 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 1102 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 1102 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 1102 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 16402 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 16402 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 16402 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 16767 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && flag_pic",
    __builtin_constant_p 
#line 16767 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    ? (int) 
#line 16767 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    : -1 },
#line 5546 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && TARGET_SSE",
    __builtin_constant_p 
#line 5546 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE)
    ? (int) 
#line 5546 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE)
    : -1 },
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (IOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    ? (int) 
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    : -1 },
#line 15369 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math)",
    __builtin_constant_p 
#line 15369 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    ? (int) 
#line 15369 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    : -1 },
#line 18363 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_RDRND",
    __builtin_constant_p 
#line 18363 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_RDRND)
    ? (int) 
#line 18363 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_RDRND)
    : -1 },
#line 749 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode)",
    __builtin_constant_p 
#line 749 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
    ? (int) 
#line 749 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
    : -1 },
#line 8360 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 8360 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 8360 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
#line 5385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && ix86_binary_operator_ok (MINUS, V4DFmode, operands)",
    __builtin_constant_p 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (MINUS, V4DFmode, operands))
    ? (int) 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (MINUS, V4DFmode, operands))
    : -1 },
#line 3700 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))",
    __builtin_constant_p 
#line 3700 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0])))
    ? (int) 
#line 3700 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0])))
    : -1 },
#line 6720 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 6720 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 6720 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 448 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 448 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 448 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 17438 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)",
    __builtin_constant_p 
#line 17438 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    ? (int) 
#line 17438 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9))
    : -1 },
#line 16885 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && (GET_MODE (operands[0]) == HImode\n\
       || (GET_MODE (operands[0]) == QImode\n\
	   && (TARGET_PROMOTE_QImode\n\
	       || optimize_insn_for_size_p ())))",
    __builtin_constant_p 
#line 16885 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ()))))
    ? (int) 
#line 16885 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ()))))
    : -1 },
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    ? (int) 
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    : -1 },
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V4SImode, operands)",
    __builtin_constant_p 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V4SImode, operands))
    ? (int) 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V4SImode, operands))
    : -1 },
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 8296 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && !TARGET_64BIT",
    __builtin_constant_p 
#line 8296 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && !TARGET_64BIT)
    ? (int) 
#line 8296 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && !TARGET_64BIT)
    : -1 },
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (XFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 8407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 8407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 8407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 11175 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 11175 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 11175 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 8091 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && reload_completed",
    __builtin_constant_p 
#line 8091 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed)
    ? (int) 
#line 8091 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed)
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9269 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9269 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    : -1 },
#line 2187 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_FMA",
    __builtin_constant_p 
#line 2187 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_FMA)
    ? (int) 
#line 2187 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_FMA)
    : -1 },
  { "(IN_RANGE (INTVAL (operands[2]), 1, 3)\n\
   /* Validate MODE for lea.  */\n\
   && ((!TARGET_PARTIAL_REG_STALL\n\
	&& (GET_MODE (operands[0]) == QImode\n\
	    || GET_MODE (operands[0]) == HImode))\n\
       || GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   && (rtx_equal_p (operands[0], operands[3])\n\
       || peep2_reg_dead_p (2, operands[0]))\n\
   /* We reorder load and the shift.  */\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17520 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17520 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((DImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 10109 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 10109 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 10109 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
  { "(INTVAL (operands[2]) == 3\n\
   || INTVAL (operands[2]) == 5\n\
   || INTVAL (operands[2]) == 9) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17424 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 3
   || INTVAL (operands[2]) == 5
   || INTVAL (operands[2]) == 9) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17424 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 3
   || INTVAL (operands[2]) == 5
   || INTVAL (operands[2]) == 9) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 17755 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_VZEROUPPER && !TARGET_64BIT && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 17755 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && SIBLING_CALL_P (insn))
    ? (int) 
#line 17755 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && SIBLING_CALL_P (insn))
    : -1 },
#line 9069 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 9069 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 9069 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (SFmode, SImode)",
    __builtin_constant_p 
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, SImode))
    ? (int) 
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, SImode))
    : -1 },
#line 1605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "!TARGET_XOP \n\
  && (SSE_FLOAT_MODE_P (V2DFmode) || SSE_VEC_FLOAT_MODE_P (V2DFmode))",
    __builtin_constant_p 
#line 1605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_XOP 
  && (SSE_FLOAT_MODE_P (V2DFmode) || SSE_VEC_FLOAT_MODE_P (V2DFmode)))
    ? (int) 
#line 1605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_XOP 
  && (SSE_FLOAT_MODE_P (V2DFmode) || SSE_VEC_FLOAT_MODE_P (V2DFmode)))
    : -1 },
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V2DFmode)\n\
       || register_operand (operands[1], V2DFmode))",
    __builtin_constant_p 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode)))
    ? (int) 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode)))
    : -1 },
#line 12968 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (SFmode)\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12968 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (SFmode)
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12968 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (SFmode)
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 16383 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 16383 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 16383 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 6508 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP",
    __builtin_constant_p 
#line 6508 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP)
    ? (int) 
#line 6508 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP)
    : -1 },
#line 5336 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5336 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 5336 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    : -1 },
#line 12937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 8760 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8760 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8760 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 6474 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1",
    __builtin_constant_p 
#line 6474 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1)
    ? (int) 
#line 6474 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1)
    : -1 },
  { "(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && ( reload_completed)",
    __builtin_constant_p (
#line 16383 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 16385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 16383 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL) && 
#line 16385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V4HImode, operands))
    ? (int) 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V4HImode, operands))
    : -1 },
  { "(TARGET_VZEROUPPER && TARGET_64BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 17665 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT) && 
#line 17667 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 17665 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT) && 
#line 17667 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 16369 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 16369 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 16369 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 8463 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 8463 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 8463 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 14793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && ((SImode != DImode) || TARGET_64BIT)\n\
   && !flag_trapping_math && !flag_rounding_math",
    __builtin_constant_p 
#line 14793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    ? (int) 
#line 14793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    : -1 },
#line 5585 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 5585 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 5585 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 4630 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4630 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4630 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 10558 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !TARGET_USE_BT",
    __builtin_constant_p 
#line 10558 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    ? (int) 
#line 10558 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    : -1 },
#line 8532 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 8532 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 8532 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    : -1 },
#line 8156 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8156 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8156 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 4277 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 4277 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 4277 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    : -1 },
#line 14787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && ((SImode != DImode) || TARGET_64BIT)",
    __builtin_constant_p 
#line 14787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT))
    ? (int) 
#line 14787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT))
    : -1 },
#line 6777 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6777 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6777 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 5428 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands)",
    __builtin_constant_p 
#line 5428 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    ? (int) 
#line 5428 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    : -1 },
#line 5593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
	&& TARGET_SSE)\n\
       || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 5593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 5593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (SFmode, DImode)",
    __builtin_constant_p 
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, DImode))
    ? (int) 
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, DImode))
    : -1 },
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (DFmode, SImode)",
    __builtin_constant_p 
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, SImode))
    ? (int) 
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, SImode))
    : -1 },
#line 6208 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCZmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6208 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6208 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (IOR, V4SImode, operands)",
    __builtin_constant_p 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V4SImode, operands))
    ? (int) 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V4SImode, operands))
    : -1 },
#line 749 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode)",
    __builtin_constant_p 
#line 749 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
    ? (int) 
#line 749 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
    : -1 },
  { "((ix86_binary_operator_ok (ROTATERT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && ( 1)",
    __builtin_constant_p (
((ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && 
#line 10218 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
((ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && 
#line 10218 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 336 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)",
    __builtin_constant_p 
#line 336 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    ? (int) 
#line 336 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    : -1 },
#line 12349 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)",
    __builtin_constant_p 
#line 12349 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    ? (int) 
#line 12349 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    : -1 },
#line 4964 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && reload_completed",
    __builtin_constant_p 
#line 4964 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    ? (int) 
#line 4964 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    : -1 },
#line 13318 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 13318 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[1])))
    ? (int) 
#line 13318 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[1])))
    : -1 },
  { "(TARGET_VZEROUPPER) && ( reload_completed)",
    __builtin_constant_p (
#line 11434 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER) && 
#line 11436 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 11434 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER) && 
#line 11436 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (XOR, V16QImode, operands)",
    __builtin_constant_p 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V16QImode, operands))
    ? (int) 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V16QImode, operands))
    : -1 },
#line 14646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math && !flag_rounding_math",
    __builtin_constant_p 
#line 14646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math && !flag_rounding_math)
    ? (int) 
#line 14646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math && !flag_rounding_math)
    : -1 },
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (IOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    ? (int) 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    : -1 },
#line 4713 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4713 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4713 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (XFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 358 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 358 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 358 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 10620 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 10620 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 10620 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    : -1 },
#line 6735 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6735 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6735 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 6763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 18050 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SSE4_2 || TARGET_CRC32",
    __builtin_constant_p 
#line 18050 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE4_2 || TARGET_CRC32)
    ? (int) 
#line 18050 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE4_2 || TARGET_CRC32)
    : -1 },
#line 4646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SHORTEN_X87_SSE\n\
   && !(TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())\n\
   && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 4646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SHORTEN_X87_SSE
   && !(TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())
   && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 4646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SHORTEN_X87_SSE
   && !(TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())
   && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 13047 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13047 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13047 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 8937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (reload_completed\n\
       || !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 8937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 8937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 4975 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
        || TARGET_MIX_SSE_I387)\n\
    && reload_completed",
    __builtin_constant_p 
#line 4975 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    ? (int) 
#line 4975 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    : -1 },
#line 4205 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4205 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 4205 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 4547 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4547 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4547 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 6312 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 6312 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    ? (int) 
#line 6312 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    : -1 },
#line 49 "../../gcc-4.6.2/gcc/config/i386/sync.md"
  { "!(TARGET_64BIT || TARGET_SSE2)",
    __builtin_constant_p 
#line 49 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(!(TARGET_64BIT || TARGET_SSE2))
    ? (int) 
#line 49 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(!(TARGET_64BIT || TARGET_SSE2))
    : -1 },
  { "(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 7087 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 827 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 7087 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 827 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 2714 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && !ANY_FP_REG_P (operands[1])",
    __builtin_constant_p 
#line 2714 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && !ANY_FP_REG_P (operands[1]))
    ? (int) 
#line 2714 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && !ANY_FP_REG_P (operands[1]))
    : -1 },
#line 6201 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 6201 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    ? (int) 
#line 6201 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    : -1 },
#line 4128 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4128 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4128 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
  { "(ix86_unary_operator_ok (NEG, DImode, operands)) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 8680 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)) && 
#line 826 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 8680 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)) && 
#line 826 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 7644 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
    && ix86_match_ccmode (insn,\n\
 			 CONST_INT_P (operands[1])\n\
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 7644 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
    && ix86_match_ccmode (insn,
 			 CONST_INT_P (operands[1])
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 7644 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
    && ix86_match_ccmode (insn,
 			 CONST_INT_P (operands[1])
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 2866 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_function_for_size_p (cfun)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || standard_80387_constant_p (operands[1]) > 0\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], XFmode))",
    __builtin_constant_p 
#line 2866 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || standard_80387_constant_p (operands[1]) > 0
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    ? (int) 
#line 2866 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || standard_80387_constant_p (operands[1]) > 0
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    : -1 },
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (AND, V4SFmode, operands)",
    __builtin_constant_p 
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (AND, V4SFmode, operands))
    ? (int) 
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (AND, V4SFmode, operands))
    : -1 },
#line 2391 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 2391 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 2391 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 4528 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (!MEM_P (operands[1]) || rtx_equal_p (operands[1], operands[2]))",
    __builtin_constant_p 
#line 4528 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (!MEM_P (operands[1]) || rtx_equal_p (operands[1], operands[2])))
    ? (int) 
#line 4528 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (!MEM_P (operands[1]) || rtx_equal_p (operands[1], operands[2])))
    : -1 },
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (IOR, V2DImode, operands)",
    __builtin_constant_p 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V2DImode, operands))
    ? (int) 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V2DImode, operands))
    : -1 },
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && reload_completed\n\
   && FP_REG_P (operands[0])",
    __builtin_constant_p 
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, DImode)
   && reload_completed
   && FP_REG_P (operands[0]))
    ? (int) 
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, DImode)
   && reload_completed
   && FP_REG_P (operands[0]))
    : -1 },
#line 5100 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5100 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5100 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 17734 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_VZEROUPPER && !TARGET_64BIT && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 17734 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && !SIBLING_CALL_P (insn))
    ? (int) 
#line 17734 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && !SIBLING_CALL_P (insn))
    : -1 },
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (XFmode, DImode)",
    __builtin_constant_p 
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, DImode))
    ? (int) 
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, DImode))
    : -1 },
#line 404 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2SFmode, operands)",
    __builtin_constant_p 
#line 404 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    ? (int) 
#line 404 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    : -1 },
#line 1632 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed\n\
   && !SSE_REG_P (operands[1])",
    __builtin_constant_p 
#line 1632 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[1]))
    ? (int) 
#line 1632 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[1]))
    : -1 },
#line 7959 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 7959 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 7959 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V16QImode, operands)",
    __builtin_constant_p 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V16QImode, operands))
    ? (int) 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V16QImode, operands))
    : -1 },
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (DFmode, SImode)\n\
   && reload_completed\n\
   && FP_REG_P (operands[0])",
    __builtin_constant_p 
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, SImode)
   && reload_completed
   && FP_REG_P (operands[0]))
    ? (int) 
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, SImode)
   && reload_completed
   && FP_REG_P (operands[0]))
    : -1 },
#line 2112 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))\n\
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 2112 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    ? (int) 
#line 2112 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    : -1 },
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))
    ? (int) 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 12937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 7763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   /* Ensure that resulting mask is zero or sign extended operand.  */\n\
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64\n\
	   && INTVAL (operands[1]) > 32))\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || GET_MODE (operands[0]) == DImode\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 7763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 7763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 5385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 5527 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)\n\
   && reload_completed\n\
   && FP_REG_P (operands[0])",
    __builtin_constant_p 
#line 5527 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed
   && FP_REG_P (operands[0]))
    ? (int) 
#line 5527 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed
   && FP_REG_P (operands[0]))
    : -1 },
#line 5312 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5312 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5312 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
  { "(TARGET_XADD) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 178 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 178 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((DImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1419 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && 
#line 1424 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1419 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && 
#line 1424 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (SFmode, SImode)\n\
   && reload_completed\n\
   && FP_REG_P (operands[0])",
    __builtin_constant_p 
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, SImode)
   && reload_completed
   && FP_REG_P (operands[0]))
    ? (int) 
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, SImode)
   && reload_completed
   && FP_REG_P (operands[0]))
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    : -1 },
#line 3424 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || (!TARGET_SSE_MATH && optimize_function_for_size_p (cfun)\n\
	   && standard_80387_constant_p (operands[1]) > 0)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], SFmode))",
    __builtin_constant_p 
#line 3424 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!TARGET_SSE_MATH && optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]) > 0)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode)))
    ? (int) 
#line 3424 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!TARGET_SSE_MATH && optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]) > 0)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], SFmode)))
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V32QImode)\n\
       || register_operand (operands[1], V32QImode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode)))
    : -1 },
#line 749 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode)",
    __builtin_constant_p 
#line 749 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
    ? (int) 
#line 749 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
    : -1 },
#line 16987 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((TARGET_NOT_UNPAIRABLE\n\
	&& (!MEM_P (operands[0])\n\
	    || !memory_displacement_operand (operands[0], HImode)))\n\
       || (TARGET_NOT_VECTORMODE\n\
	   && long_memory_operand (operands[0], HImode)))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16987 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], HImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16987 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], HImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 3408 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && ! (ANY_FP_REG_P (operands[0]) ||\n\
	 (GET_CODE (operands[0]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))\n\
   && ! (ANY_FP_REG_P (operands[1]) ||\n\
	 (GET_CODE (operands[1]) == SUBREG\n\
	  && ANY_FP_REG_P (SUBREG_REG (operands[1]))))",
    __builtin_constant_p 
#line 3408 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ! (ANY_FP_REG_P (operands[0]) ||
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) ||
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    ? (int) 
#line 3408 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ! (ANY_FP_REG_P (operands[0]) ||
	 (GET_CODE (operands[0]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (ANY_FP_REG_P (operands[1]) ||
	 (GET_CODE (operands[1]) == SUBREG
	  && ANY_FP_REG_P (SUBREG_REG (operands[1])))))
    : -1 },
  { "(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 4306 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 4308 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 4306 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 4308 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 1064 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands)",
    __builtin_constant_p 
#line 1064 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    ? (int) 
#line 1064 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    : -1 },
#line 2331 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_check_movabs (insn, 0)",
    __builtin_constant_p 
#line 2331 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0))
    ? (int) 
#line 2331 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 0))
    : -1 },
#line 8328 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(~INTVAL (operands[2]) & ~255)\n\
    && !(INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8328 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8328 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 1841 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 1841 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 1841 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)) && ( 1)",
    __builtin_constant_p ((
#line 10862 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10864 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) ((
#line 10862 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10864 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 9291 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 9291 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 9291 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 720 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (MULT, V4SFmode, operands)",
    __builtin_constant_p 
#line 720 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    ? (int) 
#line 720 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    : -1 },
#line 4657 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3])",
    __builtin_constant_p 
#line 4657 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3]))
    ? (int) 
#line 4657 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3]))
    : -1 },
  { "((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 9858 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && 
#line 818 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 9858 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && 
#line 818 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    ? (int) 
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    : -1 },
#line 17469 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()\n\
   && !satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 17469 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    ? (int) 
#line 17469 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    : -1 },
#line 400 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)",
    __builtin_constant_p 
#line 400 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode))
    ? (int) 
#line 400 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode))
    : -1 },
  { "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17347 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17347 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 13213 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13213 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13213 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 6892 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6892 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6892 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V4DImode)\n\
       || register_operand (operands[1], V4DImode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode)))
    : -1 },
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 3078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && optimize_function_for_speed_p (cfun)\n\
   && TARGET_INTEGER_DFMODE_MOVES\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], DFmode))",
    __builtin_constant_p 
#line 3078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && optimize_function_for_speed_p (cfun)
   && TARGET_INTEGER_DFMODE_MOVES
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    ? (int) 
#line 3078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && optimize_function_for_speed_p (cfun)
   && TARGET_INTEGER_DFMODE_MOVES
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], DFmode)))
    : -1 },
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands)",
    __builtin_constant_p 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands))
    ? (int) 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V16QImode, operands))
    : -1 },
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands)",
    __builtin_constant_p 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands))
    ? (int) 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V2DImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATE, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    : -1 },
#line 13249 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13249 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13249 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, HImode, operands)",
    __builtin_constant_p 
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    ? (int) 
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    : -1 },
#line 10896 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 10896 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 10896 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
#line 10367 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 10367 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 10367 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun)))
    : -1 },
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    : -1 },
  { "(TARGET_VZEROUPPER && !TARGET_64BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 17644 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT) && 
#line 17646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 17644 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT) && 
#line 17646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10896 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10896 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    : -1 },
#line 1087 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 1087 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 1087 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 15491 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 15491 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && can_create_pseudo_p ())
    ? (int) 
#line 15491 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && ( reload_completed)",
    __builtin_constant_p (
#line 3732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 3734 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 3732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 3734 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 740 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (MULT, V2DFmode, operands)",
    __builtin_constant_p 
#line 740 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    ? (int) 
#line 740 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    : -1 },
#line 1064 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands)",
    __builtin_constant_p 
#line 1064 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    ? (int) 
#line 1064 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    : -1 },
#line 8937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (reload_completed\n\
       || !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 8937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 8937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 16593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])",
    __builtin_constant_p 
#line 16593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    ? (int) 
#line 16593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    : -1 },
#line 8217 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE || TARGET_3DNOW_A",
    __builtin_constant_p 
#line 8217 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE || TARGET_3DNOW_A)
    ? (int) 
#line 8217 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE || TARGET_3DNOW_A)
    : -1 },
#line 5113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 17200 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17200 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17200 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && ix86_binary_operator_ok (IOR, V8SFmode, operands)",
    __builtin_constant_p 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (IOR, V8SFmode, operands))
    ? (int) 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (IOR, V8SFmode, operands))
    : -1 },
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V8QImode, operands)",
    __builtin_constant_p 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V8QImode, operands))
    ? (int) 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V8QImode, operands))
    : -1 },
#line 10214 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 10214 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 10214 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
#line 5100 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5100 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5100 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 8171 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8171 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8171 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 674 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 674 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    ? (int) 
#line 674 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    : -1 },
  { "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17332 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17332 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATERT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (ROTATERT, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (ROTATERT, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 10972 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 10972 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 10972 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
  { "(ix86_unary_operator_ok (NEG, TImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8680 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, TImode, operands)) && 
#line 827 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8680 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, TImode, operands)) && 
#line 827 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17332 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17332 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 13124 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13124 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13124 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(AVX_VEC_FLOAT_MODE_P (V4SFmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 603 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)) && 
#line 605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 603 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)) && 
#line 605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 5407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 15964 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])",
    __builtin_constant_p 
#line 15964 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG]))
    ? (int) 
#line 15964 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG]))
    : -1 },
#line 6099 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed \n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 6099 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed 
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 6099 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed 
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands))
    ? (int) 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands))
    : -1 },
#line 1332 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && TARGET_SAHF && !TARGET_CMOVE",
    __builtin_constant_p 
#line 1332 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && TARGET_SAHF && !TARGET_CMOVE)
    ? (int) 
#line 1332 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && TARGET_SAHF && !TARGET_CMOVE)
    : -1 },
#line 25 "../../gcc-4.6.2/gcc/config/i386/sync.md"
  { "!TARGET_64BIT && TARGET_CMPXCHG8B && !flag_pic",
    __builtin_constant_p 
#line 25 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && !flag_pic)
    ? (int) 
#line 25 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(!TARGET_64BIT && TARGET_CMPXCHG8B && !flag_pic)
    : -1 },
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V4SImode, operands)",
    __builtin_constant_p 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V4SImode, operands))
    ? (int) 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V4SImode, operands))
    : -1 },
#line 10342 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_REG_STALL\n\
    || (operands[1] == const1_rtx\n\
	&& TARGET_SHIFT1))",
    __builtin_constant_p 
#line 10342 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_REG_STALL
    || (operands[1] == const1_rtx
	&& TARGET_SHIFT1)))
    ? (int) 
#line 10342 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_REG_STALL
    || (operands[1] == const1_rtx
	&& TARGET_SHIFT1)))
    : -1 },
#line 8132 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)\n\
   && ix86_match_ccmode (insn,\n\
			 CONST_INT_P (operands[2])\n\
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 8132 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 CONST_INT_P (operands[2])
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 8132 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 CONST_INT_P (operands[2])
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 6735 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6735 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6735 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands)",
    __builtin_constant_p 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    ? (int) 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    : -1 },
#line 4454 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_vec_interleave_v2df_operator_ok (operands, 1)",
    __builtin_constant_p 
#line 4454 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_vec_interleave_v2df_operator_ok (operands, 1))
    ? (int) 
#line 4454 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_vec_interleave_v2df_operator_ok (operands, 1))
    : -1 },
  { "(IN_RANGE (INTVAL (operands[2]), 1, 3)\n\
   /* Validate MODE for lea.  */\n\
   && ((!TARGET_PARTIAL_REG_STALL\n\
	&& (GET_MODE (operands[0]) == QImode\n\
	    || GET_MODE (operands[0]) == HImode))\n\
       || GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   && (rtx_equal_p (operands[0], operands[3])\n\
       || peep2_reg_dead_p (2, operands[0]))\n\
   /* We reorder load and the shift.  */\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17520 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17520 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 8787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V16HImode, operands)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V16HImode, operands))
    ? (int) 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V16HImode, operands))
    : -1 },
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
  { "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (DFmode == TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 8991 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (DFmode == TFmode))) && 
#line 8994 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 8991 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (DFmode == TFmode))) && 
#line 8994 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 5920 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 5920 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 5920 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 720 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (MULT, V2DFmode, operands)",
    __builtin_constant_p 
#line 720 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    ? (int) 
#line 720 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MULT, V2DFmode, operands))
    : -1 },
  { "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17307 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17307 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT && TARGET_CMPXCHG16B)",
    __builtin_constant_p (
#line 74 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 23 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B))
    ? (int) (
#line 74 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 23 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B))
    : -1 },
#line 2895 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && ! (FP_REG_P (operands[0]) ||\n\
	 (GET_CODE (operands[0]) == SUBREG\n\
	  && FP_REG_P (SUBREG_REG (operands[0]))))\n\
   && ! (FP_REG_P (operands[1]) ||\n\
	 (GET_CODE (operands[1]) == SUBREG\n\
	  && FP_REG_P (SUBREG_REG (operands[1]))))",
    __builtin_constant_p 
#line 2895 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ! (FP_REG_P (operands[0]) ||
	 (GET_CODE (operands[0]) == SUBREG
	  && FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (FP_REG_P (operands[1]) ||
	 (GET_CODE (operands[1]) == SUBREG
	  && FP_REG_P (SUBREG_REG (operands[1])))))
    ? (int) 
#line 2895 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && ! (FP_REG_P (operands[0]) ||
	 (GET_CODE (operands[0]) == SUBREG
	  && FP_REG_P (SUBREG_REG (operands[0]))))
   && ! (FP_REG_P (operands[1]) ||
	 (GET_CODE (operands[1]) == SUBREG
	  && FP_REG_P (SUBREG_REG (operands[1])))))
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V2DFmode)\n\
       || register_operand (operands[1], V2DFmode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode)))
    : -1 },
#line 5113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 15308 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math",
    __builtin_constant_p 
#line 15308 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    ? (int) 
#line 15308 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    : -1 },
#line 16696 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_target_stack_probe ()",
    __builtin_constant_p 
#line 16696 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_target_stack_probe ())
    ? (int) 
#line 16696 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_target_stack_probe ())
    : -1 },
#line 14793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && ((DImode != DImode) || TARGET_64BIT)\n\
   && !flag_trapping_math && !flag_rounding_math",
    __builtin_constant_p 
#line 14793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    ? (int) 
#line 14793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    : -1 },
#line 5486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    : -1 },
#line 9423 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 9423 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 9423 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 5372 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5372 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5372 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 2345 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_check_movabs (insn, 1)",
    __builtin_constant_p 
#line 2345 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1))
    ? (int) 
#line 2345 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_check_movabs (insn, 1))
    : -1 },
#line 2263 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2263 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2263 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(TARGET_LWP) && (Pmode == DImode)",
    __builtin_constant_p (
#line 18276 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 18276 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V4HImode, operands)",
    __builtin_constant_p 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V4HImode, operands))
    ? (int) 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V4HImode, operands))
    : -1 },
#line 8360 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 8360 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 8360 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
#line 4699 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4699 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4699 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 4699 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4699 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4699 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 5113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 15575 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387",
    __builtin_constant_p 
#line 15575 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    ? (int) 
#line 15575 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    : -1 },
#line 2836 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_function_for_speed_p (cfun)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || memory_operand (operands[0], XFmode))",
    __builtin_constant_p 
#line 2836 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    ? (int) 
#line 2836 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun)
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || memory_operand (operands[0], XFmode)))
    : -1 },
#line 9469 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 9469 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 9469 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 6697 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, TFmode, operands)",
    __builtin_constant_p 
#line 6697 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, TFmode, operands))
    ? (int) 
#line 6697 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, TFmode, operands))
    : -1 },
#line 5593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
	&& TARGET_SSE)\n\
       || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 5593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 5593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 5336 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5336 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 5336 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    : -1 },
#line 5407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 9195 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 9195 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 9195 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 5060 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && reload_completed",
    __builtin_constant_p 
#line 5060 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    ? (int) 
#line 5060 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    : -1 },
#line 1403 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 1403 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 1403 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 8948 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 8948 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    ? (int) 
#line 8948 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    : -1 },
  { "(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    : -1 },
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (XOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    ? (int) 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    : -1 },
#line 377 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)",
    __builtin_constant_p 
#line 377 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    ? (int) 
#line 377 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    : -1 },
#line 17165 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p () && ! TARGET_READ_MODIFY_WRITE\n\
   /* Do not split stack checking probes.  */\n\
   && GET_CODE (operands[3]) != IOR && operands[1] != const0_rtx",
    __builtin_constant_p 
#line 17165 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ! TARGET_READ_MODIFY_WRITE
   /* Do not split stack checking probes.  */
   && GET_CODE (operands[3]) != IOR && operands[1] != const0_rtx)
    ? (int) 
#line 17165 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ! TARGET_READ_MODIFY_WRITE
   /* Do not split stack checking probes.  */
   && GET_CODE (operands[3]) != IOR && operands[1] != const0_rtx)
    : -1 },
#line 7555 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "!TARGET_SSE2 && TARGET_SSE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7555 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7555 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(TARGET_MOVBE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12400 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12400 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 7616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 8980 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (DFmode == TFmode))",
    __builtin_constant_p 
#line 8980 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (DFmode == TFmode)))
    ? (int) 
#line 8980 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (DFmode == TFmode)))
    : -1 },
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 8371 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 8371 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 8371 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT || TARGET_CMPXCHG8B)",
    __builtin_constant_p (
#line 74 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 22 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_CMPXCHG8B))
    ? (int) (
#line 74 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 22 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_CMPXCHG8B))
    : -1 },
#line 8750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 8750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 8750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 9227 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_CMOVE",
    __builtin_constant_p 
#line 9227 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE)
    ? (int) 
#line 9227 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE)
    : -1 },
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands)",
    __builtin_constant_p 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    ? (int) 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    : -1 },
#line 15536 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && TARGET_C99_FUNCTIONS\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15536 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 15536 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 5336 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5336 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 5336 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    : -1 },
#line 804 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH",
    __builtin_constant_p 
#line 804 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    ? (int) 
#line 804 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    : -1 },
#line 4964 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && reload_completed",
    __builtin_constant_p 
#line 4964 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    ? (int) 
#line 4964 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    : -1 },
#line 9678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 9678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 9678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 4486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode))",
    __builtin_constant_p 
#line 4486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    ? (int) 
#line 4486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    : -1 },
#line 2631 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 2631 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun))
    ? (int) 
#line 2631 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun))
    : -1 },
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
#line 2669 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && !FP_REG_P (operands[1])",
    __builtin_constant_p 
#line 2669 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && !FP_REG_P (operands[1]))
    ? (int) 
#line 2669 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && !FP_REG_P (operands[1]))
    : -1 },
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (XOR, V2DImode, operands)",
    __builtin_constant_p 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V2DImode, operands))
    ? (int) 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V2DImode, operands))
    : -1 },
#line 4436 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 4436 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 4436 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    : -1 },
#line 5574 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && TARGET_SSE\n\
   && reload_completed",
    __builtin_constant_p 
#line 5574 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    ? (int) 
#line 5574 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    : -1 },
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, QImode, operands)",
    __builtin_constant_p 
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    ? (int) 
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    : -1 },
#line 3771 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))\n\
   && ANY_QI_REG_P (operands[0])\n\
   && (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]))\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 3771 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && (TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]))
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 3771 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && (TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
   && ANY_QI_REG_P (operands[0])
   && (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]))
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    : -1 },
#line 17665 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_VZEROUPPER && TARGET_64BIT",
    __builtin_constant_p 
#line 17665 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT)
    ? (int) 
#line 17665 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT)
    : -1 },
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, QImode, operands)",
    __builtin_constant_p 
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    ? (int) 
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    : -1 },
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    ? (int) 
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    : -1 },
#line 1373 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])",
    __builtin_constant_p 
#line 1373 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    ? (int) 
#line 1373 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    : -1 },
  { "(TARGET_VZEROUPPER && TARGET_64BIT && SIBLING_CALL_P (insn)) && ( reload_completed)",
    __builtin_constant_p (
#line 17868 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && SIBLING_CALL_P (insn)) && 
#line 17870 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 17868 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && SIBLING_CALL_P (insn)) && 
#line 17870 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 13124 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13124 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13124 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 9678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 9678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 9678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 17189 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode\n\
    || GET_MODE (operands[0]) == HImode)\n\
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17189 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17189 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 9842 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_ROUND",
    __builtin_constant_p 
#line 9842 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_ROUND)
    ? (int) 
#line 9842 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_ROUND)
    : -1 },
#line 4891 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4891 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4891 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 3760 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 3760 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 3760 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    : -1 },
#line 7724 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "!TARGET_64BIT && TARGET_AVX",
    __builtin_constant_p 
#line 7724 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_AVX)
    ? (int) 
#line 7724 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_AVX)
    : -1 },
#line 17456 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()\n\
   && !satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 17456 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    ? (int) 
#line 17456 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    : -1 },
  { "(TARGET_AVX) && ( reload_completed)",
    __builtin_constant_p (
#line 12038 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 12040 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 12038 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 12040 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V8QImode, operands)",
    __builtin_constant_p 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V8QImode, operands))
    ? (int) 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V8QImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATE, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (ROTATE, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (ROTATE, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 9069 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, HImode, operands)",
    __builtin_constant_p 
#line 9069 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, HImode, operands))
    ? (int) 
#line 9069 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, HImode, operands))
    : -1 },
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V2SImode, operands)",
    __builtin_constant_p 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    ? (int) 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    : -1 },
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && reload_completed\n\
   && FP_REG_P (operands[0])",
    __builtin_constant_p 
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, DImode)
   && reload_completed
   && FP_REG_P (operands[0]))
    ? (int) 
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, DImode)
   && reload_completed
   && FP_REG_P (operands[0]))
    : -1 },
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && ix86_binary_operator_ok (XOR, V4DFmode, operands)",
    __builtin_constant_p 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (XOR, V4DFmode, operands))
    ? (int) 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (XOR, V4DFmode, operands))
    : -1 },
#line 8583 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(INTVAL (operands[2]) & ~255)\n\
    && (INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8583 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8583 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 173 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_64BIT && TARGET_AVX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 173 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 173 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
  { "(TARGET_PREFETCH_SSE) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17922 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17922 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
  { "(!TARGET_PARTIAL_REG_STALL\n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && ( reload_completed)",
    __builtin_constant_p (
#line 10636 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && 
#line 10639 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 10636 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && 
#line 10639 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands))
    ? (int) 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands))
    : -1 },
  { "(TARGET_SSE) && (TARGET_AVX)",
    __builtin_constant_p (
#line 4375 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 107 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 4375 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 107 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 8071 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)\n\
    || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 8071 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun))
    ? (int) 
#line 8071 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun))
    : -1 },
  { "(AVX_VEC_FLOAT_MODE_P (V2DFmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 603 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)) && 
#line 605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 603 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)) && 
#line 605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (MINUS, V2DImode, operands)",
    __builtin_constant_p 
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V2DImode, operands))
    ? (int) 
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V2DImode, operands))
    : -1 },
#line 7538 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "!TARGET_64BIT\n\
   && TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7538 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_64BIT
   && TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7538 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_64BIT
   && TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 6312 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 6312 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    ? (int) 
#line 6312 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    : -1 },
  { "(ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    ? (int) 
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    : -1 },
#line 13010 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13010 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13010 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 233 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_AVX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 233 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 233 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 13047 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13047 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13047 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 9020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
    || (TARGET_SSE2 && (DFmode == TFmode)))\n\
   && reload_completed",
    __builtin_constant_p 
#line 9020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (DFmode == TFmode)))
   && reload_completed)
    ? (int) 
#line 9020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (DFmode == TFmode)))
   && reload_completed)
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
(((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
(((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (DFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 4917 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 4917 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    ? (int) 
#line 4917 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    : -1 },
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))
    ? (int) 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))
    : -1 },
#line 15369 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math)",
    __builtin_constant_p 
#line 15369 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    ? (int) 
#line 15369 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    : -1 },
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V2SImode, operands)",
    __builtin_constant_p 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V2SImode, operands))
    ? (int) 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V2SImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT))
    : -1 },
  { "(AVX_VEC_FLOAT_MODE_P (V8SFmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 603 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)) && 
#line 605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 603 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)) && 
#line 605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 5127 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5127 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5127 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 1816 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && operands[1] == constm1_rtx",
    __builtin_constant_p 
#line 1816 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx)
    ? (int) 
#line 1816 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx)
    : -1 },
#line 6482 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands)",
    __builtin_constant_p 
#line 6482 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands))
    ? (int) 
#line 6482 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands))
    : -1 },
#line 7107 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 7107 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 7107 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 26 "../../gcc-4.6.2/gcc/config/i386/sync.md"
  { "TARGET_64BIT && TARGET_CMPXCHG16B",
    __builtin_constant_p 
#line 26 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B)
    ? (int) 
#line 26 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B)
    : -1 },
  { "(TARGET_3DNOW) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17943 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_3DNOW) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17943 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_3DNOW) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 16441 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 16441 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 16441 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 7785 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 7785 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 7785 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands))
    ? (int) 
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands))
    : -1 },
#line 8769 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 8769 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 8769 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (SFmode))
    : -1 },
#line 5191 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5191 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5191 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    : -1 },
  { "(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()\n\
   && satisfies_constraint_K (operands[2])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17488 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17488 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((SImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 1530 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_SSE || TARGET_3DNOW",
    __builtin_constant_p 
#line 1530 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW)
    ? (int) 
#line 1530 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW)
    : -1 },
  { "(reload_completed) && (TARGET_HIMODE_MATH)",
    __builtin_constant_p (
#line 7491 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 814 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
    ? (int) (
#line 7491 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 814 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
    : -1 },
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    ? (int) 
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4756 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4756 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 2065 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode) && 1",
    __builtin_constant_p 
#line 2065 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    ? (int) 
#line 2065 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 17424 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) == 3\n\
   || INTVAL (operands[2]) == 5\n\
   || INTVAL (operands[2]) == 9",
    __builtin_constant_p 
#line 17424 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 3
   || INTVAL (operands[2]) == 5
   || INTVAL (operands[2]) == 9)
    ? (int) 
#line 17424 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 3
   || INTVAL (operands[2]) == 5
   || INTVAL (operands[2]) == 9)
    : -1 },
  { "(ix86_binary_operator_ok (PLUS, TImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands)) && 
#line 827 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands)) && 
#line 827 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4623 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0)",
    __builtin_constant_p 
#line 4623 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0))
    ? (int) 
#line 4623 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0))
    : -1 },
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (XFmode, SImode)",
    __builtin_constant_p 
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, SImode))
    ? (int) 
#line 5448 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, SImode))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATERT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    : -1 },
#line 5100 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5100 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5100 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
  { "(TARGET_80387\n\
   && TARGET_SAHF && !TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 1332 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && TARGET_SAHF && !TARGET_CMOVE) && 
#line 1335 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1332 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && TARGET_SAHF && !TARGET_CMOVE) && 
#line 1335 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands)",
    __builtin_constant_p 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    ? (int) 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    : -1 },
#line 11122 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[3]))\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[3])\n\
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode\n\
   && !TARGET_CMOVE",
    __builtin_constant_p 
#line 11122 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[3]))
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && !TARGET_CMOVE)
    ? (int) 
#line 11122 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[3]))
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && !TARGET_CMOVE)
    : -1 },
#line 8183 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && TARGET_64BIT",
    __builtin_constant_p 
#line 8183 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    ? (int) 
#line 8183 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    : -1 },
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands)",
    __builtin_constant_p 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    ? (int) 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    : -1 },
#line 7112 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && TARGET_64BIT",
    __builtin_constant_p 
#line 7112 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_64BIT)
    ? (int) 
#line 7112 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_64BIT)
    : -1 },
#line 1127 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)",
    __builtin_constant_p 
#line 1127 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    ? (int) 
#line 1127 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    : -1 },
#line 448 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 448 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 448 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 12329 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_POPCNT",
    __builtin_constant_p 
#line 12329 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_POPCNT)
    ? (int) 
#line 12329 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_POPCNT)
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])) && ( reload_completed)",
    __builtin_constant_p (
#line 1373 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1377 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1373 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && GET_MODE (operands[1]) == GET_MODE (operands[2])) && 
#line 1377 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 5680 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5680 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && can_create_pseudo_p ())
    ? (int) 
#line 5680 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && can_create_pseudo_p ())
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9775 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9775 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1688 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(SSE_VEC_FLOAT_MODE_P (V4DFmode)\n\
    || AVX_VEC_FLOAT_MODE_P (V4DFmode))",
    __builtin_constant_p 
#line 1688 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((SSE_VEC_FLOAT_MODE_P (V4DFmode)
    || AVX_VEC_FLOAT_MODE_P (V4DFmode)))
    ? (int) 
#line 1688 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((SSE_VEC_FLOAT_MODE_P (V4DFmode)
    || AVX_VEC_FLOAT_MODE_P (V4DFmode)))
    : -1 },
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V8SImode, operands)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V8SImode, operands))
    ? (int) 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V8SImode, operands))
    : -1 },
#line 9834 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 9834 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 9834 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
  { "(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 16200 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 16200 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 7244 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && X87_ENABLE_ARITH (SFmode))\n\
    || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 7244 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || TARGET_SSE_MATH)
    ? (int) 
#line 7244 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || TARGET_SSE_MATH)
    : -1 },
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V1TImode)\n\
       || register_operand (operands[1], V1TImode))",
    __builtin_constant_p 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V1TImode)
       || register_operand (operands[1], V1TImode)))
    ? (int) 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V1TImode)
       || register_operand (operands[1], V1TImode)))
    : -1 },
  { "(SSE_VEC_FLOAT_MODE_P (V4SFmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 626 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)) && 
#line 628 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 626 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)) && 
#line 628 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    ? (int) 
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    : -1 },
#line 286 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "!TARGET_64BIT && reload_completed\n\
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))\n\
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 286 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    ? (int) 
#line 286 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && (!MMX_REG_P (operands[0]) && !SSE_REG_P (operands[0]))
   && (!MMX_REG_P (operands[1]) && !SSE_REG_P (operands[1])))
    : -1 },
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V32QImode, operands)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V32QImode, operands))
    ? (int) 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V32QImode, operands))
    : -1 },
#line 8016 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 8016 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 8016 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
#line 10930 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_BT || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 10930 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun))
    ? (int) 
#line 10930 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun))
    : -1 },
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands)",
    __builtin_constant_p 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands))
    ? (int) 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands))
    : -1 },
#line 13714 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 13714 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 13714 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && !(reload_completed || reload_in_progress))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1) && ( 1)",
    __builtin_constant_p (
#line 10896 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 10900 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 10896 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 10900 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (MINUS, V4SImode, operands)",
    __builtin_constant_p 
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V4SImode, operands))
    ? (int) 
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V4SImode, operands))
    : -1 },
#line 16563 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 16563 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 16563 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    : -1 },
#line 411 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 411 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 411 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 16794 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && ((GET_MODE (operands[0]) == HImode\n\
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)\n\
            /* ??? next two lines just !satisfies_constraint_K (...) */\n\
	    || !CONST_INT_P (operands[2])\n\
	    || satisfies_constraint_K (operands[2])))\n\
       || (GET_MODE (operands[0]) == QImode\n\
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun))))",
    __builtin_constant_p 
#line 16794 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || !CONST_INT_P (operands[2])
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun)))))
    ? (int) 
#line 16794 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || !CONST_INT_P (operands[2])
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun)))))
    : -1 },
#line 12983 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12983 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12983 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 5153 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5153 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5153 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (PLUS, V2DImode, operands)",
    __builtin_constant_p 
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    ? (int) 
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    : -1 },
#line 4590 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH\n\
   && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 4590 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 4590 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun))
    : -1 },
#line 5546 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && TARGET_SSE",
    __builtin_constant_p 
#line 5546 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE)
    ? (int) 
#line 5546 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE)
    : -1 },
#line 8732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, QImode, operands)",
    __builtin_constant_p 
#line 8732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    ? (int) 
#line 8732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    : -1 },
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands))
    ? (int) 
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands))
    : -1 },
#line 6312 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 6312 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    ? (int) 
#line 6312 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    : -1 },
#line 13757 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations\n\
   && standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 13757 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 13757 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    : -1 },
  { "(TARGET_SSE2 && reload_completed) && (Pmode == DImode)",
    __builtin_constant_p (
#line 2616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && reload_completed) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 2616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && reload_completed) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 15449 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 15449 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 15449 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    : -1 },
  { "(TARGET_SSE4_1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 7147 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 7147 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands)",
    __builtin_constant_p 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands))
    ? (int) 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V8HImode, operands))
    : -1 },
#line 6248 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 6248 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 6248 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 6592 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)",
    __builtin_constant_p 
#line 6592 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2))
    ? (int) 
#line 6592 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2))
    : -1 },
  { "(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_AVX\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 5627 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_AVX
   && can_create_pseudo_p ()) && 
#line 5630 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( 1))
    ? (int) (
#line 5627 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_SSE4_1 && !TARGET_AVX
   && can_create_pseudo_p ()) && 
#line 5630 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( 1))
    : -1 },
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)",
    __builtin_constant_p 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    ? (int) 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands))
    : -1 },
#line 5486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    : -1 },
  { "((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9858 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && 
#line 819 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9858 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && 
#line 819 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 10319 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 10319 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 10319 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 8769 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 8769 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 8769 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (DFmode))
    : -1 },
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && ( 1)",
    __builtin_constant_p (
#line 10930 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 10932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 10930 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 10932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 13432 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (DFmode))\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 13432 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (DFmode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 13432 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (DFmode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 8450 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8450 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8450 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4DFmode, operands)",
    __builtin_constant_p 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4DFmode, operands))
    ? (int) 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4DFmode, operands))
    : -1 },
#line 5153 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5153 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5153 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 12968 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (DFmode)\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12968 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12968 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V16HImode, operands)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V16HImode, operands))
    ? (int) 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V16HImode, operands))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (DFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 5029 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 5029 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 6447 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (EQ, V16QImode, operands)",
    __builtin_constant_p 
#line 6447 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V16QImode, operands))
    ? (int) 
#line 6447 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V16QImode, operands))
    : -1 },
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands)",
    __builtin_constant_p 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands))
    ? (int) 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V8HImode, operands))
    : -1 },
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "Pmode == SImode",
    __builtin_constant_p 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode)
    ? (int) 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode)
    : -1 },
#line 5372 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5372 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5372 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
  { "(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH\n\
   && optimize_function_for_speed_p (cfun)) && ( reload_completed)",
    __builtin_constant_p (
#line 4590 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && 
#line 4593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 4590 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && 
#line 4593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 11048 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && !TARGET_CMOVE",
    __builtin_constant_p 
#line 11048 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !TARGET_CMOVE)
    ? (int) 
#line 11048 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && !TARGET_CMOVE)
    : -1 },
  { "((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && ( 1)",
    __builtin_constant_p (
((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && 
#line 9838 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && 
#line 9838 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 1020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 1020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
  { "(optimize_insn_for_speed_p ()\n\
   && (INTVAL (operands[2]) == 3\n\
       || INTVAL (operands[2]) == 5\n\
       || INTVAL (operands[2]) == 9)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17438 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9)) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17438 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (INTVAL (operands[2]) == 3
       || INTVAL (operands[2]) == 5
       || INTVAL (operands[2]) == 9)) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 9678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 9678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 2828 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && !(SSE_REG_P (operands[0]) || SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 2828 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && !(SSE_REG_P (operands[0]) || SSE_REG_P (operands[1])))
    ? (int) 
#line 2828 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && !(SSE_REG_P (operands[0]) || SSE_REG_P (operands[1])))
    : -1 },
#line 9727 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 9727 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 9727 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))
    ? (int) 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))
    : -1 },
#line 674 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands)",
    __builtin_constant_p 
#line 674 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands))
    ? (int) 
#line 674 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands))
    : -1 },
  { "(TARGET_LWP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 18311 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 18311 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 12832 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 12832 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
    ? (int) 
#line 12832 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
    : -1 },
  { "(TARGET_BMI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12148 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12148 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (AND, V2DImode, operands)",
    __builtin_constant_p 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V2DImode, operands))
    ? (int) 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V2DImode, operands))
    : -1 },
  { "(reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10270 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 827 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10270 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 827 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands)",
    __builtin_constant_p 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands))
    ? (int) 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V4SImode, operands))
    : -1 },
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (DFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 6697 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, TFmode, operands)",
    __builtin_constant_p 
#line 6697 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, TFmode, operands))
    ? (int) 
#line 6697 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, TFmode, operands))
    : -1 },
#line 6697 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, TFmode, operands)",
    __builtin_constant_p 
#line 6697 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, TFmode, operands))
    ? (int) 
#line 6697 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, TFmode, operands))
    : -1 },
#line 3551 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && MEM_P (operands[1])\n\
   && (GET_MODE (operands[0]) == TFmode\n\
       || GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode\n\
       || GET_MODE (operands[0]) == SFmode)\n\
   && (operands[2] = find_constant_src (insn))",
    __builtin_constant_p 
#line 3551 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && MEM_P (operands[1])
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode
       || GET_MODE (operands[0]) == SFmode)
   && (operands[2] = find_constant_src (insn)))
    ? (int) 
#line 3551 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && MEM_P (operands[1])
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode
       || GET_MODE (operands[0]) == SFmode)
   && (operands[2] = find_constant_src (insn)))
    : -1 },
#line 7860 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[2])\n\
    && GET_MODE (operands[2]) != QImode\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~(127 << 8))))",
    __builtin_constant_p 
#line 7860 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    ? (int) 
#line 7860 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    : -1 },
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
#line 3806 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 3806 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 3806 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(ix86_match_ccmode (insn, CCZmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6208 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6208 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4917 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 4917 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    ? (int) 
#line 4917 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    : -1 },
#line 3817 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3817 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3817 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
#line 4153 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4153 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4153 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 15308 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math",
    __builtin_constant_p 
#line 15308 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    ? (int) 
#line 15308 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    : -1 },
#line 10141 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 10141 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 10141 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V1TImode)\n\
       || register_operand (operands[1], V1TImode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V1TImode)
       || register_operand (operands[1], V1TImode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V1TImode)
       || register_operand (operands[1], V1TImode)))
    : -1 },
#line 9917 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && INTVAL (operands[2]) == 63\n\
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 9917 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 9917 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 4299 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4299 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 4299 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 6506 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 6506 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 6506 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
  { "(TARGET_SSE2\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 5680 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && can_create_pseudo_p ()) && 
#line 5683 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( 1))
    ? (int) (
#line 5680 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && can_create_pseudo_p ()) && 
#line 5683 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( 1))
    : -1 },
  { "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17347 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17347 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 12768 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 12768 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
    ? (int) 
#line 12768 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
    : -1 },
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (AND, V16QImode, operands)",
    __builtin_constant_p 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V16QImode, operands))
    ? (int) 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V16QImode, operands))
    : -1 },
#line 1605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "!TARGET_XOP \n\
  && (SSE_FLOAT_MODE_P (V4SFmode) || SSE_VEC_FLOAT_MODE_P (V4SFmode))",
    __builtin_constant_p 
#line 1605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_XOP 
  && (SSE_FLOAT_MODE_P (V4SFmode) || SSE_VEC_FLOAT_MODE_P (V4SFmode)))
    ? (int) 
#line 1605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_XOP 
  && (SSE_FLOAT_MODE_P (V4SFmode) || SSE_VEC_FLOAT_MODE_P (V4SFmode)))
    : -1 },
#line 16931 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p () && !TARGET_PUSH_MEMORY\n\
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))",
    __builtin_constant_p 
#line 16931 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && !TARGET_PUSH_MEMORY
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    ? (int) 
#line 16931 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && !TARGET_PUSH_MEMORY
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    : -1 },
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    ? (int) 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    : -1 },
#line 13124 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13124 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13124 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(ix86_match_ccmode (insn, CCmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1009 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 1009 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (AND, V2DFmode, operands)",
    __builtin_constant_p 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (AND, V2DFmode, operands))
    ? (int) 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (AND, V2DFmode, operands))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & 0x1f) == 0x1f) && ( 1)",
    __builtin_constant_p (
#line 10967 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f) && 
#line 10970 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 10967 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f) && 
#line 10970 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1755 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)",
    __builtin_constant_p 
#line 1755 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode))
    ? (int) 
#line 1755 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode))
    : -1 },
  { "(TARGET_SSE2) && (TARGET_SSE4_2)",
    __builtin_constant_p (
#line 6548 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 80 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2))
    ? (int) (
#line 6548 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 80 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2))
    : -1 },
#line 14787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && ((SImode != DImode) || TARGET_64BIT)",
    __builtin_constant_p 
#line 14787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT))
    ? (int) 
#line 14787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((SImode != DImode) || TARGET_64BIT))
    : -1 },
#line 8371 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 8371 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 8371 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 11525 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_PCLMUL && TARGET_AVX",
    __builtin_constant_p 
#line 11525 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_PCLMUL && TARGET_AVX)
    ? (int) 
#line 11525 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_PCLMUL && TARGET_AVX)
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8477 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8477 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 17216 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17216 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17216 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 1401 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1401 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1401 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 1983 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_FMA4",
    __builtin_constant_p 
#line 1983 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_FMA4)
    ? (int) 
#line 1983 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_FMA4)
    : -1 },
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V4HImode, operands)",
    __builtin_constant_p 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V4HImode, operands))
    ? (int) 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V4HImode, operands))
    : -1 },
#line 9020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)\n\
    || (TARGET_SSE2 && (TFmode == TFmode)))\n\
   && reload_completed",
    __builtin_constant_p 
#line 9020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (TFmode == TFmode)))
   && reload_completed)
    ? (int) 
#line 9020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (TFmode == TFmode)))
   && reload_completed)
    : -1 },
#line 6763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (IOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    ? (int) 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (IOR, V2DFmode, operands))
    : -1 },
#line 6129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 15711 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])",
    __builtin_constant_p 
#line 15711 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG]))
    ? (int) 
#line 15711 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG]))
    : -1 },
#line 5336 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5336 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 5336 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    : -1 },
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((SImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands)",
    __builtin_constant_p 
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands))
    ? (int) 
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands))
    : -1 },
#line 6763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6763 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 1595 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 1595 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 1595 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
#line 404 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2SFmode, operands)",
    __builtin_constant_p 
#line 404 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    ? (int) 
#line 404 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    : -1 },
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V16QImode, operands)",
    __builtin_constant_p 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V16QImode, operands))
    ? (int) 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V16QImode, operands))
    : -1 },
  { "(optimize_insn_for_size_p ()\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17395 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17395 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 8937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (reload_completed\n\
       || !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 8937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 8937 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 13339 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[2]))",
    __builtin_constant_p 
#line 13339 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[2])))
    ? (int) 
#line 13339 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[2])))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 117 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 117 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 16425 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 16425 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 16425 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 5421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 1825 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 1825 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 1825 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_FLOAT_MODE_P (DFmode))
    : -1 },
#line 17745 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 17745 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !SIBLING_CALL_P (insn))
    ? (int) 
#line 17745 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !SIBLING_CALL_P (insn))
    : -1 },
#line 4361 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4361 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    ? (int) 
#line 4361 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    : -1 },
  { "((ix86_binary_operator_ok (ASHIFT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && ( 1)",
    __builtin_constant_p ((
#line 9269 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 9273 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) ((
#line 9269 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 9273 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9069 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9069 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 13124 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13124 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13124 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (XFmode, SImode)\n\
   && reload_completed\n\
   && FP_REG_P (operands[0])",
    __builtin_constant_p 
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, SImode)
   && reload_completed
   && FP_REG_P (operands[0]))
    ? (int) 
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, SImode)
   && reload_completed
   && FP_REG_P (operands[0]))
    : -1 },
#line 16402 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE)\n\
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 16402 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 16402 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 3796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))\n\
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1]))",
    __builtin_constant_p 
#line 3796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    ? (int) 
#line 3796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
   && (!REG_P (operands[1]) || ANY_QI_REG_P (operands[1])))
    : -1 },
#line 4854 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 4854 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    ? (int) 
#line 4854 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    : -1 },
#line 4616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 1605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "!TARGET_XOP \n\
  && (SSE_FLOAT_MODE_P (SFmode) || SSE_VEC_FLOAT_MODE_P (SFmode))",
    __builtin_constant_p 
#line 1605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_XOP 
  && (SSE_FLOAT_MODE_P (SFmode) || SSE_VEC_FLOAT_MODE_P (SFmode)))
    ? (int) 
#line 1605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_XOP 
  && (SSE_FLOAT_MODE_P (SFmode) || SSE_VEC_FLOAT_MODE_P (SFmode)))
    : -1 },
#line 13757 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations\n\
   && standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 13757 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 13757 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    : -1 },
#line 997 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)",
    __builtin_constant_p 
#line 997 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    ? (int) 
#line 997 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    : -1 },
#line 5546 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && TARGET_SSE",
    __builtin_constant_p 
#line 5546 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE)
    ? (int) 
#line 5546 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE)
    : -1 },
#line 13083 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (SFmode)\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13083 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (SFmode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13083 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (SFmode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 11905 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "epilogue_completed",
    __builtin_constant_p 
#line 11905 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(epilogue_completed)
    ? (int) 
#line 11905 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(epilogue_completed)
    : -1 },
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands)",
    __builtin_constant_p 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    ? (int) 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    : -1 },
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && ix86_binary_operator_ok (AND, V8SFmode, operands)",
    __builtin_constant_p 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (AND, V8SFmode, operands))
    ? (int) 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (AND, V8SFmode, operands))
    : -1 },
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V32QImode, operands)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V32QImode, operands))
    ? (int) 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V32QImode, operands))
    : -1 },
#line 4547 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4547 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4547 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 1419 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && reload_completed",
    __builtin_constant_p 
#line 1419 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    ? (int) 
#line 1419 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    : -1 },
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))
    ? (int) 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))
    : -1 },
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V2DImode, operands)",
    __builtin_constant_p 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V2DImode, operands))
    ? (int) 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V2DImode, operands))
    : -1 },
#line 1907 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && !SSE_REG_P (operands[0]) && !SSE_REG_P (operands[1])",
    __builtin_constant_p 
#line 1907 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && !SSE_REG_P (operands[0]) && !SSE_REG_P (operands[1]))
    ? (int) 
#line 1907 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && !SSE_REG_P (operands[0]) && !SSE_REG_P (operands[1]))
    : -1 },
#line 1688 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
    || AVX_VEC_FLOAT_MODE_P (V2DFmode))",
    __builtin_constant_p 
#line 1688 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((SSE_VEC_FLOAT_MODE_P (V2DFmode)
    || AVX_VEC_FLOAT_MODE_P (V2DFmode)))
    ? (int) 
#line 1688 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((SSE_VEC_FLOAT_MODE_P (V2DFmode)
    || AVX_VEC_FLOAT_MODE_P (V2DFmode)))
    : -1 },
  { "(TARGET_ABM || TARGET_BMI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_ABM || TARGET_BMI) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_ABM || TARGET_BMI) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 16823 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && optimize_insn_for_speed_p ()\n\
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)\n\
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 16823 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && optimize_insn_for_speed_p ()
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 16823 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && optimize_insn_for_speed_p ()
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 12133 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_F16C",
    __builtin_constant_p 
#line 12133 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_F16C)
    ? (int) 
#line 12133 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_F16C)
    : -1 },
#line 1552 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1552 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1552 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (GET_MODE (operands[0]))
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
  { "(TARGET_SSE2 && reload_completed) && (Pmode == SImode)",
    __builtin_constant_p (
#line 2616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && reload_completed) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 2616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && reload_completed) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 1915 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SSE && !TARGET_64BIT\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1915 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1915 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 4547 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4547 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4547 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    ? (int) 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    : -1 },
#line 6412 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_2",
    __builtin_constant_p 
#line 6412 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2)
    ? (int) 
#line 6412 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2)
    : -1 },
#line 2649 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 2649 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun))
    ? (int) 
#line 2649 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun))
    : -1 },
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (AND, V4SFmode, operands)",
    __builtin_constant_p 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (AND, V4SFmode, operands))
    ? (int) 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (AND, V4SFmode, operands))
    : -1 },
#line 1688 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
    || AVX_VEC_FLOAT_MODE_P (V4SFmode))",
    __builtin_constant_p 
#line 1688 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((SSE_VEC_FLOAT_MODE_P (V4SFmode)
    || AVX_VEC_FLOAT_MODE_P (V4SFmode)))
    ? (int) 
#line 1688 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((SSE_VEC_FLOAT_MODE_P (V4SFmode)
    || AVX_VEC_FLOAT_MODE_P (V4SFmode)))
    : -1 },
#line 12953 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12953 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12953 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 6447 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (EQ, V4SImode, operands)",
    __builtin_constant_p 
#line 6447 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V4SImode, operands))
    ? (int) 
#line 6447 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V4SImode, operands))
    : -1 },
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V8SImode, operands)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V8SImode, operands))
    ? (int) 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V8SImode, operands))
    : -1 },
#line 12415 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_BSWAP",
    __builtin_constant_p 
#line 12415 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_BSWAP)
    ? (int) 
#line 12415 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_BSWAP)
    : -1 },
#line 5593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ((TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
	&& TARGET_SSE)\n\
       || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 5593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 5593 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 978 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)",
    __builtin_constant_p 
#line 978 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    ? (int) 
#line 978 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    : -1 },
#line 4975 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
        || TARGET_MIX_SSE_I387)\n\
    && reload_completed",
    __builtin_constant_p 
#line 4975 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    ? (int) 
#line 4975 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (XFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 5029 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 5029 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 1020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10141 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10141 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 11122 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[3]))\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[3])\n\
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode\n\
   && !TARGET_CMOVE",
    __builtin_constant_p 
#line 11122 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[3]))
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && !TARGET_CMOVE)
    ? (int) 
#line 11122 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[3]))
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[1]) == GET_MODE (operands[3])
   && ix86_fp_compare_mode (swap_condition (GET_CODE (operands[0]))) == CCFPmode
   && !TARGET_CMOVE)
    : -1 },
#line 5617 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands)",
    __builtin_constant_p 
#line 5617 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    ? (int) 
#line 5617 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    : -1 },
#line 16412 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE",
    __builtin_constant_p 
#line 16412 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    ? (int) 
#line 16412 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    : -1 },
#line 13743 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 13743 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 13743 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    : -1 },
#line 8004 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 8004 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    ? (int) 
#line 8004 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    : -1 },
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (XOR, V2DFmode, operands)",
    __builtin_constant_p 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    ? (int) 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (XOR, V2DFmode, operands))
    : -1 },
  { "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (SFmode == TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 8991 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (SFmode == TFmode))) && 
#line 8994 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 8991 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (SFmode == TFmode))) && 
#line 8994 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 5615 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5615 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    ? (int) 
#line 5615 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    : -1 },
#line 8732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, HImode, operands)",
    __builtin_constant_p 
#line 8732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    ? (int) 
#line 8732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    : -1 },
#line 7911 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 7911 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 7911 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    : -1 },
#line 749 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode)",
    __builtin_constant_p 
#line 749 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
    ? (int) 
#line 749 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
    : -1 },
#line 1064 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands)",
    __builtin_constant_p 
#line 1064 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    ? (int) 
#line 1064 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    : -1 },
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V2DImode, operands)",
    __builtin_constant_p 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V2DImode, operands))
    ? (int) 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V2DImode, operands))
    : -1 },
#line 12635 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU_TLS",
    __builtin_constant_p 
#line 12635 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    ? (int) 
#line 12635 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    : -1 },
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    ? (int) 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    : -1 },
#line 12400 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_MOVBE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 12400 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 12400 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 1127 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands)",
    __builtin_constant_p 
#line 1127 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    ? (int) 
#line 1127 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    : -1 },
#line 7237 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && X87_ENABLE_ARITH (DFmode))\n\
    || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 7237 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 7237 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
  { "(((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && ( 1)",
    __builtin_constant_p ((
#line 10896 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10900 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) ((
#line 10896 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10900 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 3281 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)",
    __builtin_constant_p 
#line 3281 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    ? (int) 
#line 3281 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    : -1 },
#line 16987 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((TARGET_NOT_UNPAIRABLE\n\
	&& (!MEM_P (operands[0])\n\
	    || !memory_displacement_operand (operands[0], SImode)))\n\
       || (TARGET_NOT_VECTORMODE\n\
	   && long_memory_operand (operands[0], SImode)))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16987 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], SImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16987 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], SImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 7220 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && X87_ENABLE_ARITH (DFmode))\n\
    || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 7220 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 7220 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 4490 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1)",
    __builtin_constant_p 
#line 4490 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1))
    ? (int) 
#line 4490 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1))
    : -1 },
  { "(ix86_target_stack_probe ()) && (Pmode == SImode)",
    __builtin_constant_p (
#line 16688 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 16688 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 6462 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP\n\
   && ix86_binary_operator_ok (EQ, V4SImode, operands)",
    __builtin_constant_p 
#line 6462 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V4SImode, operands))
    ? (int) 
#line 6462 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V4SImode, operands))
    : -1 },
  { "(TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4930 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4930 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(TARGET_XOP) && ( reload_completed)",
    __builtin_constant_p (
#line 10309 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 10311 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 10309 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 10311 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))
    ? (int) 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))
    : -1 },
#line 5100 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5100 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5100 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 13249 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13249 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13249 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    ? (int) 
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    : -1 },
#line 9269 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 9269 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 9269 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
#line 411 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 411 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 411 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 929 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 929 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 929 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 8156 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 8156 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 8156 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (DFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 5029 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 5029 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 4616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 4472 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && ix86_vec_interleave_v2df_operator_ok (operands, 1)",
    __builtin_constant_p 
#line 4472 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && ix86_vec_interleave_v2df_operator_ok (operands, 1))
    ? (int) 
#line 4472 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && ix86_vec_interleave_v2df_operator_ok (operands, 1))
    : -1 },
#line 5421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands)",
    __builtin_constant_p 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    ? (int) 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    : -1 },
#line 17096 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p () && ! TARGET_READ_MODIFY",
    __builtin_constant_p 
#line 17096 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ! TARGET_READ_MODIFY)
    ? (int) 
#line 17096 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ! TARGET_READ_MODIFY)
    : -1 },
  { "(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1380 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1382 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
( reload_completed))
    ? (int) (
#line 1380 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1382 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
( reload_completed))
    : -1 },
#line 674 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands)",
    __builtin_constant_p 
#line 674 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    ? (int) 
#line 674 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (PLUS, V2DFmode, operands))
    : -1 },
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && ix86_binary_operator_ok (PLUS, V4DFmode, operands)",
    __builtin_constant_p 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (PLUS, V4DFmode, operands))
    ? (int) 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (PLUS, V4DFmode, operands))
    : -1 },
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && can_create_pseudo_p ())
    ? (int) 
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && can_create_pseudo_p ())
    : -1 },
#line 6256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 6256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    ? (int) 
#line 6256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    : -1 },
#line 8562 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8562 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8562 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 11063 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && SELECT_CC_MODE (GET_CODE (operands[0]),\n\
		      operands[1], operands[2]) == CCFPmode\n\
   && !TARGET_CMOVE",
    __builtin_constant_p 
#line 11063 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && !TARGET_CMOVE)
    ? (int) 
#line 11063 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && !TARGET_CMOVE)
    : -1 },
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V8HImode, operands)",
    __builtin_constant_p 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V8HImode, operands))
    ? (int) 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V8HImode, operands))
    : -1 },
#line 5372 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5372 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5372 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 18353 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_FSGSBASE",
    __builtin_constant_p 
#line 18353 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE)
    ? (int) 
#line 18353 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE)
    : -1 },
#line 4523 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 4523 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 4523 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 7172 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 7172 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 7172 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17216 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17216 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 11434 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_VZEROUPPER",
    __builtin_constant_p 
#line 11434 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER)
    ? (int) 
#line 11434 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER)
    : -1 },
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)",
    __builtin_constant_p 
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    ? (int) 
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (SFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 5029 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 5029 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 12983 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12983 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12983 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    ? (int) 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    : -1 },
#line 6462 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP\n\
   && ix86_binary_operator_ok (EQ, V16QImode, operands)",
    __builtin_constant_p 
#line 6462 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V16QImode, operands))
    ? (int) 
#line 6462 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V16QImode, operands))
    : -1 },
#line 8450 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8450 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8450 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 7485 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_64BIT\n\
   && TARGET_AVX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7485 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_64BIT
   && TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7485 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_64BIT
   && TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 12918 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12918 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12918 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 3567 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)\n\
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)\n\
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)\n\
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4))",
    __builtin_constant_p 
#line 3567 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)))
    ? (int) 
#line 3567 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)))
    : -1 },
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands)",
    __builtin_constant_p 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands))
    ? (int) 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V2DImode, operands))
    : -1 },
#line 8156 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 8156 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 8156 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
  { "(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15757 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15757 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    ? (int) 
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    : -1 },
#line 1548 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW)\n\
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 1548 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 1548 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
#line 16478 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 16478 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 16478 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 8637 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 8637 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 8637 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)",
    __builtin_constant_p 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    ? (int) 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    : -1 },
#line 2783 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2783 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2783 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (SFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
  { "(reload_completed) && (Pmode == SImode)",
    __builtin_constant_p (
#line 4053 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 4053 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 7881 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && GET_MODE (operands[2]) != QImode\n\
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
	 && !(INTVAL (operands[3]) & ~255))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~127)))",
    __builtin_constant_p 
#line 7881 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    ? (int) 
#line 7881 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    : -1 },
#line 7444 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE",
    __builtin_constant_p 
#line 7444 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE)
    ? (int) 
#line 7444 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE)
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    : -1 },
  { "(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()\n\
   && !satisfies_constraint_K (operands[2])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17456 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17456 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1646 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT",
    __builtin_constant_p 
#line 1646 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT)
    ? (int) 
#line 1646 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT)
    : -1 },
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands)",
    __builtin_constant_p 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands))
    ? (int) 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (MINUS, V2DFmode, operands))
    : -1 },
#line 6170 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 6170 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 6170 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "Pmode == DImode",
    __builtin_constant_p 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode)
    ? (int) 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode)
    : -1 },
#line 9338 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 9338 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 9338 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)",
    __builtin_constant_p 
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    ? (int) 
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    : -1 },
#line 17788 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !SIBLING_CALL_P (insn)\n\
   && ix86_cmodel != CM_LARGE && ix86_cmodel != CM_LARGE_PIC",
    __builtin_constant_p 
#line 17788 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !SIBLING_CALL_P (insn)
   && ix86_cmodel != CM_LARGE && ix86_cmodel != CM_LARGE_PIC)
    ? (int) 
#line 17788 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !SIBLING_CALL_P (insn)
   && ix86_cmodel != CM_LARGE && ix86_cmodel != CM_LARGE_PIC)
    : -1 },
#line 262 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 262 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 262 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    ? (int) 
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    : -1 },
#line 1910 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_FMA || TARGET_FMA4) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 1910 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_FMA || TARGET_FMA4) && TARGET_SSE_MATH)
    ? (int) 
#line 1910 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_FMA || TARGET_FMA4) && TARGET_SSE_MATH)
    : -1 },
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V8HImode, operands))
    ? (int) 
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MINUS, V8HImode, operands))
    : -1 },
  { "((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && ( 1)",
    __builtin_constant_p (
((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && 
#line 9838 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && 
#line 9838 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(TARGET_64BIT && TARGET_FSGSBASE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 18353 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 18353 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9037 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 9037 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 9037 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V1DImode, operands)",
    __builtin_constant_p 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V1DImode, operands))
    ? (int) 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V1DImode, operands))
    : -1 },
  { "(!TARGET_PARTIAL_REG_STALL\n\
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && ( reload_completed)",
    __builtin_constant_p (
#line 10620 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 10623 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 10620 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 10623 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 7017 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_HIMODE_MATH\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 7017 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 7017 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4930 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4930 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(TARGET_AVX) && ( reload_completed && REG_P (operands[1]))",
    __builtin_constant_p (
#line 11594 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 11598 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed && REG_P (operands[1])))
    ? (int) (
#line 11594 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 11598 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed && REG_P (operands[1])))
    : -1 },
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))
    ? (int) 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))
    : -1 },
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && ix86_binary_operator_ok (IOR, V4DFmode, operands)",
    __builtin_constant_p 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (IOR, V4DFmode, operands))
    ? (int) 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (IOR, V4DFmode, operands))
    : -1 },
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands)",
    __builtin_constant_p 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    ? (int) 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    : -1 },
#line 6293 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCGCmode)",
    __builtin_constant_p 
#line 6293 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGCmode))
    ? (int) 
#line 6293 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGCmode))
    : -1 },
#line 6256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 6256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    ? (int) 
#line 6256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    : -1 },
#line 8980 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (SFmode == TFmode))",
    __builtin_constant_p 
#line 8980 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (SFmode == TFmode)))
    ? (int) 
#line 8980 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (SFmode == TFmode)))
    : -1 },
#line 5350 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5350 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5350 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 15413 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && can_create_pseudo_p ()) && 
#line 15417 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 15413 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && can_create_pseudo_p ()) && 
#line 15417 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands)",
    __builtin_constant_p 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands))
    ? (int) 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V16QImode, operands))
    : -1 },
#line 15623 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15623 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 15623 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 8307 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(~INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8307 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8307 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    ? (int) 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    : -1 },
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V8SFmode, operands)",
    __builtin_constant_p 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V8SFmode, operands))
    ? (int) 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V8SFmode, operands))
    : -1 },
#line 7472 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && reload_completed\n\
   && (TARGET_INTER_UNIT_MOVES\n\
       || MEM_P (operands [0])\n\
       || !GENERAL_REGNO_P (true_regnum (operands [0])))",
    __builtin_constant_p 
#line 7472 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))
    ? (int) 
#line 7472 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))
    : -1 },
#line 1354 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])",
    __builtin_constant_p 
#line 1354 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    ? (int) 
#line 1354 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && GET_MODE (operands[1]) == GET_MODE (operands[2]))
    : -1 },
#line 8254 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_64BIT || TARGET_SSE2",
    __builtin_constant_p 
#line 8254 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_64BIT || TARGET_SSE2)
    ? (int) 
#line 8254 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_64BIT || TARGET_SSE2)
    : -1 },
#line 6377 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6377 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6377 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 1324 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW_A",
    __builtin_constant_p 
#line 1324 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    ? (int) 
#line 1324 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    : -1 },
  { "(TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4930 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4930 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 400 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode)",
    __builtin_constant_p 
#line 400 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode))
    ? (int) 
#line 400 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode))
    : -1 },
#line 5407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 11720 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_can_use_return_insn_p ()",
    __builtin_constant_p 
#line 11720 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    ? (int) 
#line 11720 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    : -1 },
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (AND, V8HImode, operands)",
    __builtin_constant_p 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V8HImode, operands))
    ? (int) 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V8HImode, operands))
    : -1 },
  { "(! TARGET_POPCNT) && ( reload_completed)",
    __builtin_constant_p (
#line 12525 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_POPCNT) && 
#line 12527 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 12525 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_POPCNT) && 
#line 12527 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 17245 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && exact_log2 (INTVAL (operands[2])) >= 0\n\
   && REGNO (operands[0]) == REGNO (operands[1])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17245 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17245 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 16369 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 16369 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9096 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 9096 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 9096 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 9658 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 9658 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 9658 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 17178 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD\n\
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())\n\
   && GENERAL_REG_P (operands[0])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17178 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17178 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "(optimize_insn_for_size_p ()\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17395 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17395 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
  { "(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)\n\
   && ix86_cmodel != CM_LARGE && ix86_cmodel != CM_LARGE_PIC) && ( reload_completed)",
    __builtin_constant_p (
#line 17776 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)
   && ix86_cmodel != CM_LARGE && ix86_cmodel != CM_LARGE_PIC) && 
#line 17779 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 17776 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)
   && ix86_cmodel != CM_LARGE && ix86_cmodel != CM_LARGE_PIC) && 
#line 17779 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(ix86_binary_operator_ok (PLUS, DImode, operands)) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 5646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 826 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 5646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 826 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 9131 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 9131 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 9131 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    ? (int) 
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    : -1 },
#line 178 "../../gcc-4.6.2/gcc/config/i386/sync.md"
  { "TARGET_XADD",
    __builtin_constant_p 
#line 178 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_XADD)
    ? (int) 
#line 178 "../../gcc-4.6.2/gcc/config/i386/sync.md"
(TARGET_XADD)
    : -1 },
#line 5866 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5866 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5866 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
  { "(TARGET_USE_FANCY_MATH_387\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 15491 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && can_create_pseudo_p ()) && 
#line 15494 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 15491 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && can_create_pseudo_p ()) && 
#line 15494 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 6559 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6566 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6559 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6566 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 13065 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13065 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13065 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands)",
    __builtin_constant_p 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands))
    ? (int) 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V16QImode, operands))
    : -1 },
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V8SFmode, operands)",
    __builtin_constant_p 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V8SFmode, operands))
    ? (int) 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V8SFmode, operands))
    : -1 },
  { "((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17200 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17200 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_RDRND) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 18363 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_RDRND) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 18363 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_RDRND) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (TFmode == TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 8991 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (TFmode == TFmode))) && 
#line 8994 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 8991 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (TFmode == TFmode))) && 
#line 8994 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 17407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())\n\
     && incdec_operand (operands[3], GET_MODE (operands[3])))\n\
    || (!TARGET_FUSE_CMP_AND_BRANCH\n\
	&& INTVAL (operands[3]) == 128))\n\
   && ix86_match_ccmode (insn, CCGCmode)\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 17407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())
     && incdec_operand (operands[3], GET_MODE (operands[3])))
    || (!TARGET_FUSE_CMP_AND_BRANCH
	&& INTVAL (operands[3]) == 128))
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 17407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())
     && incdec_operand (operands[3], GET_MODE (operands[3])))
    || (!TARGET_FUSE_CMP_AND_BRANCH
	&& INTVAL (operands[3]) == 128))
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands)",
    __builtin_constant_p 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands))
    ? (int) 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V4SImode, operands))
    : -1 },
#line 4975 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
        || TARGET_MIX_SSE_I387)\n\
    && reload_completed",
    __builtin_constant_p 
#line 4975 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    ? (int) 
#line 4975 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    : -1 },
#line 10319 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 10319 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 10319 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 2054 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 2054 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 2054 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V8HImode, operands)",
    __builtin_constant_p 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V8HImode, operands))
    ? (int) 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V8HImode, operands))
    : -1 },
#line 6167 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 6167 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    ? (int) 
#line 6167 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    : -1 },
#line 8760 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8760 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8760 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 8029 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 8029 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    ? (int) 
#line 8029 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    : -1 },
#line 9934 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) == 31\n\
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9934 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9934 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V4DFmode)\n\
       || register_operand (operands[1], V4DFmode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode)))
    : -1 },
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && ix86_binary_operator_ok (AND, V2DFmode, operands)",
    __builtin_constant_p 
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (AND, V2DFmode, operands))
    ? (int) 
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)
   && ix86_binary_operator_ok (AND, V2DFmode, operands))
    : -1 },
#line 9020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
    || (TARGET_SSE2 && (SFmode == TFmode)))\n\
   && reload_completed",
    __builtin_constant_p 
#line 9020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (SFmode == TFmode)))
   && reload_completed)
    ? (int) 
#line 9020 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE2 && (SFmode == TFmode)))
   && reload_completed)
    : -1 },
#line 4605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && ix86_vec_interleave_v2df_operator_ok (operands, 0)",
    __builtin_constant_p 
#line 4605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && ix86_vec_interleave_v2df_operator_ok (operands, 0))
    ? (int) 
#line 4605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && ix86_vec_interleave_v2df_operator_ok (operands, 0))
    : -1 },
  { "(TARGET_TBM) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12286 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12286 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 16987 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((TARGET_NOT_UNPAIRABLE\n\
	&& (!MEM_P (operands[0])\n\
	    || !memory_displacement_operand (operands[0], QImode)))\n\
       || (TARGET_NOT_VECTORMODE\n\
	   && long_memory_operand (operands[0], QImode)))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16987 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], QImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16987 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], QImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 4713 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4713 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4713 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 6065 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed && ix86_lea_for_add_ok (insn, operands)",
    __builtin_constant_p 
#line 6065 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands))
    ? (int) 
#line 6065 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands))
    : -1 },
#line 6256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 6256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    ? (int) 
#line 6256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    : -1 },
#line 411 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V2DFmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 411 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 411 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V2DFmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands)",
    __builtin_constant_p 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands))
    ? (int) 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (AND, V2DImode, operands))
    : -1 },
#line 978 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)",
    __builtin_constant_p 
#line 978 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    ? (int) 
#line 978 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    : -1 },
#line 9382 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 9382 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 9382 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATERT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1) && ( 1)",
    __builtin_constant_p (
#line 10214 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 10218 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 10214 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 10218 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 8115 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 8115 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 8115 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 3786 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 3786 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
    ? (int) 
#line 3786 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))
    : -1 },
  { "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17318 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17318 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 16274 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8])",
    __builtin_constant_p 
#line 16274 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    ? (int) 
#line 16274 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    : -1 },
#line 5421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    ? (int) 
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    : -1 },
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands)",
    __builtin_constant_p 
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands))
    ? (int) 
#line 5238 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 15413 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 15413 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && can_create_pseudo_p ())
    ? (int) 
#line 15413 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && can_create_pseudo_p ())
    : -1 },
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    ? (int) 
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    : -1 },
#line 8264 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2",
    __builtin_constant_p 
#line 8264 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2)
    ? (int) 
#line 8264 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2)
    : -1 },
#line 10022 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 10022 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 10022 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 13010 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13010 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13010 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (XOR, V4SImode, operands)",
    __builtin_constant_p 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V4SImode, operands))
    ? (int) 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V4SImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (MINUS, SImode, operands)) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 6677 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands)) && 
#line 826 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 6677 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands)) && 
#line 826 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
  { "(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && ( reload_completed)",
    __builtin_constant_p (
#line 10605 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && 
#line 10607 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 10605 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && 
#line 10607 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 895 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 895 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 895 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 4964 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && reload_completed",
    __builtin_constant_p 
#line 4964 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    ? (int) 
#line 4964 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    : -1 },
#line 9109 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 9109 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 9109 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4756 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4756 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 8167 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_64BIT",
    __builtin_constant_p 
#line 8167 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_64BIT)
    ? (int) 
#line 8167 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_64BIT)
    : -1 },
#line 13199 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13199 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13199 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 16458 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 16458 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    ? (int) 
#line 16458 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    : -1 },
  { "(INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17373 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17373 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V8SImode, operands)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V8SImode, operands))
    ? (int) 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V8SImode, operands))
    : -1 },
#line 8551 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 8551 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    ? (int) 
#line 8551 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (XFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 5029 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 5029 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(TARGET_SSE2) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 7174 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 7174 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1634 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT",
    __builtin_constant_p 
#line 1634 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT)
    ? (int) 
#line 1634 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT)
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V8SFmode)\n\
       || register_operand (operands[1], V8SFmode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode)))
    : -1 },
#line 12918 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12918 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12918 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (SFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 5029 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 5014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 5029 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 2074 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ((optimize > 0 && flag_peephole2)\n\
		    ? epilogue_completed : reload_completed)\n\
   && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 2074 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? epilogue_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 2074 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? epilogue_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
#line 10109 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 10109 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    ? (int) 
#line 10109 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    : -1 },
#line 4713 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4713 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4713 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
  { "(reload_completed\n\
   && operands[1] == constm1_rtx) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1816 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 1816 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 8477 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 8477 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 8477 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 11283 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(peep2_reg_dead_p (3, operands[1])\n\
    || operands_match_p (operands[1], operands[3]))\n\
   && ! reg_overlap_mentioned_p (operands[3], operands[0])",
    __builtin_constant_p 
#line 11283 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    ? (int) 
#line 11283 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    : -1 },
  { "((ix86_binary_operator_ok (ROTATE, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && ( 1)",
    __builtin_constant_p (
((ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && 
#line 10218 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
((ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && 
#line 10218 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1458 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SAHF",
    __builtin_constant_p 
#line 1458 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SAHF)
    ? (int) 
#line 1458 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SAHF)
    : -1 },
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    : -1 },
#line 12286 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_TBM",
    __builtin_constant_p 
#line 12286 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_TBM)
    ? (int) 
#line 12286 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_TBM)
    : -1 },
#line 4455 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && reload_completed",
    __builtin_constant_p 
#line 4455 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    ? (int) 
#line 4455 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    : -1 },
#line 9058 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 9058 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 9058 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 8068 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 8068 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    ? (int) 
#line 8068 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    : -1 },
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V32QImode, operands)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V32QImode, operands))
    ? (int) 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V32QImode, operands))
    : -1 },
  { "(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES) && ( reload_completed)",
    __builtin_constant_p (
#line 314 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES) && 
#line 316 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 314 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES) && 
#line 316 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 314 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES",
    __builtin_constant_p 
#line 314 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES)
    ? (int) 
#line 314 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES)
    : -1 },
#line 206 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_64BIT && TARGET_MMX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 206 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 206 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(exact_log2 (INTVAL (operands[1])) >= 0\n\
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17235 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17235 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4DFmode, operands)",
    __builtin_constant_p 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4DFmode, operands))
    ? (int) 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4DFmode, operands))
    : -1 },
#line 9155 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 9155 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 9155 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 13702 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))\n\
   && !(reload_completed || reload_in_progress)",
    __builtin_constant_p 
#line 13702 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && !(reload_completed || reload_in_progress))
    ? (int) 
#line 13702 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && !(reload_completed || reload_in_progress))
    : -1 },
#line 17879 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 17879 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && SIBLING_CALL_P (insn))
    ? (int) 
#line 17879 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && SIBLING_CALL_P (insn))
    : -1 },
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (IOR, V16QImode, operands)",
    __builtin_constant_p 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V16QImode, operands))
    ? (int) 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (IOR, V16QImode, operands))
    : -1 },
#line 1041 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE_MATH",
    __builtin_constant_p 
#line 1041 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE_MATH)
    ? (int) 
#line 1041 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE_MATH)
    : -1 },
#line 5085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 5085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 5085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    : -1 },
#line 2623 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && reload_completed\n\
   && !SSE_REG_P (operands[1])",
    __builtin_constant_p 
#line 2623 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && reload_completed
   && !SSE_REG_P (operands[1]))
    ? (int) 
#line 2623 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && reload_completed
   && !SSE_REG_P (operands[1]))
    : -1 },
  { "(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 4153 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 4155 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 4153 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 4155 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)\n\
   && ix86_binary_operator_ok (AND, V4DFmode, operands)",
    __builtin_constant_p 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (AND, V4DFmode, operands))
    ? (int) 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)
   && ix86_binary_operator_ok (AND, V4DFmode, operands))
    : -1 },
#line 1021 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 1021 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_SSE_MATH)
    ? (int) 
#line 1021 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && TARGET_SSE_MATH)
    : -1 },
#line 6447 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (EQ, V8HImode, operands)",
    __builtin_constant_p 
#line 6447 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V8HImode, operands))
    ? (int) 
#line 6447 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V8HImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9291 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9291 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
  { "(ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5574 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && TARGET_SSE\n\
   && reload_completed",
    __builtin_constant_p 
#line 5574 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    ? (int) 
#line 5574 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    : -1 },
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands)",
    __builtin_constant_p 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    ? (int) 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    : -1 },
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands)",
    __builtin_constant_p 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    ? (int) 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    : -1 },
#line 15792 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])",
    __builtin_constant_p 
#line 15792 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG]))
    ? (int) 
#line 15792 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG]))
    : -1 },
#line 7231 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387",
    __builtin_constant_p 
#line 7231 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387)
    ? (int) 
#line 7231 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387)
    : -1 },
#line 11015 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)\n\
   && GET_MODE (operands[1]) == GET_MODE (operands[2])\n\
   && SELECT_CC_MODE (GET_CODE (operands[0]),\n\
		      operands[1], operands[2]) == CCFPmode\n\
   && !TARGET_CMOVE",
    __builtin_constant_p 
#line 11015 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && !TARGET_CMOVE)
    ? (int) 
#line 11015 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (GET_MODE (operands[1]) == SFmode || GET_MODE (operands[1]) == DFmode)
   && GET_MODE (operands[1]) == GET_MODE (operands[2])
   && SELECT_CC_MODE (GET_CODE (operands[0]),
		      operands[1], operands[2]) == CCFPmode
   && !TARGET_CMOVE)
    : -1 },
#line 12368 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)",
    __builtin_constant_p 
#line 12368 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    ? (int) 
#line 12368 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1) && ( 1)",
    __builtin_constant_p (
#line 9269 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 9273 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 9269 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 9273 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 10967 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & 0x1f) == 0x1f",
    __builtin_constant_p 
#line 10967 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f)
    ? (int) 
#line 10967 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f)
    : -1 },
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (XOR, V8HImode, operands)",
    __builtin_constant_p 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V8HImode, operands))
    ? (int) 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (XOR, V8HImode, operands))
    : -1 },
#line 13182 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (DFmode)\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 13182 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 13182 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
#line 11477 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AES && TARGET_AVX",
    __builtin_constant_p 
#line 11477 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AES && TARGET_AVX)
    ? (int) 
#line 11477 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AES && TARGET_AVX)
    : -1 },
#line 6462 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP\n\
   && ix86_binary_operator_ok (EQ, V8HImode, operands)",
    __builtin_constant_p 
#line 6462 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V8HImode, operands))
    ? (int) 
#line 6462 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V8HImode, operands))
    : -1 },
#line 18071 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_SSE4_2 || TARGET_CRC32)",
    __builtin_constant_p 
#line 18071 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_SSE4_2 || TARGET_CRC32))
    ? (int) 
#line 18071 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_SSE4_2 || TARGET_CRC32))
    : -1 },
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V16HImode, operands)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V16HImode, operands))
    ? (int) 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V16HImode, operands))
    : -1 },
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V8QImode, operands))
    ? (int) 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V8QImode, operands))
    : -1 },
#line 1604 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && TARGET_CMOVE\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[0])) && TARGET_SSE_MATH)\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])",
    __builtin_constant_p 
#line 1604 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && TARGET_CMOVE
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[0])) && TARGET_SSE_MATH)
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    ? (int) 
#line 1604 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && TARGET_CMOVE
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[0])) && TARGET_SSE_MATH)
   && GET_MODE (operands[0]) == GET_MODE (operands[1]))
    : -1 },
#line 8305 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && TARGET_64BIT",
    __builtin_constant_p 
#line 8305 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_64BIT)
    ? (int) 
#line 8305 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && TARGET_64BIT)
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4678 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 16159 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 16159 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 5527 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)\n\
   && reload_completed\n\
   && FP_REG_P (operands[0])",
    __builtin_constant_p 
#line 5527 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed
   && FP_REG_P (operands[0]))
    ? (int) 
#line 5527 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed
   && FP_REG_P (operands[0]))
    : -1 },
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    ? (int) 
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    : -1 },
#line 12425 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_XCHGB || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 12425 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))
    ? (int) 
#line 12425 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))
    : -1 },
#line 5606 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (MULT, V4SImode, operands)",
    __builtin_constant_p 
#line 5606 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MULT, V4SImode, operands))
    ? (int) 
#line 5606 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (MULT, V4SImode, operands))
    : -1 },
#line 2377 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && TARGET_64BIT",
    __builtin_constant_p 
#line 2377 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    ? (int) 
#line 2377 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    : -1 },
#line 17858 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 17858 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !SIBLING_CALL_P (insn))
    ? (int) 
#line 17858 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !SIBLING_CALL_P (insn))
    : -1 },
#line 10214 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 10214 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 10214 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, HImode, operands)",
    __builtin_constant_p 
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    ? (int) 
#line 10295 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    : -1 },
#line 14793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && ((DImode != DImode) || TARGET_64BIT)\n\
   && !flag_trapping_math && !flag_rounding_math",
    __builtin_constant_p 
#line 14793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    ? (int) 
#line 14793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT)
   && !flag_trapping_math && !flag_rounding_math)
    : -1 },
#line 14787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && ((DImode != DImode) || TARGET_64BIT)",
    __builtin_constant_p 
#line 14787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT))
    ? (int) 
#line 14787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT))
    : -1 },
#line 5127 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5127 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5127 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 15896 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])",
    __builtin_constant_p 
#line 15896 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG]))
    ? (int) 
#line 15896 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG]))
    : -1 },
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && can_create_pseudo_p ())
    ? (int) 
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12349 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12349 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 16956 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && TARGET_SPLIT_LONG_MOVES\n\
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn",
    __builtin_constant_p 
#line 16956 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn)
    ? (int) 
#line 16956 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn)
    : -1 },
#line 3862 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(reload_completed\n\
    && dead_or_set_p (insn, operands[1])\n\
    && !reg_mentioned_p (operands[1], operands[0]))",
    __builtin_constant_p 
#line 3862 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0])))
    ? (int) 
#line 3862 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((reload_completed
    && dead_or_set_p (insn, operands[1])
    && !reg_mentioned_p (operands[1], operands[0])))
    : -1 },
#line 4800 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))",
    __builtin_constant_p 
#line 4800 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    ? (int) 
#line 4800 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    : -1 },
#line 4523 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 4523 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 4523 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    : -1 },
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && ix86_binary_operator_ok (MINUS, V8SFmode, operands)",
    __builtin_constant_p 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (MINUS, V8SFmode, operands))
    ? (int) 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (MINUS, V8SFmode, operands))
    : -1 },
#line 7228 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && TARGET_64BIT",
    __builtin_constant_p 
#line 7228 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT)
    ? (int) 
#line 7228 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT)
    : -1 },
#line 9069 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 9069 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 9069 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 6338 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)",
    __builtin_constant_p 
#line 6338 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode))
    ? (int) 
#line 6338 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode))
    : -1 },
#line 9524 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 9524 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 9524 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 5040 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 5040 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 5040 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 17868 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_VZEROUPPER && TARGET_64BIT && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 17868 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && SIBLING_CALL_P (insn))
    ? (int) 
#line 17868 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && SIBLING_CALL_P (insn))
    : -1 },
#line 4630 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4630 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4630 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 15536 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && TARGET_C99_FUNCTIONS\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15536 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 15536 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_CMOVE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9875 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 827 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9875 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 827 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    ? (int) 
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    : -1 },
#line 400 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)",
    __builtin_constant_p 
#line 400 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode))
    ? (int) 
#line 400 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode))
    : -1 },
#line 1121 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 1121 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 1121 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    : -1 },
  { "(TARGET_64BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 6646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 6648 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 6648 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 4699 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4699 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4699 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands)",
    __builtin_constant_p 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    ? (int) 
#line 1115 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    : -1 },
#line 4486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode))",
    __builtin_constant_p 
#line 4486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    ? (int) 
#line 4486 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    : -1 },
#line 7669 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7669 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7669 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 4233 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_VECTOR_FP_CONVERTS\n\
   && optimize_insn_for_speed_p ()\n\
   && reload_completed && SSE_REG_P (operands[0])",
    __builtin_constant_p 
#line 4233 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed && SSE_REG_P (operands[0]))
    ? (int) 
#line 4233 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed && SSE_REG_P (operands[0]))
    : -1 },
#line 1687 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW",
    __builtin_constant_p 
#line 1687 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    ? (int) 
#line 1687 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    : -1 },
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 757 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
  { "(AVX_VEC_FLOAT_MODE_P (V4DFmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 603 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)) && 
#line 605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 603 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode)) && 
#line 605 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V4DImode, operands)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V4DImode, operands))
    ? (int) 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V4DImode, operands))
    : -1 },
#line 12953 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 12953 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 12953 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 674 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 674 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands))
    ? (int) 
#line 674 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MINUS, V4SFmode, operands))
    : -1 },
#line 5350 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5350 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5350 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4129 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && reload_completed",
    __builtin_constant_p 
#line 4129 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    ? (int) 
#line 4129 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    : -1 },
#line 17011 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (true_regnum (operands[2]) != AX_REG\n\
       || satisfies_constraint_K (operands[3]))\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 17011 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != AX_REG
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 17011 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != AX_REG
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 8662 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 8662 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 8662 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1) && ( 1)",
    __builtin_constant_p (
#line 9834 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 9838 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 9834 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 9838 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 6111 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed\n\
   && ix86_lea_for_add_ok (insn, operands)",
    __builtin_constant_p 
#line 6111 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && ix86_lea_for_add_ok (insn, operands))
    ? (int) 
#line 6111 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && ix86_lea_for_add_ok (insn, operands))
    : -1 },
#line 12014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_CMOVE",
    __builtin_constant_p 
#line 12014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_CMOVE)
    ? (int) 
#line 12014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_CMOVE)
    : -1 },
#line 5829 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5829 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5829 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 9834 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 9834 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 9834 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
  { "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17307 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17307 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
  { "(reload_completed) && (Pmode == DImode)",
    __builtin_constant_p (
#line 4053 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 4053 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 16563 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 16563 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 16563 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(AVX_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    : -1 },
#line 17129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])\n\
   && ((MMX_REG_P (operands[0]) && MMX_REG_P (operands[1])) \n\
       || (SSE_REG_P (operands[0]) && SSE_REG_P (operands[1])))",
    __builtin_constant_p 
#line 17129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && ((MMX_REG_P (operands[0]) && MMX_REG_P (operands[1])) 
       || (SSE_REG_P (operands[0]) && SSE_REG_P (operands[1]))))
    ? (int) 
#line 17129 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && ((MMX_REG_P (operands[0]) && MMX_REG_P (operands[1])) 
       || (SSE_REG_P (operands[0]) && SSE_REG_P (operands[1]))))
    : -1 },
#line 3300 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)",
    __builtin_constant_p 
#line 3300 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    ? (int) 
#line 3300 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    : -1 },
#line 720 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && ix86_binary_operator_ok (MULT, V8SFmode, operands)",
    __builtin_constant_p 
#line 720 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (MULT, V8SFmode, operands))
    ? (int) 
#line 720 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (MULT, V8SFmode, operands))
    : -1 },
#line 17488 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()\n\
   && satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 17488 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2]))
    ? (int) 
#line 17488 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2]))
    : -1 },
#line 8732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 8732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 8732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 8006 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8006 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8006 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 8787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (PLUS, V4SImode, operands)",
    __builtin_constant_p 
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    ? (int) 
#line 5227 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    : -1 },
#line 5421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 8513 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 8513 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 8513 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_BSWAP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12415 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_BSWAP) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12415 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_BSWAP) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4587 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_vec_interleave_v2df_operator_ok (operands, 0)",
    __builtin_constant_p 
#line 4587 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_vec_interleave_v2df_operator_ok (operands, 0))
    ? (int) 
#line 4587 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_vec_interleave_v2df_operator_ok (operands, 0))
    : -1 },
#line 1841 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 1841 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 1841 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 9046 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 9046 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 9046 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
#line 3584 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed && FP_REGNO_P (REGNO (operands[0]))\n\
   && (standard_80387_constant_p (operands[1]) == 8\n\
       || standard_80387_constant_p (operands[1]) == 9)",
    __builtin_constant_p 
#line 3584 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed && FP_REGNO_P (REGNO (operands[0]))
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9))
    ? (int) 
#line 3584 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed && FP_REGNO_P (REGNO (operands[0]))
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9))
    : -1 },
#line 5350 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5350 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5350 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SSE4_2\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 10014 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && can_create_pseudo_p ()) && 
#line 10017 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( 1))
    ? (int) (
#line 10014 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && can_create_pseudo_p ()) && 
#line 10017 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( 1))
    : -1 },
#line 8360 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8360 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8360 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 5350 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5350 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5350 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 17847 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 17847 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn))
    ? (int) 
#line 17847 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn))
    : -1 },
#line 13432 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (SFmode))\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 13432 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (SFmode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 13432 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (SFmode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 4917 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 4917 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    ? (int) 
#line 4917 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    : -1 },
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (UMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    ? (int) 
#line 6144 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    : -1 },
  { "(TARGET_VZEROUPPER && !TARGET_64BIT && SIBLING_CALL_P (insn)) && ( reload_completed)",
    __builtin_constant_p (
#line 17755 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && SIBLING_CALL_P (insn)) && 
#line 17757 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 17755 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT && SIBLING_CALL_P (insn)) && 
#line 17757 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 13144 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (DFmode)\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13144 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13144 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && reload_completed\n\
   && FP_REG_P (operands[0])",
    __builtin_constant_p 
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, DImode)
   && reload_completed
   && FP_REG_P (operands[0]))
    ? (int) 
#line 5470 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, DImode)
   && reload_completed
   && FP_REG_P (operands[0]))
    : -1 },
#line 1688 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(SSE_VEC_FLOAT_MODE_P (V8SFmode)\n\
    || AVX_VEC_FLOAT_MODE_P (V8SFmode))",
    __builtin_constant_p 
#line 1688 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((SSE_VEC_FLOAT_MODE_P (V8SFmode)
    || AVX_VEC_FLOAT_MODE_P (V8SFmode)))
    ? (int) 
#line 1688 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((SSE_VEC_FLOAT_MODE_P (V8SFmode)
    || AVX_VEC_FLOAT_MODE_P (V8SFmode)))
    : -1 },
#line 8980 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE2 && (TFmode == TFmode))",
    __builtin_constant_p 
#line 8980 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (TFmode == TFmode)))
    ? (int) 
#line 8980 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE2 && (TFmode == TFmode)))
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 960 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands)",
    __builtin_constant_p 
#line 960 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    ? (int) 
#line 960 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    : -1 },
  { "(ix86_unary_operator_ok (NEG, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8732 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 6447 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (EQ, V2DImode, operands)",
    __builtin_constant_p 
#line 6447 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V2DImode, operands))
    ? (int) 
#line 6447 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (EQ, V2DImode, operands))
    : -1 },
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 1730 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX256_VEC_FLOAT_MODE_P (V4DFmode)",
    __builtin_constant_p 
#line 1730 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX256_VEC_FLOAT_MODE_P (V4DFmode))
    ? (int) 
#line 1730 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX256_VEC_FLOAT_MODE_P (V4DFmode))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1419 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && 
#line 1424 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1419 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))) && 
#line 1424 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 7757 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_64BIT && TARGET_AVX",
    __builtin_constant_p 
#line 7757 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_AVX)
    ? (int) 
#line 7757 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_AVX)
    : -1 },
#line 16852 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && ! TARGET_FAST_PREFIX\n\
   && optimize_insn_for_speed_p ()\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 16852 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ! TARGET_FAST_PREFIX
   && optimize_insn_for_speed_p ()
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 16852 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ! TARGET_FAST_PREFIX
   && optimize_insn_for_speed_p ()
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    ? (int) 
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    : -1 },
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    ? (int) 
#line 4925 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    : -1 },
#line 1403 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 1403 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 1403 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V8SImode)\n\
       || register_operand (operands[1], V8SImode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode)))
    : -1 },
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6795 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && ( reload_completed)",
    __builtin_constant_p (
#line 6610 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 6616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6610 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 6616 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17318 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17318 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 11539 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_PCLMUL",
    __builtin_constant_p 
#line 11539 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_PCLMUL)
    ? (int) 
#line 11539 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_PCLMUL)
    : -1 },
  { "(TARGET_USE_8BIT_IDIV\n\
   && TARGET_QIMODE_MATH\n\
   && can_create_pseudo_p ()\n\
   && !optimize_insn_for_size_p ()) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 7453 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 7453 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()) && 
#line 796 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 4664 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ()",
    __builtin_constant_p 
#line 4664 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())
    ? (int) 
#line 4664 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE && optimize_insn_for_speed_p ())
    : -1 },
  { "(TARGET_POPCNT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12329 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12329 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 8047 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 8047 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 8047 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
#line 8787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 1127 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands)",
    __builtin_constant_p 
#line 1127 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    ? (int) 
#line 1127 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    : -1 },
#line 9952 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && INTVAL (operands[2]) == 31\n\
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9952 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9952 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 1162 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX128_VEC_FLOAT_MODE_P (V4SFmode)",
    __builtin_constant_p 
#line 1162 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX128_VEC_FLOAT_MODE_P (V4SFmode))
    ? (int) 
#line 1162 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX128_VEC_FLOAT_MODE_P (V4SFmode))
    : -1 },
#line 4567 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4567 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 4567 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 1654 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX",
    __builtin_constant_p 
#line 1654 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX)
    ? (int) 
#line 1654 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX)
    : -1 },
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "(TARGET_SSE && !TARGET_SSE2)\n\
   && ix86_binary_operator_ok (AND, V4SImode, operands)",
    __builtin_constant_p 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V4SImode, operands))
    ? (int) 
#line 6655 "../../gcc-4.6.2/gcc/config/i386/sse.md"
((TARGET_SSE && !TARGET_SSE2)
   && ix86_binary_operator_ok (AND, V4SImode, operands))
    : -1 },
#line 1755 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode)",
    __builtin_constant_p 
#line 1755 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode))
    ? (int) 
#line 1755 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode))
    : -1 },
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    ? (int) 
#line 4671 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    : -1 },
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && can_create_pseudo_p ())
    ? (int) 
#line 4750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && can_create_pseudo_p ())
    : -1 },
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    : -1 },
#line 5385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 12750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SUN_TLS",
    __builtin_constant_p 
#line 12750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SUN_TLS)
    ? (int) 
#line 12750 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SUN_TLS)
    : -1 },
#line 16901 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE\n\
   && (GET_MODE (operands[0]) == HImode\n\
       || (GET_MODE (operands[0]) == QImode\n\
	   && (TARGET_PROMOTE_QImode\n\
	       || optimize_insn_for_size_p ())))",
    __builtin_constant_p 
#line 16901 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ()))))
    ? (int) 
#line 16901 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && TARGET_CMOVE
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ()))))
    : -1 },
#line 5153 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5153 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5153 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 2748 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && MEM_P (operands[1])\n\
   && (operands[2] = find_constant_src (insn))",
    __builtin_constant_p 
#line 2748 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && MEM_P (operands[1])
   && (operands[2] = find_constant_src (insn)))
    ? (int) 
#line 2748 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && MEM_P (operands[1])
   && (operands[2] = find_constant_src (insn)))
    : -1 },
#line 12148 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_BMI",
    __builtin_constant_p 
#line 12148 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_BMI)
    ? (int) 
#line 12148 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_BMI)
    : -1 },
  { "(reload_completed) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 10270 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 826 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 10270 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 826 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (IOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    ? (int) 
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    : -1 },
#line 5966 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 5966 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 5966 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (AND, V4DImode, operands)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V4DImode, operands))
    ? (int) 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (AND, V4DImode, operands))
    : -1 },
#line 13065 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13065 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13065 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 5372 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5372 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5372 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
  { "(optimize_insn_for_speed_p () && !TARGET_PUSH_MEMORY\n\
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 16920 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && !TARGET_PUSH_MEMORY
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 16920 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && !TARGET_PUSH_MEMORY
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 7430 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "reload_completed",
    __builtin_constant_p 
#line 7430 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(reload_completed)
    ? (int) 
#line 7430 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(reload_completed)
    : -1 },
#line 17113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])\n\
   && GENERAL_REGNO_P (REGNO (operands[0]))\n\
   && GENERAL_REGNO_P (REGNO (operands[1]))",
    __builtin_constant_p 
#line 17113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && GENERAL_REGNO_P (REGNO (operands[0]))
   && GENERAL_REGNO_P (REGNO (operands[1])))
    ? (int) 
#line 17113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && GENERAL_REGNO_P (REGNO (operands[0]))
   && GENERAL_REGNO_P (REGNO (operands[1])))
    : -1 },
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    ? (int) 
#line 9998 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    : -1 },
#line 7801 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_64BIT && TARGET_SSE",
    __builtin_constant_p 
#line 7801 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE)
    ? (int) 
#line 7801 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE)
    : -1 },
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V4DImode, operands)",
    __builtin_constant_p 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V4DImode, operands))
    ? (int) 
#line 6643 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V4DImode, operands))
    : -1 },
#line 17766 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 17766 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (insn))
    ? (int) 
#line 17766 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (insn))
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math) && (TARGET_64BIT)",
    __builtin_constant_p 
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math) && (TARGET_64BIT))
    ? (int) 
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math) && (TARGET_64BIT))
    : -1 },
#line 1355 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && !TARGET_SSE",
    __builtin_constant_p 
#line 1355 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    ? (int) 
#line 1355 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    : -1 },
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (XOR, V16QImode, operands)",
    __builtin_constant_p 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V16QImode, operands))
    ? (int) 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (XOR, V16QImode, operands))
    : -1 },
#line 740 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (MULT, V4SFmode, operands)",
    __builtin_constant_p 
#line 740 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    ? (int) 
#line 740 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    : -1 },
#line 5085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 5085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 5085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    : -1 },
#line 5085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 5085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 5085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    : -1 },
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && ix86_binary_operator_ok (XOR, V8SFmode, operands)",
    __builtin_constant_p 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (XOR, V8SFmode, operands))
    ? (int) 
#line 1738 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (XOR, V8SFmode, operands))
    : -1 },
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands)",
    __builtin_constant_p 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands))
    ? (int) 
#line 776 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands))
    : -1 },
#line 11599 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT",
    __builtin_constant_p 
#line 11599 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT)
    ? (int) 
#line 11599 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT)
    : -1 },
#line 2087 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2087 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2087 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 15459 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 15459 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 15459 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 12085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_ABM || TARGET_BMI",
    __builtin_constant_p 
#line 12085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_ABM || TARGET_BMI)
    ? (int) 
#line 12085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_ABM || TARGET_BMI)
    : -1 },
#line 8360 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8360 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8360 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 17644 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_VZEROUPPER && !TARGET_64BIT",
    __builtin_constant_p 
#line 17644 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT)
    ? (int) 
#line 17644 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && !TARGET_64BIT)
    : -1 },
#line 1419 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))\n\
   && (GET_MODE (operands [3]) == GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 1419 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    ? (int) 
#line 1419 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))
   && (GET_MODE (operands [3]) == GET_MODE (operands[1])))
    : -1 },
#line 6892 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 6892 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 6892 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 1127 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)",
    __builtin_constant_p 
#line 1127 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    ? (int) 
#line 1127 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode) && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands))
    : -1 },
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands)",
    __builtin_constant_p 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    ? (int) 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    : -1 },
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "SSE_VEC_FLOAT_MODE_P (V4SFmode)\n\
   && ix86_binary_operator_ok (XOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    ? (int) 
#line 1763 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V4SFmode)
   && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    : -1 },
#line 6610 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])",
    __builtin_constant_p 
#line 6610 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    ? (int) 
#line 6610 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == SImode))
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    : -1 },
#line 1162 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX128_VEC_FLOAT_MODE_P (V2DFmode)",
    __builtin_constant_p 
#line 1162 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX128_VEC_FLOAT_MODE_P (V2DFmode))
    ? (int) 
#line 1162 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX128_VEC_FLOAT_MODE_P (V2DFmode))
    : -1 },
#line 5621 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(TARGET_64BIT || TARGET_KEEPS_VECTOR_ALIGNED_STACK)\n\
   && TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5621 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_64BIT || TARGET_KEEPS_VECTOR_ALIGNED_STACK)
   && TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 5621 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((TARGET_64BIT || TARGET_KEEPS_VECTOR_ALIGNED_STACK)
   && TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
  { "(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 16159 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 16159 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 8089 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 8089 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    ? (int) 
#line 8089 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    : -1 },
#line 6201 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 6201 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    ? (int) 
#line 6201 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    : -1 },
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
#line 1825 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 1825 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 1825 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_FLOAT_MODE_P (SFmode))
    : -1 },
#line 10636 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 10636 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 10636 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)))
    : -1 },
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    ? (int) 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    : -1 },
#line 15510 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && TARGET_C99_FUNCTIONS",
    __builtin_constant_p 
#line 15510 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS)
    ? (int) 
#line 15510 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS)
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V16HImode)\n\
       || register_operand (operands[1], V16HImode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode)))
    : -1 },
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))
    ? (int) 
#line 5268 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))
    : -1 },
#line 2070 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_FMA || TARGET_FMA4",
    __builtin_constant_p 
#line 2070 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)
    ? (int) 
#line 2070 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)
    : -1 },
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 10078 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
#line 3240 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 3240 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 3240 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 400 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V4DFmode)",
    __builtin_constant_p 
#line 400 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode))
    ? (int) 
#line 400 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V4DFmode))
    : -1 },
#line 3691 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3691 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3691 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
#line 6735 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6735 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6735 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 92 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4A",
    __builtin_constant_p 
#line 92 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4A)
    ? (int) 
#line 92 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4A)
    : -1 },
#line 6256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 6256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    ? (int) 
#line 6256 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    : -1 },
  { "(ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6735 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6735 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 7625 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7625 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7625 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 5085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 5085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 5085 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    : -1 },
  { "(TARGET_CMOVE) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 9875 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 826 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 9875 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 826 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 7520 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "!TARGET_64BIT\n\
   && TARGET_AVX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7520 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_64BIT
   && TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7520 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(!TARGET_64BIT
   && TARGET_AVX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 997 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)",
    __builtin_constant_p 
#line 997 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    ? (int) 
#line 997 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    : -1 },
#line 14787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && ((DImode != DImode) || TARGET_64BIT)",
    __builtin_constant_p 
#line 14787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT))
    ? (int) 
#line 14787 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && ((DImode != DImode) || TARGET_64BIT))
    : -1 },
#line 9628 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 9628 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 9628 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 5018 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 5018 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 5018 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 6312 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 6312 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    ? (int) 
#line 6312 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    : -1 },
#line 4609 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4609 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 4609 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    : -1 },
#line 6167 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 6167 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    ? (int) 
#line 6167 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    : -1 },
#line 17224 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && peep2_regno_dead_p (0, FLAGS_REG)\n\
   && REGNO (operands[0]) == REGNO (operands[1])",
    __builtin_constant_p 
#line 17224 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && peep2_regno_dead_p (0, FLAGS_REG)
   && REGNO (operands[0]) == REGNO (operands[1]))
    ? (int) 
#line 17224 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && peep2_regno_dead_p (0, FLAGS_REG)
   && REGNO (operands[0]) == REGNO (operands[1]))
    : -1 },
  { "(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)) && ( reload_completed)",
    __builtin_constant_p (
#line 17847 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)) && 
#line 17849 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 17847 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_VZEROUPPER && TARGET_64BIT && !SIBLING_CALL_P (insn)) && 
#line 17849 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 544 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)",
    __builtin_constant_p 
#line 544 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    ? (int) 
#line 544 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    : -1 },
#line 5527 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)\n\
   && reload_completed\n\
   && FP_REG_P (operands[0])",
    __builtin_constant_p 
#line 5527 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed
   && FP_REG_P (operands[0]))
    ? (int) 
#line 5527 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed
   && FP_REG_P (operands[0]))
    : -1 },
#line 848 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 848 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 848 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 7780 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_64BIT && TARGET_SSE4_1",
    __builtin_constant_p 
#line 7780 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE4_1)
    ? (int) 
#line 7780 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE4_1)
    : -1 },
#line 5127 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5127 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5127 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4846 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4846 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4846 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands)",
    __builtin_constant_p 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands))
    ? (int) 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (XOR, V4SImode, operands))
    : -1 },
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands)",
    __builtin_constant_p 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands))
    ? (int) 
#line 6678 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (IOR, V8HImode, operands))
    : -1 },
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((DImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 1525 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSE3",
    __builtin_constant_p 
#line 1525 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3)
    ? (int) 
#line 1525 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSE3)
    : -1 },
  { "(TARGET_3DNOW) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17943 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_3DNOW) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17943 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_3DNOW) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 17235 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "exact_log2 (INTVAL (operands[1])) >= 0\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17235 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17235 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))
    ? (int) 
#line 5257 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))
    : -1 },
#line 16969 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 16969 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 16969 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 3243 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_INTEGER_DFMODE_MOVES)\n\
   && (reload_in_progress || reload_completed\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)\n\
           && optimize_function_for_size_p (cfun)\n\
           && !memory_operand (operands[0], DFmode)\n\
	   && standard_80387_constant_p (operands[1]) > 0)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || ((optimize_function_for_size_p (cfun)\n\
            || !TARGET_MEMORY_MISMATCH_STALL)\n\
 	   && memory_operand (operands[0], DFmode)))",
    __builtin_constant_p 
#line 3243 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (optimize_function_for_size_p (cfun)
       || !TARGET_INTEGER_DFMODE_MOVES)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)
           && optimize_function_for_size_p (cfun)
           && !memory_operand (operands[0], DFmode)
	   && standard_80387_constant_p (operands[1]) > 0)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || ((optimize_function_for_size_p (cfun)
            || !TARGET_MEMORY_MISMATCH_STALL)
 	   && memory_operand (operands[0], DFmode))))
    ? (int) 
#line 3243 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (optimize_function_for_size_p (cfun)
       || !TARGET_INTEGER_DFMODE_MOVES)
   && (reload_in_progress || reload_completed
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || (!(TARGET_SSE2 && TARGET_SSE_MATH)
           && optimize_function_for_size_p (cfun)
           && !memory_operand (operands[0], DFmode)
	   && standard_80387_constant_p (operands[1]) > 0)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || ((optimize_function_for_size_p (cfun)
            || !TARGET_MEMORY_MISMATCH_STALL)
 	   && memory_operand (operands[0], DFmode))))
    : -1 },
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((SImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4985 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT))
    : -1 },
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 196 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    : -1 },
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands)",
    __builtin_constant_p 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    ? (int) 
#line 1108 "../../gcc-4.6.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    : -1 },
#line 12056 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX",
    __builtin_constant_p 
#line 12056 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX)
    ? (int) 
#line 12056 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX)
    : -1 },
#line 8760 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8760 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8760 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(SSE_VEC_FLOAT_MODE_P (V2DFmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 626 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)) && 
#line 628 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 626 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(SSE_VEC_FLOAT_MODE_P (V2DFmode)) && 
#line 628 "../../gcc-4.6.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 2677 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES",
    __builtin_constant_p 
#line 2677 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES)
    ? (int) 
#line 2677 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES)
    : -1 },
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && ix86_binary_operator_ok (SMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    ? (int) 
#line 6178 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    : -1 },
#line 9177 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_SSSE3",
    __builtin_constant_p 
#line 9177 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSSE3)
    ? (int) 
#line 9177 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_SSSE3)
    : -1 },
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "AVX_VEC_FLOAT_MODE_P (V8SFmode)\n\
   && ix86_binary_operator_ok (PLUS, V8SFmode, operands)",
    __builtin_constant_p 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (PLUS, V8SFmode, operands))
    ? (int) 
#line 654 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(AVX_VEC_FLOAT_MODE_P (V8SFmode)
   && ix86_binary_operator_ok (PLUS, V8SFmode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT))
    : -1 },
#line 5385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 11303 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_XOP",
    __builtin_constant_p 
#line 11303 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_XOP)
    ? (int) 
#line 11303 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_XOP)
    : -1 },
#line 5067 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387\n\
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5067 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5067 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    : -1 },
#line 2694 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "!(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES)",
    __builtin_constant_p 
#line 2694 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES))
    ? (int) 
#line 2694 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(TARGET_64BIT || TARGET_INTEGER_DFMODE_MOVES))
    : -1 },
  { "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17385 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 8421 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 5407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(SImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5407 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((SImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
#line 16942 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && !TARGET_USE_MOV0\n\
   && TARGET_SPLIT_LONG_MOVES\n\
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16942 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && !TARGET_USE_MOV0
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16942 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && !TARGET_USE_MOV0
   && TARGET_SPLIT_LONG_MOVES
   && get_attr_length (insn) >= ix86_cur_cost ()->large_insn
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 8821 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "reload_completed && SSE_REG_P (operands[0])",
    __builtin_constant_p 
#line 8821 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    ? (int) 
#line 8821 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    : -1 },
  { "(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 7087 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 826 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 7087 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 826 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 8397 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8397 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8397 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 15301 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 15301 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 15301 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
  { "(ix86_match_ccmode (insn, CCGOCmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6377 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6377 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 781 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "(DImode != DImode || TARGET_64BIT)\n\
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (operands[0])))",
    __builtin_constant_p 
#line 5113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    ? (int) 
#line 5113 "../../gcc-4.6.2/gcc/config/i386/i386.md"
((DImode != DImode || TARGET_64BIT)
   && SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (operands[0]))))
    : -1 },
  { "(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15757 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15757 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 10022 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 10022 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    ? (int) 
#line 10022 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    : -1 },
#line 805 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_HIMODE_MATH",
    __builtin_constant_p 
#line 805 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    ? (int) 
#line 805 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    : -1 },
#line 10477 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_BT || reload_completed)",
    __builtin_constant_p 
#line 10477 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    ? (int) 
#line 10477 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    : -1 },
#line 12472 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "! TARGET_POPCNT",
    __builtin_constant_p 
#line 12472 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_POPCNT)
    ? (int) 
#line 12472 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(! TARGET_POPCNT)
    : -1 },
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && ix86_binary_operator_ok (IOR, V4SImode, operands)",
    __builtin_constant_p 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V4SImode, operands))
    ? (int) 
#line 6666 "../../gcc-4.6.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && ix86_binary_operator_ok (IOR, V4SImode, operands))
    : -1 },
#line 8397 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8397 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8397 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 18311 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "TARGET_LWP",
    __builtin_constant_p 
#line 18311 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_LWP)
    ? (int) 
#line 18311 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_LWP)
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p 
((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT))
    ? (int) 
((ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT))
    : -1 },
  { "(INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17373 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17373 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (Pmode)) && 
#line 932 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 14646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math && !flag_rounding_math",
    __builtin_constant_p 
#line 14646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math && !flag_rounding_math)
    ? (int) 
#line 14646 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math && !flag_rounding_math)
    : -1 },
  { "(ix86_binary_operator_ok (ROTATE, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1) && ( 1)",
    __builtin_constant_p (
#line 10214 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 10218 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 10214 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 10218 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1) && ( 1)",
    __builtin_constant_p (
#line 9834 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 9838 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 9834 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 9838 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(!TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 12014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_CMOVE) && 
#line 12016 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 12014 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(!TARGET_CMOVE) && 
#line 12016 "../../gcc-4.6.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(ix86_unary_operator_ok (NOT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9037 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, DImode, operands)) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9037 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, DImode, operands)) && 
#line 793 "../../gcc-4.6.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
