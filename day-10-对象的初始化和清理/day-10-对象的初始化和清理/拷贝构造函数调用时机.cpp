#include"global.h"
class Person
{
public:
	int age = 0;
	Person() //Ĭ�Ϲ���
	{
		cout << "Ĭ��Ĭ��Ĭ�Ϲ���" << endl;
	}
	Person(int a) //�вι���
	{
		age = a;
		cout << "�в��в��вι���" << endl;
	}
	Person(const Person & p)//��������
	{
		age = p.age;
		cout << "����������������" << endl;
	}
	~Person()
	{
		cout << "����������������" << endl;
	}
};
//ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(10);
	Person p2(p1);
	cout << "p2�����䣺"<<p2.age<<endl;
}
//ֵ���ݵķ�ʽ������������ֵ 
void dowork(Person p) //ֵ����
{

}
void test02() 
{
	Person a;//Ĭ�Ϲ��캯��
	dowork(a);//�������캯��
	//������dowork����ʱ������������ʱ���൱�ڽ�a������һ�ݴ��ݸ���p��
	//�൱��Person p = a;
				
}
//��ֵ��ʽ���ؾֲ���
Person dowork() 
{
	Person p1;
	cout << (int *)&p1 << endl;//�����ַ
	return p1;//�ǽ�p1������һ�ν��д���
}
void test03() 
{
	Person p =dowork();
	cout << (int*)&p << endl;//�����ַ
}
int main() 
{
	//test01();
	//test02();
	test03();
	
	system("pause");
	return 0;
};