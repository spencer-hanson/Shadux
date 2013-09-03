/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 1866:  /* sync_xorsi */
    case 1865:  /* sync_iorsi */
    case 1864:  /* sync_andsi */
    case 1863:  /* sync_xorhi */
    case 1862:  /* sync_iorhi */
    case 1861:  /* sync_andhi */
    case 1860:  /* sync_xorqi */
    case 1859:  /* sync_iorqi */
    case 1858:  /* sync_andqi */
    case 1857:  /* sync_subsi */
    case 1856:  /* sync_subhi */
    case 1855:  /* sync_subqi */
    case 1854:  /* sync_addsi */
    case 1853:  /* sync_addhi */
    case 1852:  /* sync_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1851:  /* sync_lock_test_and_setsi */
    case 1850:  /* sync_lock_test_and_sethi */
    case 1849:  /* sync_lock_test_and_setqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1848:  /* sync_old_addsi */
    case 1847:  /* sync_old_addhi */
    case 1846:  /* sync_old_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1845:  /* *sync_double_compare_and_swapdi_pic */
    case 1844:  /* sync_double_compare_and_swapdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 3);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 2);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[6] = 1;
      break;

    case 1843:  /* *sync_compare_and_swapsi */
    case 1842:  /* *sync_compare_and_swaphi */
    case 1841:  /* *sync_compare_and_swapqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 1;
      break;

    case 1840:  /* memory_barrier_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1837:  /* *vcvtps2ph */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1824:  /* avx_maskstorepd256 */
    case 1823:  /* avx_maskstoreps256 */
    case 1822:  /* avx_maskstorepd */
    case 1821:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 1804:  /* *avx_vperm2f128v4df_nozero */
    case 1803:  /* *avx_vperm2f128v8sf_nozero */
    case 1802:  /* *avx_vperm2f128v8si_nozero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1794:  /* *avx_vpermilpv4df */
    case 1793:  /* *avx_vpermilpv8sf */
    case 1792:  /* *avx_vpermilpv2df */
    case 1791:  /* *avx_vpermilpv4sf */
    case 1790:  /* *avx_vperm_broadcast_v4df */
    case 1789:  /* *avx_vperm_broadcast_v8sf */
    case 1788:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1755:  /* xop_maskcmp_uns2v2di3 */
    case 1754:  /* xop_maskcmp_uns2v4si3 */
    case 1753:  /* xop_maskcmp_uns2v8hi3 */
    case 1752:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1735:  /* xop_lshlv2di3 */
    case 1734:  /* xop_lshlv4si3 */
    case 1733:  /* xop_lshlv8hi3 */
    case 1732:  /* xop_lshlv16qi3 */
    case 1731:  /* xop_ashlv2di3 */
    case 1730:  /* xop_ashlv4si3 */
    case 1729:  /* xop_ashlv8hi3 */
    case 1728:  /* xop_ashlv16qi3 */
    case 1727:  /* xop_vrotlv2di3 */
    case 1726:  /* xop_vrotlv4si3 */
    case 1725:  /* xop_vrotlv8hi3 */
    case 1724:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 1715:  /* xop_pperm_pack_v8hi_v16qi */
    case 1714:  /* xop_pperm_pack_v4si_v8hi */
    case 1713:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1705:  /* xop_phaddubq */
    case 1699:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 1707:  /* xop_phadduwq */
    case 1704:  /* xop_phaddubd */
    case 1701:  /* xop_phaddwq */
    case 1698:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1711:  /* xop_phsubdq */
    case 1710:  /* xop_phsubwd */
    case 1709:  /* xop_phsubbw */
    case 1708:  /* xop_phaddudq */
    case 1706:  /* xop_phadduwd */
    case 1703:  /* xop_phaddubw */
    case 1702:  /* xop_phadddq */
    case 1700:  /* xop_phaddwd */
    case 1697:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1696:  /* xop_pcmov_v4df256 */
    case 1695:  /* xop_pcmov_v8sf256 */
    case 1694:  /* xop_pcmov_v4di256 */
    case 1693:  /* xop_pcmov_v8si256 */
    case 1692:  /* xop_pcmov_v16hi256 */
    case 1691:  /* xop_pcmov_v32qi256 */
    case 1690:  /* xop_pcmov_v2df */
    case 1689:  /* xop_pcmov_v4sf */
    case 1688:  /* xop_pcmov_v2di */
    case 1687:  /* xop_pcmov_v4si */
    case 1686:  /* xop_pcmov_v8hi */
    case 1685:  /* xop_pcmov_v16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1684:  /* xop_pmadcswd */
    case 1683:  /* xop_pmadcsswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1682:  /* xop_pmacswd */
    case 1681:  /* xop_pmacsswd */
    case 1679:  /* xop_pmacsdqh */
    case 1677:  /* xop_pmacsdql */
    case 1676:  /* xop_pmacssdqh */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1675:  /* xop_pmacssdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1670:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1669:  /* sse4_2_pcmpistrm */
    case 1668:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1667:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1666:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 1665:  /* sse4_2_pcmpestrm */
    case 1664:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 1663:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 1662:  /* sse4_1_roundsd */
    case 1661:  /* sse4_1_roundss */
    case 1660:  /* *avx_roundsd */
    case 1659:  /* *avx_roundss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1654:  /* sse4_1_ptest */
    case 1653:  /* avx_ptest256 */
    case 1652:  /* avx_vtestpd256 */
    case 1651:  /* avx_vtestps256 */
    case 1650:  /* avx_vtestpd */
    case 1649:  /* avx_vtestps */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1635:  /* sse4_1_pblendw */
    case 1634:  /* *avx_pblendw */
    case 1618:  /* sse4_1_blendpd */
    case 1617:  /* sse4_1_blendps */
    case 1612:  /* avx_blendpd256 */
    case 1611:  /* avx_blendps256 */
    case 1610:  /* avx_blendpd */
    case 1609:  /* avx_blendps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1763:  /* xop_vpermil2v4df3 */
    case 1762:  /* xop_vpermil2v8sf3 */
    case 1761:  /* xop_vpermil2v2df3 */
    case 1760:  /* xop_vpermil2v4sf3 */
    case 1607:  /* sse4a_insertqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 1579:  /* *ssse3_pmulhrswv4hi3 */
    case 1578:  /* *ssse3_pmulhrswv8hi3 */
    case 1577:  /* *avx_pmulhrswv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 1572:  /* ssse3_phsubswv8hi3 */
    case 1571:  /* *avx_phsubswv8hi3 */
    case 1566:  /* ssse3_phsubwv8hi3 */
    case 1565:  /* *avx_phsubwv8hi3 */
    case 1563:  /* ssse3_phaddswv8hi3 */
    case 1562:  /* *avx_phaddswv8hi3 */
    case 1557:  /* ssse3_phaddwv8hi3 */
    case 1556:  /* *avx_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1554:  /* sse3_mwait */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1514:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1787:  /* avx_vbroadcastf128_v4df */
    case 1786:  /* avx_vbroadcastf128_v8sf */
    case 1785:  /* avx_vbroadcastf128_v4di */
    case 1784:  /* avx_vbroadcastf128_v8si */
    case 1783:  /* avx_vbroadcastf128_v16hi */
    case 1782:  /* avx_vbroadcastf128_v32qi */
    case 1303:  /* *vec_concatv2df_sse3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1289:  /* sse2_shufpd_v2di */
    case 1288:  /* sse2_shufpd_v2df */
    case 1287:  /* *avx_shufpd_v2di */
    case 1286:  /* *avx_shufpd_v2df */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1518:  /* *vec_ext_v4si_mem */
    case 1511:  /* *sse4_1_pextrd */
    case 1510:  /* *sse4_1_pextrw_memory */
    case 1508:  /* *sse4_1_pextrb_memory */
    case 1272:  /* *vec_extract_v4sf_mem */
    case 1271:  /* *sse4_1_extractps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1257:  /* sse4_1_insertps */
    case 1256:  /* *avx_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1516:  /* sse2_loadld */
    case 1515:  /* *avx_loadld */
    case 1253:  /* vec_setv4si_0 */
    case 1252:  /* vec_setv4sf_0 */
    case 1251:  /* *vec_setv4si_0_sse2 */
    case 1250:  /* *vec_setv4sf_0_sse2 */
    case 1249:  /* *vec_setv4si_0_sse4_1 */
    case 1248:  /* *vec_setv4sf_0_sse4_1 */
    case 1247:  /* *vec_setv4si_0_avx */
    case 1246:  /* *vec_setv4sf_0_avx */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1300:  /* sse2_movsd */
    case 1299:  /* *avx_movsd */
    case 1238:  /* sse_movss */
    case 1237:  /* *avx_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1815:  /* vec_set_lo_v32qi */
    case 1813:  /* vec_set_lo_v16hi */
    case 1810:  /* vec_set_lo_v8sf */
    case 1809:  /* vec_set_lo_v8si */
    case 1806:  /* vec_set_lo_v4df */
    case 1805:  /* vec_set_lo_v4di */
    case 1296:  /* sse2_loadlpd */
    case 1295:  /* *avx_loadlpd */
    case 1236:  /* sse_loadlps */
    case 1235:  /* *avx_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1281:  /* avx_shufpd256_1 */
    case 1229:  /* sse_shufps_v4si */
    case 1228:  /* sse_shufps_v4sf */
    case 1227:  /* *avx_shufps_v4si */
    case 1226:  /* *avx_shufps_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1225:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1224:  /* sse3_movsldup */
    case 1223:  /* avx_movsldup256 */
    case 1222:  /* sse3_movshdup */
    case 1221:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1834:  /* vcvtph2ps */
    case 1171:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 1205:  /* sse2_cvtss2sd */
    case 1204:  /* *avx_cvtss2sd */
    case 1203:  /* sse2_cvtsd2ss */
    case 1202:  /* *avx_cvtsd2ss */
    case 1191:  /* sse2_cvtsi2sd */
    case 1190:  /* *avx_cvtsi2sd */
    case 1174:  /* sse_cvtsi2ss */
    case 1173:  /* *avx_cvtsi2ss */
    case 1170:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1169:  /* *fma_fmsubadd_v4df */
    case 1168:  /* *fma_fmsubadd_v8sf */
    case 1167:  /* *fma_fmsubadd_v2df */
    case 1166:  /* *fma_fmsubadd_v4sf */
    case 1137:  /* *fma4_fmsubadd_v4df */
    case 1136:  /* *fma4_fmsubadd_v8sf */
    case 1135:  /* *fma4_fmsubadd_v2df */
    case 1134:  /* *fma4_fmsubadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 1129:  /* *fma4i_vmfnmsub_v2df */
    case 1128:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1127:  /* *fma4i_vmfnmadd_v2df */
    case 1126:  /* *fma4i_vmfnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1125:  /* *fma4i_vmfmsub_v2df */
    case 1124:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1123:  /* *fma4i_vmfmadd_v2df */
    case 1122:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1161:  /* *fma_fnmsub_v4df */
    case 1160:  /* *fma_fnmsub_v8sf */
    case 1159:  /* *fma_fnmsub_v2df */
    case 1158:  /* *fma_fnmsub_v4sf */
    case 1157:  /* *fma_fnmsub_df */
    case 1156:  /* *fma_fnmsub_sf */
    case 1121:  /* *fma4i_fnmsub_v4df */
    case 1120:  /* *fma4i_fnmsub_v8sf */
    case 1119:  /* *fma4i_fnmsub_v2df */
    case 1118:  /* *fma4i_fnmsub_v4sf */
    case 1117:  /* *fma4i_fnmsub_df */
    case 1116:  /* *fma4i_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1155:  /* *fma_fnmadd_v4df */
    case 1154:  /* *fma_fnmadd_v8sf */
    case 1153:  /* *fma_fnmadd_v2df */
    case 1152:  /* *fma_fnmadd_v4sf */
    case 1151:  /* *fma_fnmadd_df */
    case 1150:  /* *fma_fnmadd_sf */
    case 1115:  /* *fma4i_fnmadd_v4df */
    case 1114:  /* *fma4i_fnmadd_v8sf */
    case 1113:  /* *fma4i_fnmadd_v2df */
    case 1112:  /* *fma4i_fnmadd_v4sf */
    case 1111:  /* *fma4i_fnmadd_df */
    case 1110:  /* *fma4i_fnmadd_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1149:  /* *fma_fmsub_v4df */
    case 1148:  /* *fma_fmsub_v8sf */
    case 1147:  /* *fma_fmsub_v2df */
    case 1146:  /* *fma_fmsub_v4sf */
    case 1145:  /* *fma_fmsub_df */
    case 1144:  /* *fma_fmsub_sf */
    case 1109:  /* *fma4i_fmsub_v4df */
    case 1108:  /* *fma4i_fmsub_v8sf */
    case 1107:  /* *fma4i_fmsub_v2df */
    case 1106:  /* *fma4i_fmsub_v4sf */
    case 1105:  /* *fma4i_fmsub_df */
    case 1104:  /* *fma4i_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1057:  /* sse2_ucomi */
    case 1056:  /* sse_ucomi */
    case 1055:  /* sse2_comi */
    case 1054:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1053:  /* sse2_vmmaskcmpv2df3 */
    case 1052:  /* sse_vmmaskcmpv4sf3 */
    case 1051:  /* *avx_vmmaskcmpv2df3 */
    case 1050:  /* *avx_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1041:  /* avx_cmpsdv2df3 */
    case 1040:  /* avx_cmpssv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1027:  /* avx_hsubv8sf3 */
    case 1026:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1573:  /* ssse3_phsubswv4hi3 */
    case 1569:  /* ssse3_phsubdv4si3 */
    case 1568:  /* *avx_phsubdv4si3 */
    case 1567:  /* ssse3_phsubwv4hi3 */
    case 1564:  /* ssse3_phaddswv4hi3 */
    case 1560:  /* ssse3_phadddv4si3 */
    case 1559:  /* *avx_phadddv4si3 */
    case 1558:  /* ssse3_phaddwv4hi3 */
    case 1031:  /* sse3_hsubv4sf3 */
    case 1030:  /* sse3_haddv4sf3 */
    case 1029:  /* *avx_hsubv4sf3 */
    case 1028:  /* *avx_haddv4sf3 */
    case 1025:  /* avx_hsubv4df3 */
    case 1024:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1743:  /* *xop_vmfrcz_v2df */
    case 1742:  /* *xop_vmfrcz_v4sf */
    case 1199:  /* *sse2_cvtpd2dq */
    case 973:  /* sse_vmrsqrtv4sf2 */
    case 972:  /* *avx_vmrsqrtv4sf2 */
    case 961:  /* sse_vmrcpv4sf2 */
    case 960:  /* *avx_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1005:  /* sse2_vmsminv2df3 */
    case 1004:  /* sse2_vmsmaxv2df3 */
    case 1003:  /* sse_vmsminv4sf3 */
    case 1002:  /* sse_vmsmaxv4sf3 */
    case 1001:  /* *avx_vmsminv2df3 */
    case 1000:  /* *avx_vmsmaxv2df3 */
    case 999:  /* *avx_vmsminv4sf3 */
    case 998:  /* *avx_vmsmaxv4sf3 */
    case 957:  /* sse2_vmdivv2df3 */
    case 956:  /* sse_vmdivv4sf3 */
    case 955:  /* *avx_vmdivv2df3 */
    case 954:  /* *avx_vmdivv4sf3 */
    case 945:  /* sse2_vmmulv2df3 */
    case 944:  /* sse_vmmulv4sf3 */
    case 943:  /* *avx_vmmulv2df3 */
    case 942:  /* *avx_vmmulv4sf3 */
    case 935:  /* sse2_vmsubv2df3 */
    case 934:  /* sse2_vmaddv2df3 */
    case 933:  /* sse_vmsubv4sf3 */
    case 932:  /* sse_vmaddv4sf3 */
    case 931:  /* *avx_vmsubv2df3 */
    case 930:  /* *avx_vmaddv2df3 */
    case 929:  /* *avx_vmsubv4sf3 */
    case 928:  /* *avx_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1776:  /* *avx_vzeroall */
    case 865:  /* *mmx_femms */
    case 864:  /* *mmx_emms */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 1547:  /* *sse2_maskmovdqu */
    case 863:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1513:  /* sse2_pshuflw_1 */
    case 1512:  /* sse2_pshufd_1 */
    case 852:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1509:  /* *sse2_pextrw_si */
    case 1507:  /* *sse4_1_pextrb_si */
    case 851:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 1506:  /* *sse4_1_pinsrd */
    case 1505:  /* *sse2_pinsrw */
    case 1504:  /* *sse4_1_pinsrb */
    case 1503:  /* *avx_pinsrd */
    case 1502:  /* *avx_pinsrw */
    case 1501:  /* *avx_pinsrb */
    case 1255:  /* *vec_setv4sf_sse4_1 */
    case 1254:  /* *vec_setv4sf_avx */
    case 850:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1500:  /* vec_interleave_lowv4si */
    case 1499:  /* *avx_interleave_lowv4si */
    case 1498:  /* vec_interleave_highv4si */
    case 1497:  /* *avx_interleave_highv4si */
    case 1496:  /* vec_interleave_lowv8hi */
    case 1495:  /* *avx_interleave_lowv8hi */
    case 1494:  /* vec_interleave_highv8hi */
    case 1493:  /* *avx_interleave_highv8hi */
    case 1492:  /* vec_interleave_lowv16qi */
    case 1491:  /* *avx_interleave_lowv16qi */
    case 1490:  /* vec_interleave_highv16qi */
    case 1489:  /* *avx_interleave_highv16qi */
    case 1285:  /* vec_interleave_lowv2di */
    case 1284:  /* *avx_interleave_lowv2di */
    case 1283:  /* vec_interleave_highv2di */
    case 1282:  /* *avx_interleave_highv2di */
    case 1280:  /* *sse2_interleave_lowv2df */
    case 1279:  /* *sse3_interleave_lowv2df */
    case 1278:  /* *avx_interleave_lowv2df */
    case 1277:  /* *avx_unpcklpd256 */
    case 1276:  /* *sse2_interleave_highv2df */
    case 1275:  /* *sse3_interleave_highv2df */
    case 1274:  /* *avx_interleave_highv2df */
    case 1273:  /* avx_unpckhpd256 */
    case 1220:  /* vec_interleave_lowv4sf */
    case 1219:  /* *avx_interleave_lowv4sf */
    case 1218:  /* avx_unpcklps256 */
    case 1217:  /* vec_interleave_highv4sf */
    case 1216:  /* *avx_interleave_highv4sf */
    case 1215:  /* avx_unpckhps256 */
    case 1214:  /* sse_movlhps */
    case 1213:  /* *avx_movlhps */
    case 1212:  /* sse_movhlps */
    case 1211:  /* *avx_movhlps */
    case 849:  /* mmx_punpckldq */
    case 848:  /* mmx_punpckhdq */
    case 847:  /* mmx_punpcklwd */
    case 846:  /* mmx_punpckhwd */
    case 845:  /* mmx_punpcklbw */
    case 844:  /* mmx_punpckhbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1631:  /* sse4_1_packusdw */
    case 1630:  /* *avx_packusdw */
    case 1488:  /* sse2_packuswb */
    case 1487:  /* *avx_packuswb */
    case 1486:  /* sse2_packssdw */
    case 1485:  /* *avx_packssdw */
    case 1484:  /* sse2_packsswb */
    case 1483:  /* *avx_packsswb */
    case 843:  /* mmx_packuswb */
    case 842:  /* mmx_packssdw */
    case 841:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1680:  /* xop_mulv2div2di3_high */
    case 1678:  /* xop_mulv2div2di3_low */
    case 1348:  /* *sse4_1_mulv2siv2di3 */
    case 1347:  /* *avx_mulv2siv2di3 */
    case 1346:  /* *sse2_umulv2siv2di3 */
    case 1345:  /* *avx_umulv2siv2di3 */
    case 810:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1539:  /* *sse2_uavgv8hi3 */
    case 1538:  /* *avx_uavgv8hi3 */
    case 1537:  /* *sse2_uavgv16qi3 */
    case 1536:  /* *avx_uavgv16qi3 */
    case 860:  /* *mmx_uavgv4hi3 */
    case 859:  /* *mmx_uavgv8qi3 */
    case 809:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 1576:  /* ssse3_pmaddubsw */
    case 1575:  /* ssse3_pmaddubsw128 */
    case 1574:  /* *avx_pmaddubsw128 */
    case 1350:  /* *sse2_pmaddwd */
    case 1349:  /* *avx_pmaddwd */
    case 808:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1344:  /* *umulv8hi3_highpart */
    case 1343:  /* *smulv8hi3_highpart */
    case 1342:  /* *avx_umulv8hi3_highpart */
    case 1341:  /* *avx_smulv8hi3_highpart */
    case 807:  /* *mmx_umulv4hi3_highpart */
    case 806:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 782:  /* mmx_pi2fw */
    case 781:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1023:  /* sse3_addsubv2df3 */
    case 1022:  /* *avx_addsubv2df3 */
    case 1021:  /* sse3_addsubv4sf3 */
    case 1020:  /* *avx_addsubv4sf3 */
    case 1019:  /* avx_addsubv4df3 */
    case 1018:  /* avx_addsubv8sf3 */
    case 776:  /* mmx_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1570:  /* ssse3_phsubdv2si3 */
    case 1561:  /* ssse3_phadddv2si3 */
    case 1035:  /* sse3_hsubv2df3 */
    case 1034:  /* sse3_haddv2df3 */
    case 1033:  /* *avx_hsubv2df3 */
    case 1032:  /* *avx_haddv2df3 */
    case 775:  /* mmx_hsubv2sf3 */
    case 774:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 748:  /* *lwp_lwpinssi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1555:  /* sse3_monitor */
    case 747:  /* *lwp_lwpvalsi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 744:  /* *rdtscp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 733:  /* *prefetch_sse_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 1816:  /* vec_set_hi_v32qi */
    case 1814:  /* vec_set_hi_v16hi */
    case 1812:  /* vec_set_hi_v8sf */
    case 1811:  /* vec_set_hi_v8si */
    case 1808:  /* vec_set_hi_v4df */
    case 1807:  /* vec_set_hi_v4di */
    case 1431:  /* *andnottf3 */
    case 1430:  /* sse2_andnotv2di3 */
    case 1429:  /* sse2_andnotv4si3 */
    case 1428:  /* sse2_andnotv8hi3 */
    case 1427:  /* sse2_andnotv16qi3 */
    case 1426:  /* *avx_andnotv2di3 */
    case 1425:  /* *avx_andnotv4si3 */
    case 1424:  /* *avx_andnotv8hi3 */
    case 1423:  /* *avx_andnotv16qi3 */
    case 1422:  /* *sse_andnotv2di3 */
    case 1421:  /* *sse_andnotv4si3 */
    case 1420:  /* *sse_andnotv8hi3 */
    case 1419:  /* *sse_andnotv16qi3 */
    case 1418:  /* *avx_andnotv4di3 */
    case 1417:  /* *avx_andnotv8si3 */
    case 1416:  /* *avx_andnotv16hi3 */
    case 1415:  /* *avx_andnotv32qi3 */
    case 1294:  /* sse2_loadhpd */
    case 1293:  /* *avx_loadhpd */
    case 1232:  /* sse_loadhps */
    case 1231:  /* *avx_loadhps */
    case 1207:  /* *sse2_cvtpd2ps */
    case 1201:  /* *sse2_cvttpd2dq */
    case 1085:  /* *andnotdf3 */
    case 1084:  /* *andnotsf3 */
    case 1083:  /* *avx_andnotdf3 */
    case 1082:  /* *avx_andnotsf3 */
    case 1063:  /* sse2_andnotv2df3 */
    case 1062:  /* sse_andnotv4sf3 */
    case 1061:  /* avx_andnotv4df3 */
    case 1060:  /* avx_andnotv8sf3 */
    case 1059:  /* avx_andnotv2df3 */
    case 1058:  /* avx_andnotv4sf3 */
    case 969:  /* sse2_vmsqrtv2df2 */
    case 968:  /* sse_vmsqrtv4sf2 */
    case 967:  /* *avx_vmsqrtv2df2 */
    case 966:  /* *avx_vmsqrtv4sf2 */
    case 831:  /* mmx_andnotv2si3 */
    case 830:  /* mmx_andnotv4hi3 */
    case 829:  /* mmx_andnotv8qi3 */
    case 731:  /* *sibcall_value_1 */
    case 729:  /* *call_value_1 */
    case 727:  /* *call_value_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 730:  /* *sibcall_value_1_vzeroupper */
    case 728:  /* *call_value_1_vzeroupper */
    case 726:  /* *call_value_0_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 725:  /* *sibcall_value_pop_1 */
    case 723:  /* *call_value_pop_1 */
    case 721:  /* *call_value_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 724:  /* *sibcall_value_pop_1_vzeroupper */
    case 722:  /* *call_value_pop_1_vzeroupper */
    case 720:  /* *call_value_pop_0_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 718:  /* adjust_stack_and_probesi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1833:  /* *vec_concatv4df_avx */
    case 1832:  /* *vec_concatv8sf_avx */
    case 1831:  /* *vec_concatv4di_avx */
    case 1830:  /* *vec_concatv8si_avx */
    case 1829:  /* *vec_concatv16hi_avx */
    case 1828:  /* *vec_concatv32qi_avx */
    case 1723:  /* xop_rotrv2di3 */
    case 1722:  /* xop_rotrv4si3 */
    case 1721:  /* xop_rotrv8hi3 */
    case 1720:  /* xop_rotrv16qi3 */
    case 1719:  /* xop_rotlv2di3 */
    case 1718:  /* xop_rotlv4si3 */
    case 1717:  /* xop_rotlv8hi3 */
    case 1716:  /* xop_rotlv16qi3 */
    case 1535:  /* vec_concatv2di */
    case 1534:  /* *vec_concatv2di_avx */
    case 1533:  /* *vec_concatv4si_1 */
    case 1532:  /* *vec_concatv4si_1_avx */
    case 1531:  /* *vec_concatv2si_sse */
    case 1530:  /* *vec_concatv2si_sse2 */
    case 1529:  /* *vec_concatv2si_sse4_1 */
    case 1528:  /* *vec_concatv2si_avx */
    case 1482:  /* *xortf3 */
    case 1481:  /* *iortf3 */
    case 1480:  /* *andtf3 */
    case 1479:  /* *sse2_xorv2di3 */
    case 1478:  /* *sse2_iorv2di3 */
    case 1477:  /* *sse2_andv2di3 */
    case 1476:  /* *sse2_xorv4si3 */
    case 1475:  /* *sse2_iorv4si3 */
    case 1474:  /* *sse2_andv4si3 */
    case 1473:  /* *sse2_xorv8hi3 */
    case 1472:  /* *sse2_iorv8hi3 */
    case 1471:  /* *sse2_andv8hi3 */
    case 1470:  /* *sse2_xorv16qi3 */
    case 1469:  /* *sse2_iorv16qi3 */
    case 1468:  /* *sse2_andv16qi3 */
    case 1467:  /* *avx_xorv2di3 */
    case 1466:  /* *avx_iorv2di3 */
    case 1465:  /* *avx_andv2di3 */
    case 1464:  /* *avx_xorv4si3 */
    case 1463:  /* *avx_iorv4si3 */
    case 1462:  /* *avx_andv4si3 */
    case 1461:  /* *avx_xorv8hi3 */
    case 1460:  /* *avx_iorv8hi3 */
    case 1459:  /* *avx_andv8hi3 */
    case 1458:  /* *avx_xorv16qi3 */
    case 1457:  /* *avx_iorv16qi3 */
    case 1456:  /* *avx_andv16qi3 */
    case 1455:  /* *sse_xorv2di3 */
    case 1454:  /* *sse_iorv2di3 */
    case 1453:  /* *sse_andv2di3 */
    case 1452:  /* *sse_xorv4si3 */
    case 1451:  /* *sse_iorv4si3 */
    case 1450:  /* *sse_andv4si3 */
    case 1449:  /* *sse_xorv8hi3 */
    case 1448:  /* *sse_iorv8hi3 */
    case 1447:  /* *sse_andv8hi3 */
    case 1446:  /* *sse_xorv16qi3 */
    case 1445:  /* *sse_iorv16qi3 */
    case 1444:  /* *sse_andv16qi3 */
    case 1443:  /* *avx_xorv4di3 */
    case 1442:  /* *avx_iorv4di3 */
    case 1441:  /* *avx_andv4di3 */
    case 1440:  /* *avx_xorv8si3 */
    case 1439:  /* *avx_iorv8si3 */
    case 1438:  /* *avx_andv8si3 */
    case 1437:  /* *avx_xorv16hi3 */
    case 1436:  /* *avx_iorv16hi3 */
    case 1435:  /* *avx_andv16hi3 */
    case 1434:  /* *avx_xorv32qi3 */
    case 1433:  /* *avx_iorv32qi3 */
    case 1432:  /* *avx_andv32qi3 */
    case 1414:  /* sse4_2_gtv2di3 */
    case 1413:  /* sse2_gtv4si3 */
    case 1412:  /* sse2_gtv8hi3 */
    case 1411:  /* sse2_gtv16qi3 */
    case 1410:  /* *avx_gtv2di3 */
    case 1409:  /* *avx_gtv4si3 */
    case 1408:  /* *avx_gtv8hi3 */
    case 1407:  /* *avx_gtv16qi3 */
    case 1406:  /* *sse4_1_eqv2di3 */
    case 1405:  /* *sse2_eqv4si3 */
    case 1404:  /* *sse2_eqv8hi3 */
    case 1403:  /* *sse2_eqv16qi3 */
    case 1402:  /* *avx_eqv2di3 */
    case 1401:  /* *avx_eqv4si3 */
    case 1400:  /* *avx_eqv8hi3 */
    case 1399:  /* *avx_eqv16qi3 */
    case 1398:  /* *sse4_1_uminv4si3 */
    case 1397:  /* *sse4_1_umaxv4si3 */
    case 1396:  /* *sse4_1_uminv8hi3 */
    case 1395:  /* *sse4_1_umaxv8hi3 */
    case 1394:  /* *sse4_1_sminv4si3 */
    case 1393:  /* *sse4_1_smaxv4si3 */
    case 1392:  /* *sse4_1_sminv16qi3 */
    case 1391:  /* *sse4_1_smaxv16qi3 */
    case 1390:  /* *sminv8hi3 */
    case 1389:  /* *smaxv8hi3 */
    case 1388:  /* *avx_sminv4si3 */
    case 1387:  /* *avx_smaxv4si3 */
    case 1386:  /* *avx_sminv8hi3 */
    case 1385:  /* *avx_smaxv8hi3 */
    case 1384:  /* *avx_sminv16qi3 */
    case 1383:  /* *avx_smaxv16qi3 */
    case 1382:  /* *uminv16qi3 */
    case 1381:  /* *umaxv16qi3 */
    case 1380:  /* *avx_uminv4si3 */
    case 1379:  /* *avx_umaxv4si3 */
    case 1378:  /* *avx_uminv8hi3 */
    case 1377:  /* *avx_umaxv8hi3 */
    case 1376:  /* *avx_uminv16qi3 */
    case 1375:  /* *avx_umaxv16qi3 */
    case 1374:  /* ashlv2di3 */
    case 1373:  /* ashlv4si3 */
    case 1372:  /* ashlv8hi3 */
    case 1371:  /* sse2_ashlv1ti3 */
    case 1370:  /* *avx_ashlv2di3 */
    case 1369:  /* *avx_ashlv4si3 */
    case 1368:  /* *avx_ashlv8hi3 */
    case 1367:  /* *avx_ashlv1ti3 */
    case 1366:  /* lshrv2di3 */
    case 1365:  /* lshrv4si3 */
    case 1364:  /* lshrv8hi3 */
    case 1363:  /* sse2_lshrv1ti3 */
    case 1362:  /* *avx_lshrv2di3 */
    case 1361:  /* *avx_lshrv4si3 */
    case 1360:  /* *avx_lshrv8hi3 */
    case 1359:  /* *avx_lshrv1ti3 */
    case 1358:  /* ashrv4si3 */
    case 1357:  /* ashrv8hi3 */
    case 1356:  /* *avx_ashrv4si3 */
    case 1355:  /* *avx_ashrv8hi3 */
    case 1354:  /* mulv2di3 */
    case 1353:  /* *sse2_mulv4si3 */
    case 1352:  /* *sse4_1_mulv4si3 */
    case 1351:  /* *avx_mulv4si3 */
    case 1340:  /* *mulv8hi3 */
    case 1339:  /* *avx_mulv8hi3 */
    case 1338:  /* mulv16qi3 */
    case 1337:  /* *sse2_ussubv8hi3 */
    case 1336:  /* *sse2_sssubv8hi3 */
    case 1335:  /* *sse2_usaddv8hi3 */
    case 1334:  /* *sse2_ssaddv8hi3 */
    case 1333:  /* *sse2_ussubv16qi3 */
    case 1332:  /* *sse2_sssubv16qi3 */
    case 1331:  /* *sse2_usaddv16qi3 */
    case 1330:  /* *sse2_ssaddv16qi3 */
    case 1329:  /* *avx_ussubv8hi3 */
    case 1328:  /* *avx_sssubv8hi3 */
    case 1327:  /* *avx_usaddv8hi3 */
    case 1326:  /* *avx_ssaddv8hi3 */
    case 1325:  /* *avx_ussubv16qi3 */
    case 1324:  /* *avx_sssubv16qi3 */
    case 1323:  /* *avx_usaddv16qi3 */
    case 1322:  /* *avx_ssaddv16qi3 */
    case 1321:  /* *subv2di3 */
    case 1320:  /* *addv2di3 */
    case 1319:  /* *subv4si3 */
    case 1318:  /* *addv4si3 */
    case 1317:  /* *subv8hi3 */
    case 1316:  /* *addv8hi3 */
    case 1315:  /* *subv16qi3 */
    case 1314:  /* *addv16qi3 */
    case 1313:  /* *avx_subv2di3 */
    case 1312:  /* *avx_addv2di3 */
    case 1311:  /* *avx_subv4si3 */
    case 1310:  /* *avx_addv4si3 */
    case 1309:  /* *avx_subv8hi3 */
    case 1308:  /* *avx_addv8hi3 */
    case 1307:  /* *avx_subv16qi3 */
    case 1306:  /* *avx_addv16qi3 */
    case 1305:  /* *vec_concatv2df */
    case 1304:  /* *vec_concatv2df_avx */
    case 1245:  /* *vec_concatv4sf_sse */
    case 1244:  /* *vec_concatv4sf_avx */
    case 1243:  /* *vec_concatv2sf_sse */
    case 1242:  /* *vec_concatv2sf_sse4_1 */
    case 1241:  /* *vec_concatv2sf_avx */
    case 1097:  /* *xordf3 */
    case 1096:  /* *iordf3 */
    case 1095:  /* *anddf3 */
    case 1094:  /* *xorsf3 */
    case 1093:  /* *iorsf3 */
    case 1092:  /* *andsf3 */
    case 1091:  /* *avx_xordf3 */
    case 1090:  /* *avx_iordf3 */
    case 1089:  /* *avx_anddf3 */
    case 1088:  /* *avx_xorsf3 */
    case 1087:  /* *avx_iorsf3 */
    case 1086:  /* *avx_andsf3 */
    case 1081:  /* *xorv2df3 */
    case 1080:  /* *iorv2df3 */
    case 1079:  /* *andv2df3 */
    case 1078:  /* *xorv4sf3 */
    case 1077:  /* *iorv4sf3 */
    case 1076:  /* *andv4sf3 */
    case 1075:  /* *avx_xorv4df3 */
    case 1074:  /* *avx_iorv4df3 */
    case 1073:  /* *avx_andv4df3 */
    case 1072:  /* *avx_xorv8sf3 */
    case 1071:  /* *avx_iorv8sf3 */
    case 1070:  /* *avx_andv8sf3 */
    case 1069:  /* *avx_xorv2df3 */
    case 1068:  /* *avx_iorv2df3 */
    case 1067:  /* *avx_andv2df3 */
    case 1066:  /* *avx_xorv4sf3 */
    case 1065:  /* *avx_iorv4sf3 */
    case 1064:  /* *avx_andv4sf3 */
    case 997:  /* *sminv2df3 */
    case 996:  /* *smaxv2df3 */
    case 995:  /* *sminv4sf3 */
    case 994:  /* *smaxv4sf3 */
    case 993:  /* *avx_sminv4df3 */
    case 992:  /* *avx_smaxv4df3 */
    case 991:  /* *avx_sminv8sf3 */
    case 990:  /* *avx_smaxv8sf3 */
    case 989:  /* *avx_sminv2df3 */
    case 988:  /* *avx_smaxv2df3 */
    case 987:  /* *avx_sminv4sf3 */
    case 986:  /* *avx_smaxv4sf3 */
    case 985:  /* *sminv2df3_finite */
    case 984:  /* *smaxv2df3_finite */
    case 983:  /* *sminv4sf3_finite */
    case 982:  /* *smaxv4sf3_finite */
    case 981:  /* *avx_sminv4df3_finite */
    case 980:  /* *avx_smaxv4df3_finite */
    case 979:  /* *avx_sminv8sf3_finite */
    case 978:  /* *avx_smaxv8sf3_finite */
    case 977:  /* *avx_sminv2df3_finite */
    case 976:  /* *avx_smaxv2df3_finite */
    case 975:  /* *avx_sminv4sf3_finite */
    case 974:  /* *avx_smaxv4sf3_finite */
    case 953:  /* sse2_divv2df3 */
    case 952:  /* sse_divv4sf3 */
    case 951:  /* *avx_divv2df3 */
    case 950:  /* *avx_divv4sf3 */
    case 949:  /* avx_divv4df3 */
    case 948:  /* avx_divv8sf3 */
    case 947:  /* avx_divv2df3 */
    case 946:  /* avx_divv4sf3 */
    case 941:  /* *mulv2df3 */
    case 940:  /* *mulv4sf3 */
    case 939:  /* *avx_mulv4df3 */
    case 938:  /* *avx_mulv8sf3 */
    case 937:  /* *avx_mulv2df3 */
    case 936:  /* *avx_mulv4sf3 */
    case 927:  /* *subv2df3 */
    case 926:  /* *addv2df3 */
    case 925:  /* *subv4sf3 */
    case 924:  /* *addv4sf3 */
    case 923:  /* *avx_subv4df3 */
    case 922:  /* *avx_addv4df3 */
    case 921:  /* *avx_subv8sf3 */
    case 920:  /* *avx_addv8sf3 */
    case 919:  /* *avx_subv2df3 */
    case 918:  /* *avx_addv2df3 */
    case 917:  /* *avx_subv4sf3 */
    case 916:  /* *avx_addv4sf3 */
    case 856:  /* *mmx_concatv2si */
    case 840:  /* *mmx_xorv2si3 */
    case 839:  /* *mmx_iorv2si3 */
    case 838:  /* *mmx_andv2si3 */
    case 837:  /* *mmx_xorv4hi3 */
    case 836:  /* *mmx_iorv4hi3 */
    case 835:  /* *mmx_andv4hi3 */
    case 834:  /* *mmx_xorv8qi3 */
    case 833:  /* *mmx_iorv8qi3 */
    case 832:  /* *mmx_andv8qi3 */
    case 828:  /* mmx_gtv2si3 */
    case 827:  /* mmx_gtv4hi3 */
    case 826:  /* mmx_gtv8qi3 */
    case 825:  /* *mmx_eqv2si3 */
    case 824:  /* *mmx_eqv4hi3 */
    case 823:  /* *mmx_eqv8qi3 */
    case 822:  /* mmx_ashlv1di3 */
    case 821:  /* mmx_ashlv2si3 */
    case 820:  /* mmx_ashlv4hi3 */
    case 819:  /* mmx_lshrv1di3 */
    case 818:  /* mmx_lshrv2si3 */
    case 817:  /* mmx_lshrv4hi3 */
    case 816:  /* mmx_ashrv2si3 */
    case 815:  /* mmx_ashrv4hi3 */
    case 814:  /* *mmx_uminv8qi3 */
    case 813:  /* *mmx_umaxv8qi3 */
    case 812:  /* *mmx_sminv4hi3 */
    case 811:  /* *mmx_smaxv4hi3 */
    case 805:  /* *mmx_mulv4hi3 */
    case 804:  /* *mmx_ussubv4hi3 */
    case 803:  /* *mmx_sssubv4hi3 */
    case 802:  /* *mmx_usaddv4hi3 */
    case 801:  /* *mmx_ssaddv4hi3 */
    case 800:  /* *mmx_ussubv8qi3 */
    case 799:  /* *mmx_sssubv8qi3 */
    case 798:  /* *mmx_usaddv8qi3 */
    case 797:  /* *mmx_ssaddv8qi3 */
    case 796:  /* *mmx_subv1di3 */
    case 795:  /* *mmx_addv1di3 */
    case 794:  /* *mmx_subv2si3 */
    case 793:  /* *mmx_addv2si3 */
    case 792:  /* *mmx_subv4hi3 */
    case 791:  /* *mmx_addv4hi3 */
    case 790:  /* *mmx_subv8qi3 */
    case 789:  /* *mmx_addv8qi3 */
    case 786:  /* *mmx_concatv2sf */
    case 779:  /* mmx_gev2sf3 */
    case 778:  /* mmx_gtv2sf3 */
    case 777:  /* *mmx_eqv2sf3 */
    case 768:  /* *mmx_sminv2sf3 */
    case 767:  /* *mmx_smaxv2sf3 */
    case 766:  /* *mmx_sminv2sf3_finite */
    case 765:  /* *mmx_smaxv2sf3_finite */
    case 764:  /* *mmx_mulv2sf3 */
    case 763:  /* *mmx_subv2sf3 */
    case 762:  /* *mmx_addv2sf3 */
    case 705:  /* smindf3 */
    case 704:  /* smaxdf3 */
    case 703:  /* sminsf3 */
    case 702:  /* smaxsf3 */
    case 701:  /* *avx_smindf3 */
    case 700:  /* *avx_smaxdf3 */
    case 699:  /* *avx_sminsf3 */
    case 698:  /* *avx_smaxsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 692:  /* *movqicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1143:  /* *fma_fmadd_v4df */
    case 1142:  /* *fma_fmadd_v8sf */
    case 1141:  /* *fma_fmadd_v2df */
    case 1140:  /* *fma_fmadd_v4sf */
    case 1139:  /* *fma_fmadd_df */
    case 1138:  /* *fma_fmadd_sf */
    case 1103:  /* *fma4i_fmadd_v4df */
    case 1102:  /* *fma4i_fmadd_v8sf */
    case 1101:  /* *fma4i_fmadd_v2df */
    case 1100:  /* *fma4i_fmadd_v4sf */
    case 1099:  /* *fma4i_fmadd_df */
    case 1098:  /* *fma4i_fmadd_sf */
    case 697:  /* *xop_pcmov_df */
    case 696:  /* *xop_pcmov_sf */
    case 695:  /* *movsfcc_1_387 */
    case 694:  /* *movdfcc_1 */
    case 693:  /* *movxfcc_1 */
    case 691:  /* *movsicc_noc */
    case 690:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 686:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 685:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 684:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 683:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 682:  /* *rep_stossi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 681:  /* *strsetqi_1 */
    case 680:  /* *strsethi_1 */
    case 679:  /* *strsetsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 678:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 677:  /* *rep_movsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 676:  /* *strmovqi_1 */
    case 675:  /* *strmovhi_1 */
    case 674:  /* *strmovsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 658:  /* fistdi2_ceil_with_temp */
    case 647:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 662:  /* fistsi2_ceil_with_temp */
    case 661:  /* fisthi2_ceil_with_temp */
    case 657:  /* fistdi2_ceil */
    case 651:  /* fistsi2_floor_with_temp */
    case 650:  /* fisthi2_floor_with_temp */
    case 646:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 717:  /* allocate_stack_worker_probe_di */
    case 716:  /* allocate_stack_worker_probe_si */
    case 665:  /* frndintxf2_mask_pm */
    case 663:  /* frndintxf2_trunc */
    case 656:  /* *fistdi2_ceil_1 */
    case 655:  /* *fistsi2_ceil_1 */
    case 654:  /* *fisthi2_ceil_1 */
    case 652:  /* frndintxf2_ceil */
    case 645:  /* *fistdi2_floor_1 */
    case 644:  /* *fistsi2_floor_1 */
    case 643:  /* *fisthi2_floor_1 */
    case 641:  /* frndintxf2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 666:  /* frndintxf2_mask_pm_i387 */
    case 664:  /* frndintxf2_trunc_i387 */
    case 660:  /* fistsi2_ceil */
    case 659:  /* fisthi2_ceil */
    case 653:  /* frndintxf2_ceil_i387 */
    case 649:  /* fistsi2_floor */
    case 648:  /* fisthi2_floor */
    case 642:  /* frndintxf2_floor_i387 */
    case 634:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 736:  /* stack_tls_protect_set_si */
    case 735:  /* stack_protect_set_si */
    case 640:  /* fistsi2_with_temp */
    case 639:  /* fisthi2_with_temp */
    case 633:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1839:  /* vcvtps2ph256 */
    case 1838:  /* *vcvtps2ph_store */
    case 1820:  /* avx_maskloadpd256 */
    case 1819:  /* avx_maskloadps256 */
    case 1818:  /* avx_maskloadpd */
    case 1817:  /* avx_maskloadps */
    case 1798:  /* avx_vpermilvarv4df3 */
    case 1797:  /* avx_vpermilvarv8sf3 */
    case 1796:  /* avx_vpermilvarv2df3 */
    case 1795:  /* avx_vpermilvarv4sf3 */
    case 1773:  /* aeskeygenassist */
    case 1771:  /* aesdeclast */
    case 1770:  /* *avx_aesdeclast */
    case 1769:  /* aesdec */
    case 1768:  /* *avx_aesdec */
    case 1767:  /* aesenclast */
    case 1766:  /* *avx_aesenclast */
    case 1765:  /* aesenc */
    case 1764:  /* *avx_aesenc */
    case 1658:  /* sse4_1_roundpd */
    case 1657:  /* sse4_1_roundps */
    case 1656:  /* avx_roundpd256 */
    case 1655:  /* avx_roundps256 */
    case 1608:  /* sse4a_insertq */
    case 1606:  /* sse4a_extrq */
    case 1591:  /* ssse3_psignv2si3 */
    case 1590:  /* ssse3_psignv4hi3 */
    case 1589:  /* ssse3_psignv8qi3 */
    case 1588:  /* ssse3_psignv4si3 */
    case 1587:  /* ssse3_psignv8hi3 */
    case 1586:  /* ssse3_psignv16qi3 */
    case 1585:  /* *avx_psignv4si3 */
    case 1584:  /* *avx_psignv8hi3 */
    case 1583:  /* *avx_psignv16qi3 */
    case 1582:  /* ssse3_pshufbv8qi3 */
    case 1581:  /* ssse3_pshufbv16qi3 */
    case 1580:  /* *avx_pshufbv16qi3 */
    case 1541:  /* sse2_psadbw */
    case 1540:  /* *avx_psadbw */
    case 1017:  /* *ieee_smaxv2df3 */
    case 1016:  /* *ieee_smaxv4sf3 */
    case 1015:  /* *ieee_sminv2df3 */
    case 1014:  /* *ieee_sminv4sf3 */
    case 1013:  /* *avx_ieee_smaxv4df3 */
    case 1012:  /* *avx_ieee_smaxv8sf3 */
    case 1011:  /* *avx_ieee_smaxv2df3 */
    case 1010:  /* *avx_ieee_smaxv4sf3 */
    case 1009:  /* *avx_ieee_sminv4df3 */
    case 1008:  /* *avx_ieee_sminv8sf3 */
    case 1007:  /* *avx_ieee_sminv2df3 */
    case 1006:  /* *avx_ieee_sminv4sf3 */
    case 861:  /* mmx_psadbw */
    case 773:  /* mmx_rsqit1v2sf3 */
    case 771:  /* mmx_rcpit2v2sf3 */
    case 770:  /* mmx_rcpit1v2sf3 */
    case 741:  /* sse4_2_crc32si */
    case 740:  /* sse4_2_crc32hi */
    case 739:  /* sse4_2_crc32qi */
    case 713:  /* *ieee_smaxdf3 */
    case 712:  /* *ieee_smaxsf3 */
    case 711:  /* *avx_ieee_smaxdf3 */
    case 710:  /* *avx_ieee_smaxsf3 */
    case 709:  /* *ieee_smindf3 */
    case 708:  /* *ieee_sminsf3 */
    case 707:  /* *avx_ieee_smindf3 */
    case 706:  /* *avx_ieee_sminsf3 */
    case 630:  /* sse4_1_rounddf2 */
    case 629:  /* sse4_1_roundsf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 628:  /* *fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 623:  /* fyl2xp1_extenddfxf3_i387 */
    case 622:  /* fyl2xp1_extendsfxf3_i387 */
    case 620:  /* fyl2x_extenddfxf3_i387 */
    case 619:  /* fyl2x_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 617:  /* fpatan_extenddfxf3_i387 */
    case 616:  /* fpatan_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 738:  /* stack_tls_protect_test_si */
    case 737:  /* stack_protect_test_si */
    case 621:  /* fyl2xp1xf3_i387 */
    case 618:  /* fyl2xxf3_i387 */
    case 615:  /* *fpatanxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 614:  /* fptan_extenddfxf4_i387 */
    case 613:  /* fptan_extendsfxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 612:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 626:  /* fxtract_extenddfxf3_i387 */
    case 625:  /* fxtract_extendsfxf3_i387 */
    case 611:  /* sincos_extenddfxf3_i387 */
    case 610:  /* sincos_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 624:  /* fxtractxf3_i387 */
    case 609:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1604:  /* sse4a_vmmovntv2df */
    case 1603:  /* sse4a_vmmovntv4sf */
    case 1192:  /* sse2_cvtsd2si */
    case 1175:  /* sse_cvtss2si */
    case 608:  /* *cos_extenddfxf2_i387 */
    case 607:  /* *cos_extendsfxf2_i387 */
    case 605:  /* *sin_extenddfxf2_i387 */
    case 604:  /* *sin_extendsfxf2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 602:  /* fprem1xf4_i387 */
    case 601:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 592:  /* *fop_xf_6_i387 */
    case 591:  /* *fop_xf_6_i387 */
    case 580:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 590:  /* *fop_xf_5_i387 */
    case 589:  /* *fop_xf_5_i387 */
    case 586:  /* *fop_xf_3_i387 */
    case 585:  /* *fop_xf_3_i387 */
    case 579:  /* *fop_df_5_i387 */
    case 577:  /* *fop_df_3_i387 */
    case 576:  /* *fop_sf_3_i387 */
    case 575:  /* *fop_df_3_i387 */
    case 574:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 588:  /* *fop_xf_4_i387 */
    case 587:  /* *fop_xf_4_i387 */
    case 584:  /* *fop_xf_2_i387 */
    case 583:  /* *fop_xf_2_i387 */
    case 578:  /* *fop_df_4_i387 */
    case 573:  /* *fop_df_2_i387 */
    case 572:  /* *fop_sf_2_i387 */
    case 571:  /* *fop_df_2_i387 */
    case 570:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1836:  /* vcvtph2ps256 */
    case 1835:  /* *vcvtph2ps_load */
    case 1827:  /* avx_pd256_pd */
    case 1826:  /* avx_ps256_ps */
    case 1825:  /* avx_si256_si */
    case 1772:  /* aesimc */
    case 1741:  /* xop_frczv4df2 */
    case 1740:  /* xop_frczv8sf2 */
    case 1739:  /* xop_frczv2df2 */
    case 1738:  /* xop_frczv4sf2 */
    case 1737:  /* xop_frczdf2 */
    case 1736:  /* xop_frczsf2 */
    case 1636:  /* sse4_1_phminposuw */
    case 1627:  /* sse4_1_movntdqa */
    case 1602:  /* sse4a_movntdf */
    case 1601:  /* sse4a_movntsf */
    case 1546:  /* sse2_pmovmskb */
    case 1545:  /* sse2_movmskpd */
    case 1544:  /* sse_movmskps */
    case 1543:  /* avx_movmskpd256 */
    case 1542:  /* avx_movmskps256 */
    case 1198:  /* avx_cvtpd2dq256 */
    case 1193:  /* sse2_cvtsd2si_2 */
    case 1188:  /* sse2_cvtpd2pi */
    case 1183:  /* sse2_cvtps2dq */
    case 1182:  /* avx_cvtps2dq256 */
    case 1181:  /* avx_cvtps2dq */
    case 1176:  /* sse_cvtss2si_2 */
    case 971:  /* sse_rsqrtv4sf2 */
    case 970:  /* avx_rsqrtv8sf2 */
    case 959:  /* sse_rcpv4sf2 */
    case 958:  /* avx_rcpv8sf2 */
    case 909:  /* sse3_lddqu */
    case 908:  /* avx_lddqu */
    case 907:  /* avx_lddqu256 */
    case 906:  /* sse2_movntsi */
    case 905:  /* sse2_movntv2di */
    case 904:  /* avx_movntv2di */
    case 903:  /* avx_movntv4di */
    case 902:  /* sse2_movntv2df */
    case 901:  /* sse_movntv4sf */
    case 900:  /* avx_movntv4df */
    case 899:  /* avx_movntv8sf */
    case 898:  /* avx_movntv2df */
    case 897:  /* avx_movntv4sf */
    case 896:  /* *sse2_movdqu */
    case 895:  /* *avx_movdqu */
    case 894:  /* *avx_movdqu256 */
    case 893:  /* *sse2_movupd */
    case 892:  /* *sse_movups */
    case 890:  /* *avx_movupd256 */
    case 889:  /* *avx_movups256 */
    case 888:  /* *avx_movupd */
    case 887:  /* *avx_movups */
    case 862:  /* mmx_pmovmskb */
    case 772:  /* mmx_rsqrtv2sf2 */
    case 769:  /* mmx_rcpv2sf2 */
    case 761:  /* sse_movntdi */
    case 742:  /* *rdpmc */
    case 672:  /* movmsk_df */
    case 671:  /* fxamdf2_i387_with_temp */
    case 670:  /* fxamsf2_i387_with_temp */
    case 669:  /* fxamxf2_i387 */
    case 668:  /* fxamdf2_i387 */
    case 667:  /* fxamsf2_i387 */
    case 638:  /* fistsi2 */
    case 637:  /* fisthi2 */
    case 636:  /* *fistsi2_1 */
    case 635:  /* *fisthi2_1 */
    case 632:  /* *fistdi2_1 */
    case 631:  /* rintxf2 */
    case 627:  /* *f2xm1xf2_i387 */
    case 606:  /* *cosxf2_i387 */
    case 603:  /* *sinxf2_i387 */
    case 598:  /* *rsqrtsf2_sse */
    case 594:  /* truncxfdf2_i387_noop_unspec */
    case 593:  /* truncxfsf2_i387_noop_unspec */
    case 563:  /* *rcpsf2_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1049:  /* sse2_maskcmpv2df3 */
    case 1048:  /* sse_maskcmpv4sf3 */
    case 1047:  /* sse2_maskcmpdf3 */
    case 1046:  /* sse_maskcmpsf3 */
    case 1045:  /* *avx_maskcmpv4df3 */
    case 1044:  /* *avx_maskcmpv8sf3 */
    case 1043:  /* *avx_maskcmpv2df3 */
    case 1042:  /* *avx_maskcmpv4sf3 */
    case 582:  /* *fop_xf_1_i387 */
    case 581:  /* *fop_xf_comm_i387 */
    case 569:  /* *fop_df_1_i387 */
    case 568:  /* *fop_sf_1_i387 */
    case 567:  /* *fop_df_1_sse */
    case 566:  /* *fop_sf_1_sse */
    case 565:  /* *fop_df_1_avx */
    case 564:  /* *fop_sf_1_avx */
    case 562:  /* *fop_df_1_mixed */
    case 561:  /* *fop_sf_1_mixed */
    case 560:  /* *fop_df_1_mixed_avx */
    case 559:  /* *fop_sf_1_mixed_avx */
    case 558:  /* *fop_df_comm_i387 */
    case 557:  /* *fop_sf_comm_i387 */
    case 556:  /* *fop_df_comm_sse */
    case 555:  /* *fop_sf_comm_sse */
    case 554:  /* *fop_df_comm_avx */
    case 553:  /* *fop_sf_comm_avx */
    case 552:  /* *fop_df_comm_mixed */
    case 551:  /* *fop_sf_comm_mixed */
    case 550:  /* *fop_df_comm_mixed_avx */
    case 549:  /* *fop_sf_comm_mixed_avx */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 548:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 547:  /* *tls_dynamic_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 546:  /* *tls_dynamic_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 545:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 543:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 542:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 541:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 540:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 539:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 538:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 537:  /* bswaphi_lowpart */
    case 536:  /* *bswaphi_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 528:  /* *bsrhi */
    case 527:  /* bsr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 526:  /* *tbm_tzmsk_si */
    case 525:  /* *tbm_t1mskc_si */
    case 524:  /* *tbm_blsic_si */
    case 520:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 519:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 517:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 523:  /* *tbm_blsfill_si */
    case 522:  /* *tbm_blcs_si */
    case 521:  /* *tbm_blcmsk_si */
    case 518:  /* *tbm_blcfill_si */
    case 516:  /* *bmi_blsr_si */
    case 515:  /* *bmi_blsmsk_si */
    case 514:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 719:  /* probe_stack_rangesi */
    case 513:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 512:  /* *bmi_andn_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 507:  /* *ffssi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 502:  /* set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 750:  /* rdrandsi_1 */
    case 749:  /* rdrandhi_1 */
    case 501:  /* set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 497:  /* return_indirect_internal */
    case 496:  /* return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1777:  /* avx_vzeroupper */
    case 1551:  /* sse2_clflush */
    case 1548:  /* sse_ldmxcsr */
    case 745:  /* *lwp_llwpcbsi1 */
    case 505:  /* split_stack_return */
    case 500:  /* pad */
    case 499:  /* nops */
    case 493:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 1553:  /* *sse2_lfence */
    case 1552:  /* *sse2_mfence */
    case 1550:  /* *sse_sfence */
    case 492:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 732:  /* trap */
    case 673:  /* cld */
    case 504:  /* leave */
    case 503:  /* eh_return_internal */
    case 498:  /* nop */
    case 495:  /* return_internal_long */
    case 494:  /* return_internal */
    case 491:  /* blockage */
      break;

    case 489:  /* *sibcall_1_vzeroupper */
    case 487:  /* *call_1_vzeroupper */
    case 485:  /* *call_0_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 484:  /* *sibcall_pop_1 */
    case 482:  /* *call_pop_1 */
    case 480:  /* *call_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 483:  /* *sibcall_pop_1_vzeroupper */
    case 481:  /* *call_pop_1_vzeroupper */
    case 479:  /* *call_pop_0_vzeroupper */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 478:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 477:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 476:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 475:  /* *fp_jcc_4_si_387 */
    case 474:  /* *fp_jcc_4_hi_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 472:  /* *fp_jcc_2r_387 */
    case 470:  /* *fp_jcc_1r_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 473:  /* *fp_jcc_3_387 */
    case 471:  /* *fp_jcc_2_387 */
    case 469:  /* *fp_jcc_1_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 468:  /* *jcc_btsi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 467:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 466:  /* *jcc_btdi_mask */
    case 465:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 464:  /* *jcc_btdi */
    case 463:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 462:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 461:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1751:  /* xop_maskcmp_unsv2di3 */
    case 1750:  /* xop_maskcmp_unsv4si3 */
    case 1749:  /* xop_maskcmp_unsv8hi3 */
    case 1748:  /* xop_maskcmp_unsv16qi3 */
    case 1747:  /* xop_maskcmpv2di3 */
    case 1746:  /* xop_maskcmpv4si3 */
    case 1745:  /* xop_maskcmpv8hi3 */
    case 1744:  /* xop_maskcmpv16qi3 */
    case 460:  /* *sse_setccdf */
    case 459:  /* *sse_setccsf */
    case 458:  /* *avx_setccdf */
    case 457:  /* *avx_setccsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 452:  /* *btdi */
    case 451:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 440:  /* ix86_rotrdi3_doubleword */
    case 439:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 438:  /* *rotrdi3_mask */
    case 437:  /* *rotldi3_mask */
    case 436:  /* *rotrsi3_mask */
    case 435:  /* *rotlsi3_mask */
    case 404:  /* *ashrdi3_mask */
    case 403:  /* *lshrdi3_mask */
    case 402:  /* *ashrsi3_mask */
    case 401:  /* *lshrsi3_mask */
    case 385:  /* *ashldi3_mask */
    case 384:  /* *ashlsi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 407:  /* x86_shrd */
    case 383:  /* x86_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 373:  /* copysigntf3_var */
    case 372:  /* copysigndf3_var */
    case 371:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 1801:  /* *avx_vperm2f128v4df_full */
    case 1800:  /* *avx_vperm2f128v8sf_full */
    case 1799:  /* *avx_vperm2f128v8si_full */
    case 1775:  /* pclmulqdq */
    case 1774:  /* *vpclmulqdq */
    case 1759:  /* xop_pcom_tfv2di3 */
    case 1758:  /* xop_pcom_tfv4si3 */
    case 1757:  /* xop_pcom_tfv8hi3 */
    case 1756:  /* xop_pcom_tfv16qi3 */
    case 1712:  /* xop_pperm */
    case 1633:  /* sse4_1_pblendvb */
    case 1632:  /* *avx_pblendvb */
    case 1629:  /* sse4_1_mpsadbw */
    case 1628:  /* *avx_mpsadbw */
    case 1626:  /* sse4_1_dppd */
    case 1625:  /* sse4_1_dpps */
    case 1624:  /* avx_dppd256 */
    case 1623:  /* avx_dpps256 */
    case 1622:  /* avx_dppd */
    case 1621:  /* avx_dpps */
    case 1620:  /* sse4_1_blendvpd */
    case 1619:  /* sse4_1_blendvps */
    case 1616:  /* avx_blendvpd256 */
    case 1615:  /* avx_blendvps256 */
    case 1614:  /* avx_blendvpd */
    case 1613:  /* avx_blendvps */
    case 1605:  /* sse4a_extrqi */
    case 1594:  /* ssse3_palignrdi */
    case 1593:  /* ssse3_palignrti */
    case 1592:  /* *avx_palignrti */
    case 1165:  /* *fma_fmaddsub_v4df */
    case 1164:  /* *fma_fmaddsub_v8sf */
    case 1163:  /* *fma_fmaddsub_v2df */
    case 1162:  /* *fma_fmaddsub_v4sf */
    case 1133:  /* *fma4_fmaddsub_v4df */
    case 1132:  /* *fma4_fmaddsub_v8sf */
    case 1131:  /* *fma4_fmaddsub_v2df */
    case 1130:  /* *fma4_fmaddsub_v4sf */
    case 1039:  /* avx_cmppdv4df3 */
    case 1038:  /* avx_cmppsv8sf3 */
    case 1037:  /* avx_cmppdv2df3 */
    case 1036:  /* avx_cmppsv4sf3 */
    case 370:  /* copysigntf3_const */
    case 369:  /* copysigndf3_const */
    case 368:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 915:  /* *sse_absnegv2df2 */
    case 914:  /* *sse_absnegv4sf2 */
    case 913:  /* *avx_absnegv4df2 */
    case 912:  /* *avx_absnegv8sf2 */
    case 911:  /* *avx_absnegv2df2 */
    case 910:  /* *avx_absnegv4sf2 */
    case 355:  /* *absnegtf2_sse */
    case 354:  /* *absnegxf2_i387 */
    case 353:  /* *absnegdf2_i387 */
    case 352:  /* *absnegsf2_i387 */
    case 351:  /* *absnegdf2_sse */
    case 350:  /* *absnegsf2_sse */
    case 349:  /* *absnegdf2_mixed */
    case 348:  /* *absnegsf2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 533:  /* *popcountdi2_cmp */
    case 532:  /* *popcountsi2_cmp */
    case 531:  /* *popcounthi2_cmp */
    case 381:  /* *one_cmpldi2_2 */
    case 380:  /* *one_cmplsi2_2 */
    case 379:  /* *one_cmplhi2_2 */
    case 378:  /* *one_cmplqi2_2 */
    case 347:  /* *negdi2_cmpz */
    case 346:  /* *negsi2_cmpz */
    case 345:  /* *neghi2_cmpz */
    case 344:  /* *negqi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 337:  /* *xorqi_cc_ext_1 */
    case 300:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 322:  /* *xorqi_2_slp */
    case 321:  /* *iorqi_2_slp */
    case 298:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 289:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 288:  /* *testqi_ext_2 */
    case 287:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 286:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 281:  /* udivmodhiqi3 */
    case 275:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 280:  /* *udivmodsi4_noext */
    case 279:  /* *udivmodhi4_noext */
    case 274:  /* *divmodsi4_noext */
    case 273:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 278:  /* *udivmodsi4 */
    case 277:  /* *udivmodhi4 */
    case 276:  /* udivmodsi4_1 */
    case 272:  /* *divmodsi4 */
    case 271:  /* *divmodhi4 */
    case 270:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 269:  /* *umulsi3_highpart_1 */
    case 268:  /* *smulsi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 267:  /* *umulqihi3_1 */
    case 266:  /* *mulqihi3_1 */
    case 265:  /* *umulsidi3_1 */
    case 264:  /* *mulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 260:  /* *subdi3_cc_overflow */
    case 259:  /* *adddi3_cc_overflow */
    case 258:  /* *subsi3_cc_overflow */
    case 257:  /* *addsi3_cc_overflow */
    case 256:  /* *subhi3_cc_overflow */
    case 255:  /* *addhi3_cc_overflow */
    case 254:  /* *subqi3_cc_overflow */
    case 253:  /* *addqi3_cc_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 252:  /* *subsi3_cconly_overflow */
    case 251:  /* *subhi3_cconly_overflow */
    case 250:  /* *subqi3_cconly_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 249:  /* *addsi3_cconly_overflow */
    case 248:  /* *addhi3_cconly_overflow */
    case 247:  /* *addqi3_cconly_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 246:  /* *subdi3_carry */
    case 245:  /* *adddi3_carry */
    case 244:  /* *subsi3_carry */
    case 243:  /* *addsi3_carry */
    case 242:  /* *subhi3_carry */
    case 241:  /* *addhi3_carry */
    case 240:  /* *subqi3_carry */
    case 239:  /* *addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 238:  /* *subdi_3 */
    case 237:  /* *subsi_3 */
    case 236:  /* *subhi_3 */
    case 235:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 223:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1674:  /* xop_pmacssdd */
    case 1673:  /* xop_pmacsdd */
    case 1672:  /* xop_pmacssww */
    case 1671:  /* xop_pmacsww */
    case 222:  /* *lea_general_2 */
    case 221:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 336:  /* *xorqi_ext_2 */
    case 335:  /* *iorqi_ext_2 */
    case 334:  /* *xorqi_ext_1 */
    case 333:  /* *iorqi_ext_1 */
    case 302:  /* *andqi_ext_2 */
    case 301:  /* *andqi_ext_1 */
    case 220:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 332:  /* *xorqi_ext_0 */
    case 331:  /* *iorqi_ext_0 */
    case 299:  /* andqi_ext_0 */
    case 219:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 434:  /* *ashrdi3_cconly */
    case 433:  /* *lshrdi3_cconly */
    case 432:  /* *ashrsi3_cconly */
    case 431:  /* *lshrsi3_cconly */
    case 430:  /* *ashrhi3_cconly */
    case 429:  /* *lshrhi3_cconly */
    case 428:  /* *ashrqi3_cconly */
    case 427:  /* *lshrqi3_cconly */
    case 400:  /* *ashldi3_cconly */
    case 399:  /* *ashlsi3_cconly */
    case 398:  /* *ashlhi3_cconly */
    case 397:  /* *ashlqi3_cconly */
    case 330:  /* *xordi_3 */
    case 329:  /* *iordi_3 */
    case 328:  /* *xorsi_3 */
    case 327:  /* *iorsi_3 */
    case 326:  /* *xorhi_3 */
    case 325:  /* *iorhi_3 */
    case 324:  /* *xorqi_3 */
    case 323:  /* *iorqi_3 */
    case 218:  /* *adddi_5 */
    case 217:  /* *addsi_5 */
    case 216:  /* *addhi_5 */
    case 215:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 211:  /* *adddi_3 */
    case 210:  /* *addsi_3 */
    case 209:  /* *addhi_3 */
    case 208:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 426:  /* *ashrdi3_cmp */
    case 425:  /* *lshrdi3_cmp */
    case 424:  /* *ashrsi3_cmp */
    case 423:  /* *lshrsi3_cmp */
    case 422:  /* *ashrhi3_cmp */
    case 421:  /* *lshrhi3_cmp */
    case 420:  /* *ashrqi3_cmp */
    case 419:  /* *lshrqi3_cmp */
    case 396:  /* *ashldi3_cmp */
    case 395:  /* *ashlsi3_cmp */
    case 394:  /* *ashlhi3_cmp */
    case 393:  /* *ashlqi3_cmp */
    case 320:  /* *xordi_2 */
    case 319:  /* *iordi_2 */
    case 318:  /* *xorsi_2 */
    case 317:  /* *iorsi_2 */
    case 316:  /* *xorhi_2 */
    case 315:  /* *iorhi_2 */
    case 314:  /* *xorqi_2 */
    case 313:  /* *iorqi_2 */
    case 297:  /* *andsi_2 */
    case 296:  /* *andhi_2 */
    case 295:  /* *andqi_2 */
    case 294:  /* *andqi_2_maybe_si */
    case 234:  /* *subdi_2 */
    case 233:  /* *subsi_2 */
    case 232:  /* *subhi_2 */
    case 231:  /* *subqi_2 */
    case 207:  /* *adddi_2 */
    case 206:  /* *addsi_2 */
    case 205:  /* *addhi_2 */
    case 204:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 450:  /* *rotrqi3_1_slp */
    case 449:  /* *rotlqi3_1_slp */
    case 418:  /* *ashrqi3_1_slp */
    case 417:  /* *lshrqi3_1_slp */
    case 392:  /* *ashlqi3_1_slp */
    case 312:  /* *xorqi_1_slp */
    case 311:  /* *iorqi_1_slp */
    case 293:  /* *andqi_1_slp */
    case 230:  /* *subqi_1_slp */
    case 203:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 195:  /* addqi3_cc */
    case 194:  /* *adddi3_cc */
    case 193:  /* *addsi3_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 715:  /* pro_epilogue_adjust_stack_si_sub */
    case 714:  /* pro_epilogue_adjust_stack_si_add */
    case 448:  /* *rotrdi3_1 */
    case 447:  /* *rotldi3_1 */
    case 446:  /* *rotrsi3_1 */
    case 445:  /* *rotlsi3_1 */
    case 444:  /* *rotrhi3_1 */
    case 443:  /* *rotlhi3_1 */
    case 442:  /* *rotrqi3_1 */
    case 441:  /* *rotlqi3_1 */
    case 416:  /* *ashrdi3_1 */
    case 415:  /* *lshrdi3_1 */
    case 414:  /* *ashrsi3_1 */
    case 413:  /* *lshrsi3_1 */
    case 412:  /* *ashrhi3_1 */
    case 411:  /* *lshrhi3_1 */
    case 410:  /* *ashrqi3_1 */
    case 409:  /* *lshrqi3_1 */
    case 408:  /* ashrsi3_cvt */
    case 406:  /* *ashrdi3_doubleword */
    case 405:  /* *lshrdi3_doubleword */
    case 391:  /* *ashlqi3_1_lea */
    case 390:  /* *ashlqi3_1 */
    case 389:  /* *ashlhi3_1_lea */
    case 388:  /* *ashlhi3_1 */
    case 387:  /* *ashldi3_1 */
    case 386:  /* *ashlsi3_1 */
    case 382:  /* *ashldi3_doubleword */
    case 310:  /* *xorqi_1 */
    case 309:  /* *iorqi_1 */
    case 308:  /* *xordi_1 */
    case 307:  /* *iordi_1 */
    case 306:  /* *xorsi_1 */
    case 305:  /* *iorsi_1 */
    case 304:  /* *xorhi_1 */
    case 303:  /* *iorhi_1 */
    case 292:  /* *andqi_1 */
    case 291:  /* *andhi_1 */
    case 290:  /* *andsi_1 */
    case 263:  /* *mulqi3_1 */
    case 262:  /* *mulhi3_1 */
    case 261:  /* *mulsi3_1 */
    case 229:  /* *subdi_1 */
    case 228:  /* *subsi_1 */
    case 227:  /* *subhi_1 */
    case 226:  /* *subqi_1 */
    case 225:  /* *subti3_doubleword */
    case 224:  /* *subdi3_doubleword */
    case 202:  /* *addqi_1_lea */
    case 201:  /* *addqi_1 */
    case 200:  /* *addhi_1_lea */
    case 199:  /* *addhi_1 */
    case 198:  /* *adddi_1 */
    case 197:  /* *addsi_1 */
    case 192:  /* *addti3_doubleword */
    case 191:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 187:  /* floatdixf2_i387_with_xmm */
    case 186:  /* floatdidf2_i387_with_xmm */
    case 185:  /* floatdisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 131:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 135:  /* fix_truncsi_i387_with_temp */
    case 134:  /* fix_trunchi_i387_with_temp */
    case 130:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 190:  /* *floatunssixf2_1 */
    case 189:  /* *floatunssidf2_1 */
    case 188:  /* *floatunssisf2_1 */
    case 133:  /* fix_truncsi_i387 */
    case 132:  /* fix_trunchi_i387 */
    case 126:  /* fix_truncdi_i387_fisttp_with_temp */
    case 125:  /* fix_truncsi_i387_fisttp_with_temp */
    case 124:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 115:  /* *fixuns_truncdf_1 */
    case 114:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 886:  /* movdi_to_sse */
    case 506:  /* ffssi2_no_cmove */
    case 178:  /* *floatdixf2_i387_with_temp */
    case 177:  /* *floatdidf2_i387_with_temp */
    case 176:  /* *floatdisf2_i387_with_temp */
    case 175:  /* *floatsixf2_i387_with_temp */
    case 174:  /* *floatsidf2_i387_with_temp */
    case 173:  /* *floatsisf2_i387_with_temp */
    case 168:  /* *floatsidf2_sse_with_temp */
    case 167:  /* *floatsisf2_sse_with_temp */
    case 164:  /* *floatsidf2_vector_sse_with_temp */
    case 163:  /* *floatsisf2_vector_sse_with_temp */
    case 158:  /* *floatsidf2_mixed_with_temp */
    case 157:  /* *floatsisf2_mixed_with_temp */
    case 154:  /* *floatsidf2_vector_mixed_with_temp */
    case 153:  /* *floatsisf2_vector_mixed_with_temp */
    case 143:  /* *floathixf2_i387_with_temp */
    case 142:  /* *floathidf2_i387_with_temp */
    case 141:  /* *floathisf2_i387_with_temp */
    case 123:  /* fix_truncdi_i387_fisttp */
    case 122:  /* fix_truncsi_i387_fisttp */
    case 121:  /* fix_trunchi_i387_fisttp */
    case 109:  /* *truncxfdf2_mixed */
    case 108:  /* *truncxfsf2_mixed */
    case 106:  /* *truncdfsf_i387 */
    case 105:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 93:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 688:  /* *x86_movsicc_0_m1_se */
    case 687:  /* *x86_movsicc_0_m1 */
    case 530:  /* popcountsi2 */
    case 529:  /* popcounthi2 */
    case 511:  /* clzsi2_abm */
    case 510:  /* clzhi2_abm */
    case 509:  /* ctzsi2 */
    case 508:  /* ctzhi2 */
    case 343:  /* *negdi2_1 */
    case 342:  /* *negsi2_1 */
    case 341:  /* *neghi2_1 */
    case 340:  /* *negqi2_1 */
    case 339:  /* *negti2_doubleword */
    case 338:  /* *negdi2_doubleword */
    case 129:  /* *fix_truncdi_i387_1 */
    case 128:  /* *fix_truncsi_i387_1 */
    case 127:  /* *fix_trunchi_i387_1 */
    case 90:  /* *zero_extendqisi2_movzbl_and */
    case 89:  /* *zero_extendqihi2_movzbl_and */
    case 88:  /* *zero_extendqisi2_and */
    case 87:  /* *zero_extendqihi2_and */
    case 85:  /* zero_extendhisi2_and */
    case 84:  /* zero_extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 68:  /* *movqi_insv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1648:  /* sse4_1_zero_extendv2siv2di2 */
    case 1647:  /* sse4_1_sign_extendv2siv2di2 */
    case 1646:  /* sse4_1_zero_extendv2hiv2di2 */
    case 1645:  /* sse4_1_sign_extendv2hiv2di2 */
    case 1644:  /* sse4_1_zero_extendv2qiv2di2 */
    case 1643:  /* sse4_1_sign_extendv2qiv2di2 */
    case 1642:  /* sse4_1_zero_extendv4hiv4si2 */
    case 1641:  /* sse4_1_sign_extendv4hiv4si2 */
    case 1640:  /* sse4_1_zero_extendv4qiv4si2 */
    case 1639:  /* sse4_1_sign_extendv4qiv4si2 */
    case 1638:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 1637:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 1210:  /* sse2_cvtps2pd */
    case 1209:  /* *avx_cvtps2pd256_2 */
    case 1197:  /* sse2_cvtdq2pd */
    case 1196:  /* *avx_cvtdq2pd256_2 */
    case 1194:  /* sse2_cvttsd2si */
    case 1177:  /* sse_cvttss2si */
    case 1172:  /* sse_cvttps2pi */
    case 891:  /* sse2_movq128 */
    case 854:  /* *vec_dupv4hi */
    case 597:  /* sqrt_extenddfxf2_i387 */
    case 596:  /* sqrt_extendsfxf2_i387 */
    case 367:  /* *negextenddfxf2 */
    case 366:  /* *absextenddfxf2 */
    case 365:  /* *negextendsfxf2 */
    case 364:  /* *absextendsfxf2 */
    case 363:  /* *negextendsfdf2 */
    case 362:  /* *absextendsfdf2 */
    case 66:  /* *movqi_extzv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1781:  /* vec_dupv4df */
    case 1780:  /* vec_dupv4di */
    case 1779:  /* vec_dupv8sf */
    case 1778:  /* vec_dupv8si */
    case 1600:  /* absv2si2 */
    case 1599:  /* absv4hi2 */
    case 1598:  /* absv8qi2 */
    case 1597:  /* absv4si2 */
    case 1596:  /* absv8hi2 */
    case 1595:  /* absv16qi2 */
    case 1527:  /* *vec_dupv2di */
    case 1526:  /* *vec_dupv2di_sse3 */
    case 1525:  /* *vec_dupv2di_avx */
    case 1524:  /* *vec_dupv4si */
    case 1523:  /* *vec_dupv4si_avx */
    case 1522:  /* *vec_extractv2di_1_sse */
    case 1521:  /* *vec_extractv2di_1_sse2 */
    case 1520:  /* *vec_extractv2di_1_avx */
    case 1519:  /* *sse2_storeq */
    case 1517:  /* sse2_stored */
    case 1302:  /* *vec_dupv2df */
    case 1301:  /* *vec_dupv2df_sse3 */
    case 1298:  /* *vec_extractv2df_0_sse */
    case 1297:  /* *vec_extractv2df_1_sse */
    case 1292:  /* sse2_storelpd */
    case 1291:  /* sse2_storehpd */
    case 1290:  /* *avx_storehpd */
    case 1270:  /* vec_extract_hi_v32qi */
    case 1269:  /* vec_extract_lo_v32qi */
    case 1268:  /* vec_extract_hi_v16hi */
    case 1267:  /* vec_extract_lo_v16hi */
    case 1266:  /* vec_extract_hi_v8sf */
    case 1265:  /* vec_extract_hi_v8si */
    case 1264:  /* vec_extract_lo_v8sf */
    case 1263:  /* vec_extract_lo_v8si */
    case 1262:  /* vec_extract_hi_v4df */
    case 1261:  /* vec_extract_hi_v4di */
    case 1260:  /* vec_extract_lo_v4df */
    case 1259:  /* vec_extract_lo_v4di */
    case 1258:  /* *vec_extractv4sf_0 */
    case 1240:  /* *vec_dupv4sf */
    case 1239:  /* *vec_dupv4sf_avx */
    case 1234:  /* sse_storelps */
    case 1233:  /* *avx_storelps */
    case 1230:  /* sse_storehps */
    case 1208:  /* avx_cvtps2pd256 */
    case 1206:  /* avx_cvtpd2ps256 */
    case 1200:  /* avx_cvttpd2dq256 */
    case 1195:  /* avx_cvtdq2pd256 */
    case 1189:  /* sse2_cvttpd2pi */
    case 1187:  /* sse2_cvtpi2pd */
    case 1186:  /* sse2_cvttps2dq */
    case 1185:  /* avx_cvttps2dq256 */
    case 1184:  /* avx_cvttps2dq */
    case 1180:  /* sse2_cvtdq2ps */
    case 1179:  /* avx_cvtdq2ps256 */
    case 1178:  /* avx_cvtdq2ps */
    case 965:  /* sqrtv2df2 */
    case 964:  /* sqrtv4df2 */
    case 963:  /* sse_sqrtv4sf2 */
    case 962:  /* avx_sqrtv8sf2 */
    case 858:  /* *vec_extractv2si_1 */
    case 857:  /* *vec_extractv2si_0 */
    case 855:  /* *vec_dupv2si */
    case 853:  /* mmx_pswapdv2si2 */
    case 788:  /* *vec_extractv2sf_1 */
    case 787:  /* *vec_extractv2sf_0 */
    case 785:  /* *vec_dupv2sf */
    case 784:  /* mmx_pswapdv2sf2 */
    case 783:  /* mmx_floatv2si2 */
    case 780:  /* mmx_pf2id */
    case 689:  /* *x86_movsicc_0_m1_neg */
    case 600:  /* *sqrtdf2_sse */
    case 599:  /* *sqrtsf2_sse */
    case 595:  /* sqrtxf2 */
    case 535:  /* *bswapsi2_1 */
    case 534:  /* *bswapsi2_movbe */
    case 377:  /* *one_cmplqi2_1 */
    case 376:  /* *one_cmpldi2_1 */
    case 375:  /* *one_cmplsi2_1 */
    case 374:  /* *one_cmplhi2_1 */
    case 361:  /* *negxf2_1 */
    case 360:  /* *absxf2_1 */
    case 359:  /* *negdf2_1 */
    case 358:  /* *absdf2_1 */
    case 357:  /* *negsf2_1 */
    case 356:  /* *abssf2_1 */
    case 184:  /* *floatdixf2_i387 */
    case 183:  /* *floatdidf2_i387 */
    case 182:  /* *floatdisf2_i387 */
    case 181:  /* *floatsixf2_i387 */
    case 180:  /* *floatsidf2_i387 */
    case 179:  /* *floatsisf2_i387 */
    case 172:  /* *floatsidf2_sse_nointerunit */
    case 171:  /* *floatsisf2_sse_nointerunit */
    case 170:  /* *floatsidf2_sse_interunit */
    case 169:  /* *floatsisf2_sse_interunit */
    case 166:  /* *floatsidf2_vector_sse */
    case 165:  /* *floatsisf2_vector_sse */
    case 162:  /* *floatsidf2_mixed_nointerunit */
    case 161:  /* *floatsisf2_mixed_nointerunit */
    case 160:  /* *floatsidf2_mixed_interunit */
    case 159:  /* *floatsisf2_mixed_interunit */
    case 156:  /* *floatsidf2_vector_mixed */
    case 155:  /* *floatsisf2_vector_mixed */
    case 152:  /* *floatdixf2_1 */
    case 151:  /* *floatdidf2_1 */
    case 150:  /* *floatdisf2_1 */
    case 149:  /* *floatsixf2_1 */
    case 148:  /* *floatsidf2_1 */
    case 147:  /* *floatsisf2_1 */
    case 146:  /* *floathixf2_i387 */
    case 145:  /* *floathidf2_i387 */
    case 144:  /* *floathisf2_i387 */
    case 140:  /* *floathixf2_1 */
    case 139:  /* *floathidf2_1 */
    case 138:  /* *floathisf2_1 */
    case 120:  /* fix_truncdi_fisttp_i387_1 */
    case 119:  /* fix_truncsi_fisttp_i387_1 */
    case 118:  /* fix_trunchi_fisttp_i387_1 */
    case 117:  /* fix_truncdfsi_sse */
    case 116:  /* fix_truncsfsi_sse */
    case 113:  /* *truncxfdf2_i387 */
    case 112:  /* *truncxfsf2_i387 */
    case 111:  /* truncxfdf2_i387_noop */
    case 110:  /* truncxfsf2_i387_noop */
    case 107:  /* *truncdfsf2_i387_1 */
    case 104:  /* *truncdfsf_fast_i387 */
    case 103:  /* *truncdfsf_fast_sse */
    case 102:  /* *truncdfsf_fast_mixed */
    case 101:  /* *extenddfxf2_i387 */
    case 100:  /* *extendsfxf2_i387 */
    case 99:  /* *extendsfdf2_i387 */
    case 98:  /* *extendsfdf2_sse */
    case 97:  /* *extendsfdf2_mixed */
    case 96:  /* extendqihi2 */
    case 95:  /* extendqisi2 */
    case 94:  /* extendhisi2 */
    case 92:  /* *zero_extendqisi2_movzbl */
    case 91:  /* *zero_extendqihi2_movzbl */
    case 86:  /* *zero_extendhisi2_movzwl */
    case 65:  /* *movsi_extzv_1 */
    case 64:  /* *movqi_extv_1 */
    case 63:  /* *movsi_extv_1 */
    case 62:  /* *movhi_extv_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 61:  /* *movstricthi_xor */
    case 60:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 490:  /* *sibcall_1 */
    case 488:  /* *call_1 */
    case 486:  /* *call_0 */
    case 456:  /* *setcc_qi_slp */
    case 67:  /* *movsi_insv_1 */
    case 59:  /* *movstricthi_1 */
    case 58:  /* *movstrictqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 83:  /* *swapdf */
    case 82:  /* *swapsf */
    case 81:  /* swapxf */
    case 57:  /* *swaphi_2 */
    case 56:  /* *swapqi_2 */
    case 55:  /* *swaphi_1 */
    case 54:  /* *swapqi_1 */
    case 53:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 453:  /* *setcc_si_1_and */
    case 46:  /* *movsi_or */
    case 45:  /* *movsi_xor */
    case 44:  /* *popsi1_epilogue */
    case 42:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 885:  /* *movv2df_internal */
    case 884:  /* *movv4sf_internal */
    case 883:  /* *movv1ti_internal */
    case 882:  /* *movv2di_internal */
    case 881:  /* *movv4si_internal */
    case 880:  /* *movv8hi_internal */
    case 879:  /* *movv16qi_internal */
    case 878:  /* *avx_movv4df_internal */
    case 877:  /* *avx_movv8sf_internal */
    case 876:  /* *avx_movv4di_internal */
    case 875:  /* *avx_movv8si_internal */
    case 874:  /* *avx_movv16hi_internal */
    case 873:  /* *avx_movv32qi_internal */
    case 872:  /* *avx_movv2df_internal */
    case 871:  /* *avx_movv4sf_internal */
    case 870:  /* *avx_movv1ti_internal */
    case 869:  /* *avx_movv2di_internal */
    case 868:  /* *avx_movv4si_internal */
    case 867:  /* *avx_movv8hi_internal */
    case 866:  /* *avx_movv16qi_internal */
    case 760:  /* *movv2sf_internal */
    case 759:  /* *movv2sf_internal_avx */
    case 758:  /* *movv1di_internal */
    case 757:  /* *movv2si_internal */
    case 756:  /* *movv4hi_internal */
    case 755:  /* *movv8qi_internal */
    case 754:  /* *movv1di_internal_avx */
    case 753:  /* *movv2si_internal_avx */
    case 752:  /* *movv4hi_internal_avx */
    case 751:  /* *movv8qi_internal_avx */
    case 734:  /* *prefetch_3dnow_si */
    case 455:  /* *setcc_qi */
    case 454:  /* *setcc_si_1_movzbl */
    case 196:  /* *lea_1 */
    case 80:  /* *movsf_internal */
    case 79:  /* *movdf_internal_nointeger */
    case 78:  /* *movdf_internal */
    case 77:  /* *movxf_internal_nointeger */
    case 76:  /* *movxf_internal */
    case 75:  /* *movtf_internal */
    case 74:  /* *pushsf */
    case 73:  /* *pushdf_nointeger */
    case 72:  /* *pushdf */
    case 71:  /* *pushxf_nointeger */
    case 70:  /* *pushxf */
    case 69:  /* *pushtf */
    case 52:  /* *movqi_internal */
    case 51:  /* *movhi_internal */
    case 50:  /* *movsi_internal */
    case 49:  /* *movdi_internal */
    case 48:  /* *movti_internal_sse */
    case 47:  /* *movoi_internal_avx */
    case 43:  /* *popsi1 */
    case 41:  /* *pushhi2 */
    case 40:  /* *pushqi2 */
    case 39:  /* *pushsi2 */
    case 38:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 137:  /* x86_fldcw_1 */
    case 31:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1549:  /* sse_stmxcsr */
    case 746:  /* lwp_slwpcbsi */
    case 743:  /* *rdtsc */
    case 544:  /* *load_tp_si */
    case 136:  /* x86_fnstcw_1 */
    case 30:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 29:  /* *cmpfp_si_cc */
    case 28:  /* *cmpfp_hi_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 27:  /* *cmpfp_si */
    case 26:  /* *cmpfp_hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 214:  /* *addsi_4 */
    case 213:  /* *addhi_4 */
    case 212:  /* *addqi_4 */
    case 25:  /* *cmpfp_u_cc */
    case 23:  /* *cmpfp_df_cc */
    case 22:  /* *cmpfp_sf_cc */
    case 19:  /* *cmpfp_xf_cc */
    case 17:  /* *cmpfp_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 24:  /* *cmpfp_u */
    case 21:  /* *cmpfp_df */
    case 20:  /* *cmpfp_sf */
    case 18:  /* *cmpfp_xf */
    case 16:  /* *cmpfp_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 15:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 14:  /* *cmpqi_ext_3_insn */
    case 13:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 12:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 285:  /* *testsi_1 */
    case 284:  /* *testhi_1 */
    case 283:  /* *testqi_1 */
    case 282:  /* *testqi_1_maybe_si */
    case 11:  /* *cmpdi_minus_1 */
    case 10:  /* *cmpsi_minus_1 */
    case 9:  /* *cmphi_minus_1 */
    case 8:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 37:  /* *cmpfp_iu_387 */
    case 36:  /* *cmpfp_iu_sse */
    case 35:  /* *cmpfp_iu_mixed */
    case 34:  /* *cmpfp_i_i387 */
    case 33:  /* *cmpfp_i_sse */
    case 32:  /* *cmpfp_i_mixed */
    case 7:  /* *cmpdi_1 */
    case 6:  /* *cmpsi_1 */
    case 5:  /* *cmphi_1 */
    case 4:  /* *cmpqi_1 */
    case 3:  /* *cmpdi_ccno_1 */
    case 2:  /* *cmpsi_ccno_1 */
    case 1:  /* *cmphi_ccno_1 */
    case 0:  /* *cmpqi_ccno_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
