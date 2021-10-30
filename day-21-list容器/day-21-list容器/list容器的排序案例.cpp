#include"global.h"
class Person 
{
public:
	string m_name;
	int m_age;
	int m_tall;
public:
	Person(string name,int age,int tall) 
	{
		this->m_name = name;
		this->m_age = age;
		this->m_tall = tall;
	}
};
//����
//��Person�Զ����������ͽ�������Person�����������������䡢���
//������������������������ͬ������߽��н���
bool compare(Person& p1, Person& p2) 
{
	if (p1.m_age == p2.m_age) 
	{
		return p1.m_tall > p2.m_tall;
	}
	else 
	{
		return p1.m_age < p2.m_age;
	}
}
void test01() 
{
	list<Person>L;

	Person p1("����", 20, 180);
	Person p2("����", 18, 182);
	Person p3("����", 19, 187);
	Person p4("����", 22, 171);
	Person p5("����", 22, 172);

	//��������
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);

	cout << "����ǰ��" << endl;
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << (*it).m_name << " " << (*it).m_age << " " << (*it).m_tall << endl;
	}
	cout << endl;

	//����
	//��Person�Զ����������ͽ�������Person�����������������䡢���
	//������������������������ͬ������߽��н���
	L.sort(compare);
	cout << "�����" << endl;
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << (*it).m_name << " " << (*it).m_age << " " << (*it).m_tall << endl;
	}
	cout << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};