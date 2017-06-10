#include "stdafx.h"
#include<cstdio>
ARG_INFO hAlgorithm_min_CommandArgs[] =
{
	/* { ��������, ��������, ͼ������, ͼ������, ��������(�μ�SDT_), Ĭ����ֵ, �������(�μ�AS_) } */
	{ _T("pValue1"), _T("�ο�ֵ 1"), 0, 0, _SDT_ALL, NULL, AS_DEFAULT_VALUE_IS_EMPTY },
	{ _T("pValue2"), _T("�ο�ֵ 2"), 0, 0, _SDT_ALL, NULL, AS_DEFAULT_VALUE_IS_EMPTY }
};
ARG_INFO hAlgorithm_max_CommandArgs[] =
{
	/* { ��������, ��������, ͼ������, ͼ������, ��������(�μ�SDT_), Ĭ����ֵ, �������(�μ�AS_) } */
	{ _T("pValue1"), _T("�ο�ֵ 1"), 0, 0, _SDT_ALL, NULL, AS_DEFAULT_VALUE_IS_EMPTY },
	{ _T("pValue2"), _T("�ο�ֵ 2"), 0, 0, _SDT_ALL, NULL, AS_DEFAULT_VALUE_IS_EMPTY }
};
ARG_INFO hAlgorithm_average_CommandArgs[] =
{
	/* { ��������, ��������, ͼ������, ͼ������, ��������(�μ�SDT_), Ĭ����ֵ, �������(�μ�AS_) } */
	{ _T("pArray"), _T("�ο�����"), 0, 0, _SDT_ALL, NULL, AS_RECEIVE_ARRAY_DATA }
};

EXTERN_C void hAlgorithm_min(PMDATA_INF pRetData, INT iArgCount, PMDATA_INF pArgInf)
{
	auto datatype1 = pArgInf[0].m_dtDataType;
	auto datatype2 = pArgInf[1].m_dtDataType;
	if (datatype1 != datatype2)
	{
		GReportError("pValue1 �� pValue2 ���������Ͳ�ƥ��");
	}
}
EXTERN_C void hAlgorithm_max(PMDATA_INF pRetData, INT iArgCount, PMDATA_INF pArgInf)
{
	auto datatype1 = pArgInf[0].m_dtDataType;
	auto datatype2 = pArgInf[1].m_dtDataType;
	if (datatype1 != datatype2)
	{
		GReportError("pValue1 �� pValue2 ���������Ͳ�ƥ��");
	}
}
EXTERN_C void hAlgorithm_average(PMDATA_INF pRetData, INT iArgCount, PMDATA_INF pArgInf)
{
	auto dtType = pArgInf->m_dtDataType;
	auto cntAry = 0;
	void* ptr = GetAryElementInf(*pArgInf->m_ppAryData, &cntAry);
	dtType &= ~DT_IS_ARY;
}
