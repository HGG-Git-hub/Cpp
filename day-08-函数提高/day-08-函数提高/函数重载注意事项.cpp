#include"global.h"
//������Ϊ��������
void fun(int& A) 
{
	cout << "��ӭ����int& a�ĺ���" << endl;
}
void fun(const int& A) 
{
	cout << "��ӭ����const int& a�ĺ���" << endl;
}
//������������Ĭ�ϲ���
void fun1(int a,int b = 10)
{
	cout << "��ӭ����(int a,int b)�ĺ���" << endl;
}void fun1(int a)
{
	cout << "��ӭ����(int a)�ĺ���" << endl;
}
int main()
{
	//int a = 10;
	//fun(a);//int& A=a;�Ϸ�  ��const֮�������α��������Ϸ�
	//fun(10);//int& A=10;���Ϸ�  const int& A=10; �Ϸ�

	//fun1(20);//������������Ĭ�ϲ���,�����׳��ֶ����ԣ�ֻ�ܾ�������

	system("pause");
	return 0;
};