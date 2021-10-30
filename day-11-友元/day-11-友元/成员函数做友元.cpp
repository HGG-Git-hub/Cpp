#include"global.h"
//成员函数做友元
class Building;
class Goodgay
{
public:
	Goodgay();//构造函数声明

	Building* b; //Building类型的指针

	void visit1();//可以访问Building中的私有属性（友元）

	void visit2();//无法访问Building中的私有属性
};
class Building 
{
	//成员函数做友元的声明
	//需要在被访问的类里声明friend
	//还需要在被访问的类里声明是哪个类的成员函数(Goodgay::visit();)Goodday类的成员函数visit()函数
	friend void Goodgay::visit1();
public:
	Building();//构造函数声明
public:
	string m_living_room;//客厅
private:
	string m_bed_room;//卧室
};
Goodgay::Goodgay() 
{
	b = new Building;
}
void Goodgay:: visit1()
{
	cout << "测试：visit1正在访问：" << b->m_living_room << endl;
	cout << "测试：visit1正在访问：" <<b->m_bed_room << endl;
}

void Goodgay:: visit2() 
{
	cout << "测试：visit2正在访问：" << b->m_living_room << endl;
}

Building::Building() 
{
	m_living_room = "客厅";
	m_bed_room = "卧室";
}

void test01() 
{
	Goodgay gg;
	gg.visit1();
	gg.visit2();

}

int main() 
{
	test01();
	
	system("pause");
	return 0;
};
