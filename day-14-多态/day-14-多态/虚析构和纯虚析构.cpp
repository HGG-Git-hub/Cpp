#include"global.h"
class Animal 
{
public:
	Animal() //构造函数，初始化对象
	{
		cout << "Animal中的构造函数~" << endl;
	}
public:
	//纯虚函数
	virtual void speak() = 0;
	//虚析构函数，解决父类指针指向子类对象时，释放不干净的情况
	virtual~Animal()  
	{
		cout << "Animal的析构函数~" << endl;
	}
	//纯虚析构函数（需要声明和具体的实现，下方）
	//virtual ~Animal() = 0;
};
//纯虚析构函数具体的实现
//Animal::~Animal() 
//{
//	cout << "Animal的纯虚析构函数" << endl;
//}
class Cat :public Animal 
{
public:
	string *m_name;
public:
	Cat(string name) //构造函数，初始化对象
	{
		cout << "cat的构造函数~" << endl;
		m_name = new string(name);
	}
public:
	virtual void speak() 
	{
		cout << *m_name << "小猫喵喵喵~" << endl;
	}
	~Cat() //析构函数，指针置空处理
	{
		cout << "cat的析构函数调用~" << endl;
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