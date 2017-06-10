// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 HALGORITHM_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// HALGORITHM_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
//
//#ifdef HALGORITHM_EXPORTS
//#define HALGORITHM_API __declspec(dllexport)
//#else
//#define HALGORITHM_API __declspec(dllimport)
//#endif
//

#pragma once


#ifndef __E_STATIC_LIB
#define LIB_GUID_STR "8003E147C08348a094C260BC4180F66C" /*GUID串: {8003E147-C083-48a0-94C2-60BC4180F66C}, 必须使用guidgen.exe生成*/
#define LIB_MajorVersion 1 /*库主版本号*/
#define LIB_MinorVersion 1 /*库次版本号*/
#define LIB_BuildNumber 20170609 /*构建版本号*/
#define LIB_SysMajorVer 3 /*系统主版本号*/
#define LIB_SysMinorVer 0 /*系统次版本号*/
#define LIB_KrnlLibMajorVer 3 /*核心库主版本号*/
#define LIB_KrnlLibMinorVer 0 /*核心库次版本号*/
#define LIB_NAME_STR "hez2010 算法及数据结构支持库" /*支持库名*/
#define LIB_DESCRIPTION_STR "提供常用算法及数据结构" /*功能描述*/
#define LIB_Author "hez2010" /*作者名称*/
#define LIB_ZipCode "" /*邮政编码*/
#define LIB_Address "" /*通信地址*/
#define LIB_Phone "" /*电话号码*/
#define LIB_Fax "" /*传真号码*/
#define LIB_Email "hez2010@126.com" /*电子邮箱*/
#define LIB_HomePage "" /*主页地址*/
#define LIB_Other "" /*其它信息*/
#define LIB_TYPE_COUNT 3 /*命令分类数量*/
#define LIB_TYPE_STR "0000排序算法\0""0000取值算法\0""0000数论算法\0" /*命令分类*/
#endif