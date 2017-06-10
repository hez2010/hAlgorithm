#include "stdafx.h"

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



/*
函数的实现都需要定义在宏的外面以便静态和动态库都能使用，但ExecuteCommand，Commands则只需定义在宏的里面供动态库使用。
pRetData 输出数据指针。当对应CMD_INFO中m_dtRetType为_SDT_NULL（即定义无返回值）时，pRetData无效；
iArgCount 函数参数个数
pArgInf 函数参数指针
*/
