#include "stdafx.h"

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
	pRetData->m_pInt = nullptr;
	auto datatype = pRetData->m_dtDataType;
	void* v1 = &pRetData[0];
}
EXTERN_C void hAlgorithm_max(PMDATA_INF pRetData, INT iArgCount, PMDATA_INF pArgInf)
{

}
EXTERN_C void hAlgorithm_average(PMDATA_INF pRetData, INT iArgCount, PMDATA_INF pArgInf)
{

}
