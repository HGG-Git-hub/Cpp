#include"global.h"

//��ģ��
//��ģ����ģ������б��п�����Ĭ�ϲ���
template<typename AgeType=int, typename NameType=string>
class Person
{
public:
	AgeType m_age;
	NameType m_name;
public:
	Person(AgeType age, NameType name) //���캯������ֵ
	{
		m_age = age;
		m_name = name;
	}
	void showPerson() 
	{
		cout << this->m_name << endl;
		cout << this->m_age << endl;
	}
};
//��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test01() 
{
	//Person p1(18,"����");//�����ԭ����ģ�岻���Զ��Ƶ�����
	Person<int, string>p1(18,"����");
	p1.showPerson();
}
//��ģ����ģ������б��п�����Ĭ�ϲ���
void test02() 
{
	//��Ĭ�ϲ����б�ʱ���ξ���Ҫ<>����д��Person p2(19,"����");
	Person<>p2(19,"����");
	p2.showPerson();
}
int main() 
{
	test01();
	test02();
	system("pause");
	return 0;
};