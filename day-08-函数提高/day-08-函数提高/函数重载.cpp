#include"global.h"
//����������ͬ
void fun()
{
	cout << "��ӭ�����޲κ���" << endl;
}
void fun(float a) 
{
	cout << "��ӭ�����вκ���" << endl;
}
//�������Ͳ�ͬ
void fun(int a)
{
	cout << "��ӭ����int����" << endl;
}
void fun(double a)
{
	cout << "��ӭ����doble����" << endl;
}
//������˳��ͬ
void fun(int a,double b)
{
	cout << "��ӭ����int a,double b����" << endl;
}
void fun(double a,int b)
{
	cout << "��ӭ����double a,int b����" << endl;
}
int main() 
{
	//����������ͬ
	fun();
	fun(1.11);

	//�������Ͳ�ͬ
	fun(12);
	fun(12.12);

	//������˳��ͬ
	fun(1,1.1);
	fun(1.1,1);

	system("pause");
	return 0;
};