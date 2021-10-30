#include"global.h"
class Buiding;

class Goodgay //好基友
{
private:
	Buiding *buiding;
public:
	Goodgay();
	
	void visit();
};
class Buiding  //我家的建筑
{
	friend class Goodgay;
public:
	Buiding();
public:
	string m_living_room;//客厅
private:
	string m_bed_room;//卧室
};
Goodgay::Goodgay()
{
	/*new是在堆区开辟了一个空间，new什么样的数据类型，
	就会返回什么样的数据类型的指针，需要用相同的指针接收*/
	buiding = new Buiding;
}
void Goodgay::visit()
{
	cout << "好基友正在访问我的：" << buiding->m_living_room << endl;
	cout << "好基友正在访问我的：" << buiding->m_bed_room << endl;
}//参观函数，访问buiding中的属性
Buiding::Buiding()
{
	this->m_living_room = "客厅";
	this->m_bed_room = "卧室";
}
void test01()
{
	Goodgay gg;
	gg.visit();
}
int main()
{
	test01();

	system("pause");
	return 0;
};