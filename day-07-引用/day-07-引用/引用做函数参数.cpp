#include"global.h"
//����������3��ʵ�ֵķ�ʽ
//1.ֵ����
void change01(int a,int b) 
{
	int temp = a;
	a = b;
	b = temp;
	cout <<"�β�"<< a << " " << b << endl;//��������βε�ֵ
}
//2.��ַ����
void change02(int *a,int *b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "�β�" << *a << " " << *b << endl;

}
//3.���ô���
//�����������������൱�ڸ�ʵ������һ�����������ʻ���ͬһ���ַ�����Ե��βθı�ʱ��ʵ��Ҳ��ı�
void change03(int &A,int &B) 
{
	int temp = A;
	A = B;
	B = temp;
	cout << "�β�" << A << " " << B << endl;
}
int main() 
{
	int a = 10, b = 20;
	//ֵ����,�ββ�������ʵ��
	change01(a,b);
	cout <<"ʵ��" << a << " " << b << endl;//�������ʵ�ε�ֵ
	 
	//��ַ���ݣ��βλ�����ʵ��(���ʣ��ı�ֵ�ĵ�ַ)
	change02(&a,&b);
	cout << "ʵ��" << a << " " << b << endl;//�������ʵ�ε�ֵ

	//���ô���,�βλ�����ʵ��
	change03(a,b);
	cout << "ʵ��" << a << " " << b << endl;//�������ʵ�ε�ֵ

	system("pause");
	return 0;
};