// hAlgorithm.cpp : ���� DLL Ӧ�ó���ĵ���������
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
	if (nMsg == NL_GET_CMD_FUNC_NAMES) // ������������ʵ�ֺ����ĵĺ�����������(char*[]), ֧�־�̬����Ķ�̬����봦��
		return reinterpret_cast<INT>(CommandNames);
	else if (nMsg == NL_GET_NOTIFY_LIB_FUNC_NAME) // ���ش���ϵͳ֪ͨ�ĺ�������(PFN_NOTIFY_LIB��������), ֧�־�̬����Ķ�̬����봦��
		return reinterpret_cast<INT>("hAlgorithm_ProcessNotifyLib");
	else if (nMsg == NL_GET_DEPENDENT_LIBS) return static_cast<INT>(NULL);
	// ���ؾ�̬����������������̬���ļ����б�(��ʽΪ\0�ָ����ı�,��β����\0), ֧�־�̬����Ķ�̬����봦��
	// kernel32.lib user32.lib gdi32.lib �ȳ��õ�ϵͳ�ⲻ��Ҫ���ڴ��б���
	// ����NULL��NR_ERR��ʾ��ָ�������ļ�  
#endif
	return ProcessNotifyLib(nMsg, dwParam1, dwParam2);
};

#ifndef __E_STATIC_LIB
static LIB_INFO LibInfo =
{
	/* { ���ʽ��, GUID����, ���汾��, �ΰ汾��, �����汾��, ϵͳ���汾��, ϵͳ�ΰ汾��, ���Ŀ����汾��, ���Ŀ�ΰ汾��,
	֧�ֿ���, ֧�ֿ�����, ֧�ֿ�����, ֧�ֿ�״̬,
	��������, ��������, ͨ�ŵ�ַ, �绰����, �������, ��������, ��ҳ��ַ, ������Ϣ,
	��������, ����ָ��, �������, �������, ��������, ����ָ��, �������,
	���ӹ���, ��������, ��Ϣָ��, ����ģ��, ģ������,
	��������, ����ָ��, �ⲿ�ļ�} */
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