#include"global.h"
class Animal 
{
public:
	Animal() //���캯������ʼ������
	{
		cout << "Animal�еĹ��캯��~" << endl;
	}
public:
	//���麯��
	virtual void speak() = 0;
	//�������������������ָ��ָ���������ʱ���ͷŲ��ɾ������
	virtual~Animal()  
	{
		cout << "Animal����������~" << endl;
	}
	//����������������Ҫ�����;����ʵ�֣��·���
	//virtual ~Animal() = 0;
};
//�����������������ʵ��
//Animal::~Animal() 
//{
//	cout << "Animal�Ĵ�����������" << endl;
//}
class Cat :public Animal 
{
public:
	string *m_name;
public:
	Cat(string name) //���캯������ʼ������
	{
		cout << "cat�Ĺ��캯��~" << endl;
		m_name = new string(name);
	}
public:
	virtual void speak() 
	{
		cout << *m_name << "Сè������~" << endl;
	}
	~Cat() //����������ָ���ÿմ���
	{
		cout << "cat��������������~" << endl;
		if (m_name != NULL) 
		{
			delete m_name;
			m_name = NULL;
		}
	}
};
//void sss(Animal * an) 
//{
//	an->speak();
//	delete an;
//}
void test01() 
{
	//Animal* an = new Cat("Tom");
	Animal* an;
	an = new Cat("Tom");
	an->speak();
	delete an;
}
int main() 
{
	test01();

	//sss(new Cat);

	system("pause");
	return 0;
};