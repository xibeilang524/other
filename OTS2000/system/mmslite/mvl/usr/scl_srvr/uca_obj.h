/*  This file created from input file '..\..\mvl\usr\scl_srvr\uca_obj.odf'
    Leaf Access Parameter (LAP) File: '..\..\mvl\usr\scl_srvr\leafmap.xml'
	Created Sat Feb 25 15:09:18 2012
*/

#ifndef FOUNDRY_OUTPUT_HEADER_INCLUDED
#define FOUNDRY_OUTPUT_HEADER_INCLUDED

#include "mvl_uca.h"

#ifdef __cplusplus
extern "C" {
#endif

/************************************************************************/
/* MVL Type Control Information */
extern MVL_TYPE_CTRL *mvl_type_ctrl;
extern ST_INT mvl_num_types;

/************************************************************************/


/* MVL Type ID's */


/************************************************************************/

/************************************************************************/


/*	Common Strings Index Defines	*/

#ifndef USE_RT_TYPE_2

#endif


/************************************************************************/
/* TYPEDEFS for MMS TYPES	                                              */
/************************************************************************/

/* Use ":CF", "-notypedefs" in the ODF file to not include this line */
#define USE_MMS_TYPEDEFS

#if defined (USE_MMS_TYPEDEFS)

/************************************************************************/
#endif /* if defined (USE_MMS_TYPEDEFS) */
/************************************************************************/

/************************************************************************/
/* UCA Runtime Type Function Indexes                                    */
/* These are generated by Foundry and should not be changed             */

#define U_CUSTOM_RD_IND_INDEX	0
#define U_CTL_SBO_RD_IND_INDEX	1
#define MVL61850_BEH_STVAL_RD_IND_INDEX	2
#define LLN0_HEALTH_STVAL_RD_IND_INDEX	3
#define LLN0_HEALTH_Q_RD_IND_INDEX	4
#define LLN0_HEALTH_T_RD_IND_INDEX	5
#define MVLU_RPTENA_RD_IND_FUN_INDEX	6
#define MVLU_RPTID_RD_IND_FUN_INDEX	7
#define MVLU_DATSETNA_RD_IND_FUN_INDEX	8
#define MVLU_CONFREV_RD_IND_INDEX	9
#define MVLU_OPTFLDS_RD_IND_FUN_INDEX	10
#define MVLU_BUFTIM_RD_IND_FUN_INDEX	11
#define MVLU_SQNUM_RD_IND_FUN_INDEX	12
#define MVLU_SQNUM_INT16U_RD_IND_FUN_INDEX	13
#define MVLU_TRGOPS_RD_IND_FUN_INDEX	14
#define MVLU_INTGPD_RD_IND_FUN_INDEX	15
#define MVLU_GI_RD_IND_INDEX	16
#define MVLU_PURGEBUF_RD_IND_INDEX	17
#define MVLU_ENTRYID_RD_IND_INDEX	18
#define MVLU_TIMEOFENTRY_RD_IND_INDEX	19
#define MVLU_RESV_RD_IND_FUN_INDEX	20
#define MVLU_RBEPD_RD_IND_FUN_INDEX	21
#define MVLU_TRGS_RD_IND_FUN_INDEX	22


#define U_CUSTOM_WR_IND_INDEX	0
#define U_NO_WRITE_ALLOWED_INDEX	1
#define U_CTL_SBOW_COMP_WR_IND_INDEX	2
#define U_CTL_OPER_CTLVAL_WR_IND_INDEX	3
#define U_CTL_OPER_OTHER_WR_IND_INDEX	4
#define U_CANCEL_COMP_WR_IND_INDEX	5
#define MVLU_RPTENA_WR_IND_FUN_INDEX	6
#define MVLU_RPTID_WR_IND_FUN_INDEX	7
#define MVL61850_DATSET_WR_IND_INDEX	8
#define MVLU_OPTFLDS_WR_IND_FUN_INDEX	9
#define MVLU_BUFTIM_WR_IND_FUN_INDEX	10
#define MVLU_SQNUM_WR_IND_FUN_INDEX	11
#define MVLU_TRGOPS_WR_IND_FUN_INDEX	12
#define MVLU_INTGPD_WR_IND_FUN_INDEX	13
#define MVLU_GI_WR_IND_INDEX	14
#define MVLU_PURGEBUF_WR_IND_INDEX	15
#define MVLU_ENTRYID_WR_IND_INDEX	16
#define MVLU_RESV_WR_IND_FUN_INDEX	17
#define MVLU_RBEPD_WR_IND_FUN_INDEX	18
#define MVLU_TRGS_WR_IND_FUN_INDEX	19

/************************************************************************/
/* UCA Read/Write Indication function external declarations */
/* These functions must be provided externally              */

ST_VOID u_custom_rd_ind (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID u_ctl_sbo_rd_ind (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvl61850_beh_stval_rd_ind (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID lln0_health_stval_rd_ind (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID lln0_health_q_rd_ind (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID lln0_health_t_rd_ind (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_rptena_rd_ind_fun (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_rptid_rd_ind_fun (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_datsetna_rd_ind_fun (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_confrev_rd_ind (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_optflds_rd_ind_fun (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_buftim_rd_ind_fun (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_sqnum_rd_ind_fun (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_sqnum_int16u_rd_ind_fun (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_trgops_rd_ind_fun (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_intgpd_rd_ind_fun (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_gi_rd_ind (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_purgebuf_rd_ind (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_entryid_rd_ind (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_timeofentry_rd_ind (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_resv_rd_ind_fun (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_rbepd_rd_ind_fun (MVLU_RD_VA_CTRL *mvluRdVaCtrl);
ST_VOID mvlu_trgs_rd_ind_fun (MVLU_RD_VA_CTRL *mvluRdVaCtrl);

ST_VOID u_custom_wr_ind (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID u_no_write_allowed (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID u_ctl_sbow_comp_wr_ind (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID u_ctl_oper_ctlval_wr_ind (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID u_ctl_oper_other_wr_ind (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID u_cancel_comp_wr_ind (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_rptena_wr_ind_fun (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_rptid_wr_ind_fun (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvl61850_datset_wr_ind (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_optflds_wr_ind_fun (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_buftim_wr_ind_fun (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_sqnum_wr_ind_fun (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_trgops_wr_ind_fun (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_intgpd_wr_ind_fun (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_gi_wr_ind (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_purgebuf_wr_ind (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_entryid_wr_ind (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_resv_wr_ind_fun (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_rbepd_wr_ind_fun (MVLU_WR_VA_CTRL *mvluWrVaCtrl);
ST_VOID mvlu_trgs_wr_ind_fun (MVLU_WR_VA_CTRL *mvluWrVaCtrl);

#ifdef __cplusplus
}
#endif

#endif /* #ifndef FOUNDRY_OUTPUT_HEADER_INCLUDED */