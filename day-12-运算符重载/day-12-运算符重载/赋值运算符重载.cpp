#include"global.h"
class Person 
{
public:
	int* m_age;
public:
	Person(int age)
	{
		m_age = new int(age);//�ڶ�������һ���ռ䣬����Ž�������
	}
	~Person() 
	{
		if (m_age != NULL) 
		{
			delete m_age;
			m_age = NULL;
		}
	}
	//��ֵ���������
	Person& operator=(Person& p) 
	{
		//���ж��Ƿ��������ڶ���������У����ͷ�
		if (m_age != NULL) 
		{
			delete	m_age;
			m_age = NULL;
		}
		//�����ڿ���һ���ڴ�ռ䣨�����
		m_age = new int(*p.m_age);
		//�����������thisָ������
		return *this;
	}
};
void test01() 
{
	Person p1(18);
	Person p2(20);
	Person p3(22);
	p3 = p2 = p1;//��ֵ����
	cout << "p1�����䣺" << *p1.m_age << endl;
	cout << "p2�����䣺" << *p2.m_age << endl;
	cout << "p3�����䣺" << *p3.m_age << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};