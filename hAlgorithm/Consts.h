#pragma once
#include "stdafx.h"
#include <lib2.h>

#ifndef __E_STATIC_LIB
LIB_CONST_INFO Consts[] =
{
	/* { 中文名称, 英文名称, 常量布局, 常量等级(LVL_), 参数类型(CT_), 文本内容, 数值内容 } */
	{ _T("常量_ZERO"), _T("ZERO"), nullptr, LVL_SIMPLE, CT_NUM, nullptr, 0 },//数值常量
	{ _T("常量_TEST"), _T("TEST"), nullptr, LVL_HIGH, CT_TEXT, _T("TEST"), NULL }//文本常量
};
#endif


/*
常量等级有: LVL_SIMPLE          1        // 初级
LVL_SECONDARY       2        // 中级
LVL_HIGH            3        // 高级

参数类型有 : CT_NUM             1    // sample: 3.1415926
CT_BOOL            2    // sample: 1
CT_TEXT            3    // sample: "abc"

文本内容是CT_TEXT用，数值内容是CT_NUM和CT_BOOL用。
*/