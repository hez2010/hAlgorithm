// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� HALGORITHM_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// HALGORITHM_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef HALGORITHM_EXPORTS
#define HALGORITHM_API __declspec(dllexport)
#else
#define HALGORITHM_API __declspec(dllimport)
#endif

// �����Ǵ� hAlgorithm.dll ������
class HALGORITHM_API ChAlgorithm {
public:
	ChAlgorithm(void);
	// TODO:  �ڴ�������ķ�����
};

extern HALGORITHM_API int nhAlgorithm;

HALGORITHM_API int fnhAlgorithm(void);
