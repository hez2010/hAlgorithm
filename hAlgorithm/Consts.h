#pragma once
#include "stdafx.h"
#include <lib2.h>

#ifndef __E_STATIC_LIB
LIB_CONST_INFO Consts[] =
{
	/* { ��������, Ӣ������, ��������, �����ȼ�(LVL_), ��������(CT_), �ı�����, ��ֵ���� } */
	{ _T("����_ZERO"), _T("ZERO"), nullptr, LVL_SIMPLE, CT_NUM, nullptr, 0 },//��ֵ����
	{ _T("����_TEST"), _T("TEST"), nullptr, LVL_HIGH, CT_TEXT, _T("TEST"), NULL }//�ı�����
};
#endif


/*
�����ȼ���: LVL_SIMPLE          1        // ����
LVL_SECONDARY       2        // �м�
LVL_HIGH            3        // �߼�

���������� : CT_NUM             1    // sample: 3.1415926
CT_BOOL            2    // sample: 1
CT_TEXT            3    // sample: "abc"

�ı�������CT_TEXT�ã���ֵ������CT_NUM��CT_BOOL�á�
*/