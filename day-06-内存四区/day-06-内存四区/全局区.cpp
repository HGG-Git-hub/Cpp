#include"global.h"
//��������ĳ�Ϊȫ�ֱ���
int g_a = 10;
int g_b = 10;
//const���ε�ȫ�ֱ���
const int c_g_a = 10;
int main()
{
	//ȫ����������ȫ�ֱ�������̬����������

	//��������ĳ�Ϊ�ֲ�����
	int a = 10;
	int b = 10;
	//�ֲ�����
	cout << (int)&a << endl;
	cout << (int)&b << endl;
	cout << "------" << endl;

	//ȫ�ֱ���
	cout << (int)&g_a << endl;
	cout << (int)&g_b << endl;
	//��̬����
	static int s_a = 10;
	static int s_b = 10;

	cout << (int)&s_a << endl;
	cout << (int)&s_b << endl;

	//�����ַ�Ϊ�ַ���������const���εı���
	//�ַ�������
	cout << (int)&"hell,word" << endl;
	//const���εı���
	//const���ε�ȫ�ֱ�����const���εľֲ�����
	cout << (int)&c_g_a << endl;
	//const���εľֲ�����
	const int c_l_a = 10;
	cout << (int)&c_l_a << endl;

	system("pause");
	return 0;
};