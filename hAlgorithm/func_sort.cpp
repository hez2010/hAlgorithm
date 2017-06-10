#include "stdafx.h"
#include <algorithm>
using namespace std;

ARG_INFO hAlgorithm_qsort_CommandArgs[] =
{
	/* { 参数名称, 参数描述, 图像索引, 图像数量, 参数类型(参见SDT_), 默认数值, 参数类别(参见AS_) } */
	{ _T("pArray"), _T("待排序数组"), 0, 0, _SDT_ALL, NULL, AS_RECEIVE_VAR_ARRAY },
	{ _T("pBegin"), _T("起始排序位置，从 1 开始"), 0, 0, SDT_INT, 1, AS_HAS_DEFAULT_VALUE },
	{ _T("pEnd"), _T("排序终止位置，0 代表全部"), 0, 0, SDT_INT, 0, AS_HAS_DEFAULT_VALUE },
	{ _T("pIsAsc"), _T("是否正序排序"), 0, 0, SDT_BOOL, true, AS_HAS_DEFAULT_VALUE }

};

template<typename T, bool asc>

bool sort_template(const T& a, const T& b)
{
	bool v = a < b;
	return asc ? v : !v;
}

int comp_string_asc(const char* a, const char* b)
{
	if (strcmp(a, b) < 0) return true;
	else return false;
}

int comp_string_desc(const char* a, const char* b)
{
	if (strcmp(b, a) < 0) return true;
	else return false;
}

#define sort_x(name) sort(reinterpret_cast<name*>(reinterpret_cast<LONG>(ptr)+(begin-1)*sizeof(name)),reinterpret_cast<name*>(reinterpret_cast<LONG>(ptr)+end*sizeof(name)),asc?sort_template<name,true>:sort_template<name,false>)

EXTERN_C void hAlgorithm_qsort(PMDATA_INF pRetData, INT iArgCount, PMDATA_INF pArgInf)
{
	pRetData->m_bool = FALSE;
	auto dtType = pArgInf->m_dtDataType;
	auto cntAry = 0;
	auto begin = pArgInf[1].m_int;
	auto end = pArgInf[2].m_int;
	auto asc = pArgInf[3].m_bool;
	void* ptr = GetAryElementInf(*pArgInf->m_ppAryData, &cntAry);
	if (end < 0) return;
	if (end == 0) end = cntAry;
	if (end > cntAry) {
		return;
	}
	pRetData->m_bool = TRUE;
	dtType &= ~DT_IS_VAR;
	switch (dtType) {
	case SDT_BYTE: {
		sort_x(BYTE);
		break; }
	case SDT_SHORT: {
		sort_x(SHORT);
		break; }
	case SDT_INT: {
		sort_x(INT);
		break; }
	case SDT_INT64: {
		sort_x(INT64);
		break; }
	case SDT_FLOAT: {
		sort_x(FLOAT);
		break; }
	case SDT_DATE_TIME:
	case SDT_DOUBLE: {
		sort_x(DOUBLE);
		break; }
	case SDT_TEXT: {
		sort(reinterpret_cast<char**>(reinterpret_cast<LONG>(ptr) + (begin - 1) * sizeof(char*)), reinterpret_cast<char**>(reinterpret_cast<LONG>(ptr) + end * sizeof(char*)), asc ? comp_string_asc : comp_string_desc);
		break; }
	default:
		pRetData->m_bool = FALSE;
		break;
	}
};