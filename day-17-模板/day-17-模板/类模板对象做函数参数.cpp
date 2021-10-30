#include"global.h"

template<typename T1,typename T2>
class Person
{
public:
	T1 m_name;
	T2 m_age;
public:
	Person(T1 name,T2 age) 
	{
		m_name = name;
		m_age = age;
	}
	void showPerson() 
	{
		cout << "������" << m_name << endl;
		cout << "���䣺" << m_age << endl;
	}
};
//ָ�����������---ֱ����ʾ�������������
void PrintPerson01(Person<string, int>&p1)
{
	p1.showPerson();
}
void test01() 
{
	Person<string,int>p1("����",18);
	PrintPerson01(p1);
}
//����ģ�廯-- - �������еĲ�����Ϊģ����д���
template<typename T1,typename T2>
void PrintPerson02(Person<T1, T2>&p2)
{
	p2.showPerson();
	//cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	//cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}
void test02() 
{
	Person<string, int>p2("����",19);
	PrintPerson02(p2);
}
//������ģ�廯 ---������������� ģ�廯���д���
template<typename T>
void PrintPerson03(T &p3) //��Person<string,int>����ģ�廯ΪT
{
	p3.showPerson();
	cout << typeid(T).name() << endl;
}
void test03() 
{
	Person<string, int>p3("����",20);
	PrintPerson03(p3);
}
int main() 
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
};