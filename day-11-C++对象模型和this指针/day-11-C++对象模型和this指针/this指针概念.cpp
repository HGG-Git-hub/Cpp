#include"global.h"

class Person 
{
public:
	//���βκͳ�Ա����ͬ��ʱ������thisָ��������
	//thisָ��ָ��  �����õĳ�Ա����    �����Ķ���
	int m_age;
	Person(int age) 
	{
		this->m_age = age;
	}
	//����*thisָ��ĺ�����ע�⺯����ͷ��д��

	Person&  Person_add_age(const Person &p) 
	{
		this->m_age += p.m_age;

		//Ŀǰthisָ����Ǳ����ó�Ա�����Ķ���p2�ĵ�ַ��*this���ǽ������õ��˵�ַ�е���ֵ
		return *this;
	}
};
//������Ƴ�ͻ
void test01() 
{
	Person p(18);
	cout << p.m_age << endl;
}
//����ķǾ�̬��Ա�����з��ض�����
void test02() 
{
	Person p1(10);
	Person p2(10);

	p2.Person_add_age(p1).Person_add_age(p1).Person_add_age(p1);

	cout << p2.m_age << endl;
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};