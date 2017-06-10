#include "stdafx.h"
#include<cstdio>
ARG_INFO hAlgorithm_min_CommandArgs[] =
{
	/* { 参数名称, 参数描述, 图像索引, 图像数量, 参数类型(参见SDT_), 默认数值, 参数类别(参见AS_) } */
	{ _T("pValue1"), _T("参考值 1"), 0, 0, _SDT_ALL, NULL, AS_DEFAULT_VALUE_IS_EMPTY },
	{ _T("pValue2"), _T("参考值 2"), 0, 0, _SDT_ALL, NULL, AS_DEFAULT_VALUE_IS_EMPTY }
};
ARG_INFO hAlgorithm_max_CommandArgs[] =
{
	/* { 参数名称, 参数描述, 图像索引, 图像数量, 参数类型(参见SDT_), 默认数值, 参数类别(参见AS_) } */
	{ _T("pValue1"), _T("参考值 1"), 0, 0, _SDT_ALL, NULL, AS_DEFAULT_VALUE_IS_EMPTY },
	{ _T("pValue2"), _T("参考值 2"), 0, 0, _SDT_ALL, NULL, AS_DEFAULT_VALUE_IS_EMPTY }
};
ARG_INFO hAlgorithm_average_CommandArgs[] =
{
	/* { 参数名称, 参数描述, 图像索引, 图像数量, 参数类型(参见SDT_), 默认数值, 参数类别(参见AS_) } */
	{ _T("pArray"), _T("参考数组"), 0, 0, _SDT_ALL, NULL, AS_RECEIVE_ARRAY_DATA }
};

EXTERN_C void hAlgorithm_min(PMDATA_INF pRetData, INT iArgCount, PMDATA_INF pArgInf)
{
	auto datatype1 = pArgInf[0].m_dtDataType;
	auto datatype2 = pArgInf[1].m_dtDataType;
	if (datatype1 != datatype2)
	{
		GReportError("pValue1 和 pValue2 的数据类型不匹配");
	}
}
EXTERN_C void hAlgorithm_max(PMDATA_INF pRetData, INT iArgCount, PMDATA_INF pArgInf)
{
	auto datatype1 = pArgInf[0].m_dtDataType;
	auto datatype2 = pArgInf[1].m_dtDataType;
	if (datatype1 != datatype2)
	{
		GReportError("pValue1 和 pValue2 的数据类型不匹配");
	}
}
EXTERN_C void hAlgorithm_average(PMDATA_INF pRetData, INT iArgCount, PMDATA_INF pArgInf)
{
	auto dtType = pArgInf->m_dtDataType;
	auto cntAry = 0;
	void* ptr = GetAryElementInf(*pArgInf->m_ppAryData, &cntAry);
	dtType &= ~DT_IS_ARY;
}
