#pragma once
#include "stdafx.h"

ARG_INFO hAlgorithm_qsort_CommandArgs[];
ARG_INFO hAlgorithm_min_CommandArgs[];
ARG_INFO hAlgorithm_max_CommandArgs[];
ARG_INFO hAlgorithm_average_CommandArgs[];

EXTERN_C void hAlgorithm_qsort(PMDATA_INF, INT, PMDATA_INF);
EXTERN_C void hAlgorithm_min(PMDATA_INF, INT, PMDATA_INF);
EXTERN_C void hAlgorithm_max(PMDATA_INF, INT, PMDATA_INF);
EXTERN_C void hAlgorithm_average(PMDATA_INF, INT, PMDATA_INF);

#ifndef __E_STATIC_LIB
PFN_EXECUTE_CMD ExecuteCommand[] =
{
	hAlgorithm_qsort,
	hAlgorithm_min,
	hAlgorithm_max,
	hAlgorithm_average
};
static const char* const CommandNames[] =
{
	"hAlgorithm_qsort",
	"hAlgorithm_min",
	"hAlgorithm_max",
	"hAlgorithm_average"
};
static CMD_INFO Commands[] =
{
	/* { ��������, Ӣ������, ��������, �������(-1���������͵ķ���), ����״̬(CT_), ��������(SDT_), ��ֵ����, ����ȼ�(LVL_), ͼ������, ͼ������, ��������, ������Ϣ } */
	{ _T("��������"),_T("qsort"),_T("��������п�������"),1,NULL,SDT_BOOL,0,LVL_SIMPLE,0,0,4,hAlgorithm_qsort_CommandArgs },
	{ _T("ȡ��Сֵ"),_T("min"),_T("ȡ�����н�Сֵ"),2,NULL,_SDT_ALL,0,LVL_SIMPLE,0,0,2,hAlgorithm_min_CommandArgs },
	{ _T("ȡ�ϴ�ֵ"),_T("max"),_T("ȡ�����нϴ�ֵ"),2,NULL,_SDT_ALL,0,LVL_SIMPLE,0,0,2,hAlgorithm_max_CommandArgs },
	{ _T("ȡƽ��ֵ"),_T("average"),_T("ȡ����ƽ��ֵ"),2,NULL,_SDT_ALL,0,LVL_SIMPLE,0,0,1,hAlgorithm_average_CommandArgs }
};
#endif