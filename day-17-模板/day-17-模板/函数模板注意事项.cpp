#include"global.h"
template<typename T>//ģ������
void swep(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
//1.�Զ������Ƶ��������Ƶ���һ�µ���������T���ſ���ʹ��
void test01() 
{
	int a = 10, b = 20;
	swep(a,b);
	cout << a << endl;
	cout << b << endl;
}
//2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<typename T>//ģ������
void func() //һ��ȷ����ģ��
{
	cout << "func�ĵ���~" << endl;
}
void test02() 
{
	//func();//�����ԭ��ģ��û��ȷ��T����������

	func<double>();//����İ취���Լ�ָ�����ͣ��ñ�������ȷ
}
int main() 
{
	test01();
	test02();

	system("pause");
	return 0;
};