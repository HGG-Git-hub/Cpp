#include"global.h"
//动物类
class Animal 
{
public:
	int m_age;
};
//利用虚继承解决菱形继承带来的问题
// virtual关键字加在冒号后面
// 被继承的父类(Animal)称为虚基类
//羊类
class Sheep : virtual public Animal {};
//驼类
class Camel : virtual public Animal {};
//羊驼类（草泥马）
class Sheep_Camel : public Sheep, public Camel {};

void test01() 
{
	Sheep_Camel  sc;
	sc.Sheep::m_age = 18;
	sc.Camel::m_age = 28;
	cout << "Sheep:" << sc.Sheep::m_age << endl;
	cout << "Camel:" << sc.Camel::m_age << endl;
	cout << "虚继承：" << sc.m_age << endl;
}

int main() 
{
	test01();

	system("pause");
	return 0;
};