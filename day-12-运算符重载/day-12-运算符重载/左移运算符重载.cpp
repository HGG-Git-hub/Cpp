#include"global.h"
class Person 
{
	friend ostream& operator<<(ostream& out, Person& p);//ȫ�ֺ�������Ԫ
private:
	int m_a;
	int m_b;
	//һ�㲻�ó�Ա��������������������޷�ʵ��
public:
	Person(int a,int b) //���캯������ʼֵ
	{
		m_a = a;
		m_b = b;
	}
};
//ֻ����ȫ�ֺ����������������
//ostream &cout 
//cout����������͵����ݣ�ȫ��ֻ����һ�������������õķ�ʽ
ostream & operator<<(ostream &out,Person &p) //����operator << (cout,p) �� cout << p
{
	out << "p.m_a= "<< p.m_a << " p.m_b= " << p.m_b << endl;
	return out;
}
void test01()
{
	Person p(10,10);//���캯������ʼֵ

	//���غ󣬼����
	cout << p << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};