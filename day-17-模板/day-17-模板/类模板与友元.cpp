#include"global.h"
//�ñ�������ǰ֪��ģ��Person��Ĵ���
template<typename T1, typename T2>
class Person;

//ȫ�ֺ���������ʵ��
template<typename T1, typename T2>
void printPerson2(Person<T1, T2>p)
{
	cout << p.m_name << "  ����ʵ��  " << p.m_age << endl;
}

template<typename T1,typename T2>
class Person 
{
private:
	T1 m_name;
	T2 m_age;
public:
	Person(T1 name,T2 age) 
	{
		m_name = name;
		m_age = age;
	}

	//ȫ�ֺ���������ʵ��
	friend void printPerson(Person<T1,T2>p)
	{
		cout << p.m_name << " ����ʵ�� " << p.m_age << endl;
	}
	//ȫ�ֺ���������ʵ��
	//����ע���<>
	friend void printPerson2<>(Person<T1, T2>p);//����������
};

//ȫ�ֺ�������ʵ�ֵĲ���
void test01()
{
	Person<string,int>p("����",19);
	printPerson(p);
}
//ȫ�ֺ�������ʵ�ֵĲ���
void test02() 
{
	Person<string, int>p1("����",20);
	printPerson2(p1);
}

int main() 
{
	test01();
	//test02();

	system("pause");
	return 0;
};