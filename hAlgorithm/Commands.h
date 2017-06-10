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
	/* { 中文名称, 英文名称, 对象描述, 所属类别(-1是数据类型的方法), 命令状态(CT_), 返回类型(SDT_), 此值保留, 对象等级(LVL_), 图像索引, 图像数量, 参数个数, 参数信息 } */
	{ _T("快速排序"),_T("qsort"),_T("对数组进行快速排序"),1,NULL,SDT_BOOL,0,LVL_SIMPLE,0,0,4,hAlgorithm_qsort_CommandArgs },
	{ _T("取较小值"),_T("min"),_T("取两者中较小值"),2,NULL,_SDT_ALL,0,LVL_SIMPLE,0,0,2,hAlgorithm_min_CommandArgs },
	{ _T("取较大值"),_T("max"),_T("取两者中较大值"),2,NULL,_SDT_ALL,0,LVL_SIMPLE,0,0,2,hAlgorithm_max_CommandArgs },
	{ _T("取平均值"),_T("average"),_T("取数组平均值"),2,NULL,_SDT_ALL,0,LVL_SIMPLE,0,0,1,hAlgorithm_average_CommandArgs }
};
#endif