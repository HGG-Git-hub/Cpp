#include"global.h"
//�������Ϊ���Ա

//�ֻ���
class Phone 
{
public:
	string m_Pname;//�ֻ�����
	//��ʼ���б�
	Phone(string Pname) :m_Pname(Pname) 
	{
		cout<<"�ֻ���" << endl;
	}
	~Phone() 
	{
		cout << "�ֻ���xigou" << endl;
	}
};
//����
class Person 
{
public:
	string m_name;//�˵�����
	Phone m_Phone;//��ʹ�õ��ֻ�Ʒ��
	//Phone m_name = Pname //��ʽת����
	//Phone m_name =Phone Pname
	Person(string name, string Pname) :m_name(name), m_Phone(Pname) 
	{
		cout << "����" << endl;
	}
	~Person() 
	{
		cout << "����xigou" << endl;
	}
};
void test01() 
{

	//Phone phone("OPPO");
	//cout<<phone.m_Pname<<endl;

	Person per("����", "OPPO");

	cout << per.m_name << endl;
	cout << per.m_Phone.m_Pname << endl;
}

int main() 
{
	

	test01();

	system("pause");
	return 0;
};