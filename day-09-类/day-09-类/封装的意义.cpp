#include"global.h"
//设计一个圆类，求圆的周长
//圆的周长=2*PI*半径
const double PI = 3.14;
class Circle //类的创建
{
	//权限
	public://公共权限

	//属性
	int m_r;//圆类的半径

	//行为,一般是函数
	double calculate_girth()
	{
		return 2 * PI * m_r;
	};
};
int main() 
{
	Circle c1;//类中对象的创建

	c1.m_r = 10;//给圆中的半径赋值

	double a = c1.calculate_girth();
	
	cout<<"圆的周长：" << c1.calculate_girth() << endl;
	cout << "圆的周长：" << a << endl;

	system("pause");
	return 0;
};