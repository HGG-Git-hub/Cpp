#include"global.h"

//**Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
//**Ĭ�������������޲Σ�������Ϊ�գ�
//**Ĭ�Ͽ������캯���������Խ���ֵ����(ֵ����)
class Person 
{
public:
	int m_age;
	/*Person() 
	{
		cout << "Ĭ�Ϲ��캯��" << endl;
	}*/
	Person(int age)
	{
		m_age = age;
		cout << "�вι��캯��" << endl;
	}
	//Person(const Person& p) 
	//{
	//	m_age = p.m_age;
	//	cout << "�������캯��" << endl;
	//}
	~Person() 
	{
		cout << "��������" << endl;
	}
};
//void test01() 
//{
//	Person p;
//	p.m_age = 18;
//	Person p2(p);
//	cout<<"���������е�ֵ��"<<p2.m_age<<endl;
//}
void test02() 
{
	//Person p;//�ᱨ��
	Person p(18);
	Person p2(p);
	cout<<"p2:"<<p2.m_age<<endl;
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};