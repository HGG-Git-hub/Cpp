#include"global.h"
class Person
{
public:
	int age=10;
	//��������Ϊ���вι�����޲ι���
	Person() 
	{
		cout<<"Person�޲ι��캯��" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person�вι��캯��" << endl;
	}
	//�����ͷ�Ϊ����ͨ����Ϳ�������
	//�������캯��
	//������������������һ�£����������õķ�ʽ���д���,�����const�޶�����֤����������һ��
	Person(const Person &p) 
	{
		age = p.age;
		cout << "Person�������캯��" << endl;
	}
	~Person() 
	{
		cout<<"Person����������" << endl;
	}
};
//����
//���ŷ�
void test01() 
{
	//ע���������Ĭ�Ϲ��캯��ʱ����Ҫ��С����(),��������������һ����������
	Person p1;

	Person p2(10);//�вι���
	//cout << "p2�����䣺" << p2.age << endl;

	Person p3(p2);//��������
	//cout << "p3�����䣺" << p3.age << endl;
}
//��ʾ��
void test02() 
{
	//ע�⣺�Ⱥ���ߵĳ�Ϊ��������ʹ����ɺ󣬻ᱻ���̻���
	//��Ҫ���ÿ������캯������ʼ����������
	//Person(p3);//ϵͳ��ΪPerson(p3)==Person p3;

	Person p1;					//Ĭ�Ϲ��캯������
	Person p2 = Person(10);		//�вι��캯������
	Person p3 = Person(p2);		//�������캯������
}
//��ʽת����
void test03() 
{
	Person p4 = 10;//�൱��Person p4=Person(10);���������ĵĸ��������ת��
	Person p5 = p4;//�������캯��
}
int main() 
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
};