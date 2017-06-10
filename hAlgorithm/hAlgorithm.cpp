// hAlgorithm.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "hAlgorithm.h"
#include <lang.h>
#include <fnshare.cpp>
#include "Consts.h"
#include "DataTypes.h"
#include "Commands.h"

EXTERN_C INT WINAPI hAlgorithm_ProcessNotifyLib(INT nMsg, DWORD dwParam1, DWORD dwParam2)
{
#ifndef __E_STATIC_LIB
	if (nMsg == NL_GET_CMD_FUNC_NAMES) // 返回所有命令实现函数的的函数名称数组(char*[]), 支持静态编译的动态库必须处理
		return reinterpret_cast<INT>(CommandNames);
	else if (nMsg == NL_GET_NOTIFY_LIB_FUNC_NAME) // 返回处理系统通知的函数名称(PFN_NOTIFY_LIB函数名称), 支持静态编译的动态库必须处理
		return reinterpret_cast<INT>("hAlgorithm_ProcessNotifyLib");
	else if (nMsg == NL_GET_DEPENDENT_LIBS) return static_cast<INT>(NULL);
	// 返回静态库所依赖的其它静态库文件名列表(格式为\0分隔的文本,结尾两个\0), 支持静态编译的动态库必须处理
	// kernel32.lib user32.lib gdi32.lib 等常用的系统库不需要放在此列表中
	// 返回NULL或NR_ERR表示不指定依赖文件  
#endif
	return ProcessNotifyLib(nMsg, dwParam1, dwParam2);
};

#ifndef __E_STATIC_LIB
static LIB_INFO LibInfo =
{
	/* { 库格式号, GUID串号, 主版本号, 次版本号, 构建版本号, 系统主版本号, 系统次版本号, 核心库主版本号, 核心库次版本号,
	支持库名, 支持库语言, 支持库描述, 支持库状态,
	作者姓名, 邮政编码, 通信地址, 电话号码, 传真号码, 电子邮箱, 主页地址, 其它信息,
	类型数量, 类型指针, 类别数量, 命令类别, 命令总数, 命令指针, 命令入口,
	附加功能, 功能描述, 消息指针, 超级模板, 模板描述,
	常量数量, 常量指针, 外部文件} */
	LIB_FORMAT_VER,
	_T(LIB_GUID_STR),
	LIB_MajorVersion,
	LIB_MinorVersion,
	LIB_BuildNumber,
	LIB_SysMajorVer,
	LIB_SysMinorVer,
	LIB_KrnlLibMajorVer,
	LIB_KrnlLibMinorVer,
	_T(LIB_NAME_STR),
	__GBK_LANG_VER,
	_T(LIB_DESCRIPTION_STR),
	_LIB_OS(__OS_WIN),
	_T(LIB_Author),
	_T(LIB_ZipCode),
	_T(LIB_Address),
	_T(LIB_Phone),
	_T(LIB_Fax),
	_T(LIB_Email),
	_T(LIB_HomePage),
	_T(LIB_Other),
	sizeof(DataTypes) / sizeof(DataTypes[0]),
	DataTypes,
	LIB_TYPE_COUNT,
	_T(LIB_TYPE_STR),
	sizeof(Commands) / sizeof(Commands[0]),
	Commands,
	ExecuteCommand,
	nullptr,
	nullptr,
	hAlgorithm_ProcessNotifyLib,
	nullptr,
	nullptr,
	sizeof(Consts) / sizeof(Consts[0]),
	Consts,
	nullptr
};


PLIB_INFO WINAPI GetNewInf()
{
	return (&LibInfo);
};
#endif