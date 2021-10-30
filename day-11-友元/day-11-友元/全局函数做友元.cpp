#include"global.h"
class My_home
{
	//全局函数要想访问类里的私有属性，需要进行友元声明
	friend void Good_gay(My_home& p1);

public:
	My_home()//构造函数的作用，赋初值
	{
		m_living_room = "客厅";
		m_bed_room = "卧室";
	}
public:
	string m_living_room;//客厅
private:
	string m_bed_room;//卧室

};
//全局函数
void Good_gay(My_home &p1) //此处值传递，地址传递，引用传递都可以，但是值传递效率比较低
{
	cout <<"好基友正在访问："<< p1.m_living_room << endl;
	cout << "好基友正在访问：" << p1.m_bed_room << endl;
}
void test() 
{
	My_home p1;//My_home类型的p1

	Good_gay(p1);//函数调用，并传值
}
int main() 
{
	test();

	system("pause");
	return 0;
};