#include"global.h"
class Person
{
public:
	int m_a;
	mutable int m_b;

	//ָ��ı��ʣ�ָ�볣����ָ���ָ�򲻿��Ա��޸�
	/*�ڳ�Ա���������const�����ε���ָ�룬
	  const* (����ָ��)�������޸ĳ������������const
	  ָ���ָ����Ըı䣬�����޸ĳ���ֵ��this->m_age=10;���ᱨ��
	*/
	void showPerson()const//������
	{
		//m_age = 10;//��Ա�����ڲ��������ص�thisָ��
		//�����ԭ�򣬵�������������ʱ��thisָ��ָ����p��ָ��ָ���ֵ�޷����޸ģ����Ա���
		//this->m_a=10; //�ȼ��������д���

		//this =NULL;//ָ��ı��ʣ�ָ�볣����ָ���ָ�򲻿��Ա��޸�

		this->m_b = 100;//������ڳ��������޸ģ��ڳ�Ա����ǰ��mutbale(�ɱ��)
	}
	void func() {}
};
void test01() 
{
	Person p;
	p.showPerson();
}
//������
void test02() 
{
	const Person p1;//������
	//p1.m_a = 100; //�������޷��޸�
	p1.m_b = 200; //m_b��mutable���Σ������޸�

	//������ֻ�ܵ��ó�����
	p1.showPerson();
	//p1.func();  //func()���ǳ�����
}
int main() 
{
	test01();
	test02();
	system("pause");
	return 0;
};