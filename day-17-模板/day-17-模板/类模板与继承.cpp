#include"global.h"
template<typename T>
class Base 
{
public:
	T m;
};
//class Son1 :public Base{};//����
//������������ʱ��Ҫָ����������T������
class Son1 :public Base<int>{};
//��������ָ����������T�����ͣ�����Ҳ��Ҫ�����ģ��
template<typename T1,typename T2>
class Son2 :public Base<T2> 
{
public:
	T1 a;
public:
	Son2() 
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}
};
void test01() 
{
	Son2<int,string>s;//int������T1��string������T2
	s.m = "����";
	s.a = 20;
	cout << "Son2:�е�s.m:" << s.m << endl;
	cout << "Son2:�е�s.m:" << s.a << endl;
}
template<typename T>
class Son3 :public Base<T>
{
public:
	T a;
public:
	Son3() 
	{
		cout << typeid(T).name() << endl;
	}
};
void test02()
{
	Son3<int>s;//int�ȴ����������ִ����˸���
	s.m = 18;
	s.a = 20;
	cout << "Son3:�е�s.m:" << s.m << endl;
	cout << "Son3:�е�s.a:" << s.a << endl;
}
int main() 
{
	test01();
	test02();

	system("pause");
	return 0;
};