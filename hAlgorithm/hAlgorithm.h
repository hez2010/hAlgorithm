// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� HALGORITHM_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// HALGORITHM_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
//
//#ifdef HALGORITHM_EXPORTS
//#define HALGORITHM_API __declspec(dllexport)
//#else
//#define HALGORITHM_API __declspec(dllimport)
//#endif
//

#pragma once


#ifndef __E_STATIC_LIB
#define LIB_GUID_STR "8003E147C08348a094C260BC4180F66C" /*GUID��: {8003E147-C083-48a0-94C2-60BC4180F66C}, ����ʹ��guidgen.exe����*/
#define LIB_MajorVersion 1 /*�����汾��*/
#define LIB_MinorVersion 1 /*��ΰ汾��*/
#define LIB_BuildNumber 20170609 /*�����汾��*/
#define LIB_SysMajorVer 3 /*ϵͳ���汾��*/
#define LIB_SysMinorVer 0 /*ϵͳ�ΰ汾��*/
#define LIB_KrnlLibMajorVer 3 /*���Ŀ����汾��*/
#define LIB_KrnlLibMinorVer 0 /*���Ŀ�ΰ汾��*/
#define LIB_NAME_STR "hez2010 �㷨�����ݽṹ֧�ֿ�" /*֧�ֿ���*/
#define LIB_DESCRIPTION_STR "�ṩ�����㷨�����ݽṹ" /*��������*/
#define LIB_Author "hez2010" /*��������*/
#define LIB_ZipCode "" /*��������*/
#define LIB_Address "" /*ͨ�ŵ�ַ*/
#define LIB_Phone "" /*�绰����*/
#define LIB_Fax "" /*�������*/
#define LIB_Email "hez2010@126.com" /*��������*/
#define LIB_HomePage "" /*��ҳ��ַ*/
#define LIB_Other "" /*������Ϣ*/
#define LIB_TYPE_COUNT 3 /*�����������*/
#define LIB_TYPE_STR "0000�����㷨\0""0000ȡֵ�㷨\0""0000�����㷨\0" /*�������*/
#endif