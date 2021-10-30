#include"global.h"
//����
//�����������ݽ����ĺ���
void change_int_num(int &a,int &b) 
{
	int temp = a;
	a = b;
	b = temp;
}
//�����������������ĺ���
void change_double_num(double &a,double &b) 
{
	double  temp = a;
	a = b;
	b = temp;
}
//����-����ģ��
template<typename T>//����һ������ģ��
void my_change(T &a,T &b) 
{
	T temp = a;
	a = b;
	b = temp;
}
void  test01() 
{
	int a = 100;
	int b = 200;
	change_int_num(a,b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	double c = 1.1;
	double d = 2.2;
	change_double_num(c,d);
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;

	//���ַ�ʽʹ�ú���ģ��
	//1.�Զ������Ƶ�
	my_change(a, b);//���Զ�ʶ��
	my_change(c, d);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;

	//2.��ʽָ������
	my_change<int>(a,b);
	my_change<double>(c,d);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;
}

int main() 
{
	test01();

	system("pause");
	return 0;
};