#pragma once
#include "stdafx.h"

//定义自定义数据类型
#ifndef __E_STATIC_LIB
INT DatatypeCommandIndexs[] =
{
	1
};
static LIB_DATA_TYPE_INFO DataTypes[] =
{
	/* { 中文名称, 英文名称, 数据描述, 索引数量, 命令索引, 对象状态, 图标索引, 事件数量, 事件指针, 属性数量, 属性指针, 界面指针, 元素数量, 元素指针 } */
	{ _T("数据类型命令"), _T("DatatypeCommand"), _T("测试数据类型命令。"), sizeof(DatatypeCommandIndexs) / sizeof(DatatypeCommandIndexs[0]), DatatypeCommandIndexs, NULL, 0, 0, nullptr, 0, nullptr, nullptr, 0, nullptr }
};
#endif

// 关于LIB_DATA_TYPE_INFO的解释 以及 窗口型数据的定义 都可参见开发文档中 "m_pDataType成员说明"和"数据类型说明"。
