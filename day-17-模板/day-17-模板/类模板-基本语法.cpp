#include"global.h"

//��ģ��
template<typename AgeType,typename NameType>
class Person 
{
public:
	AgeType m_age;
	NameType m_name;
public:
	Person(AgeType age,NameType name) //���캯������ֵ
	{
		m_age = age;
		m_name = name;
	}
	void show1() 
	{
		cout << this->m_age << endl;
		cout << this->m_name << endl;
	}
};
void test01() 
{
	Person<int,string>p1(18,"QAQ");
	p1.show1();
}

int main() 
{
	test01();
	system("pause");
	return 0;
};