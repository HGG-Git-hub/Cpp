#include"global.h"
//ģ����
template<typename T1,typename T2>
class Person 
{
public:
	T1 m_name;
	T2 m_age;
public:
	Person(T1 name, T2 age);//���캯����������
	
	void showPerson();//��Ա������������
};
//���캯������ʵ��
template<typename T1, typename T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}
//��Ա��������ʵ��
template<typename T1, typename T2>
void Person<T1, T2>::showPerson() 
{
	cout << this->m_name << endl;
	cout << this->m_age << endl;
}


//��ͨ��
class Person1
{
public:
	int m_name;
	string m_age;
public:
	Person1(int name, string  age);//���캯����������

	void showPerson();//��Ա������������
};
//���캯������ʵ��
Person1::Person1(int name, string  age) {}
//��Ա��������ʵ��
void Person1::showPerson(){}

void test01() 
{
	Person<string, int>p("����",19);
	p.showPerson();
}
int main() 
{
	test01();

	system("pause");
	return 0;
};