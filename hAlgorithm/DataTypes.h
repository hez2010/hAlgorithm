#pragma once
#include "stdafx.h"

//�����Զ�����������
#ifndef __E_STATIC_LIB
INT DatatypeCommandIndexs[] =
{
	1
};
static LIB_DATA_TYPE_INFO DataTypes[] =
{
	/* { ��������, Ӣ������, ��������, ��������, ��������, ����״̬, ͼ������, �¼�����, �¼�ָ��, ��������, ����ָ��, ����ָ��, Ԫ������, Ԫ��ָ�� } */
	{ _T("������������"), _T("DatatypeCommand"), _T("���������������"), sizeof(DatatypeCommandIndexs) / sizeof(DatatypeCommandIndexs[0]), DatatypeCommandIndexs, NULL, 0, 0, nullptr, 0, nullptr, nullptr, 0, nullptr }
};
#endif

// ����LIB_DATA_TYPE_INFO�Ľ��� �Լ� ���������ݵĶ��� ���ɲμ������ĵ��� "m_pDataType��Ա˵��"��"��������˵��"��
