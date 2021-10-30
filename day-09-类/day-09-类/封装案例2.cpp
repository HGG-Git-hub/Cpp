#pragma once
#include"global.h"
#include"案例2_Circle.h"
#include"案例2_Point.h"
//设计一个圆形类（Circle）和一个点类（Point），计算点和圆的关系
//class Point //点类
//{
//private://私有权限
//	int p_x;  //x坐标
//	int p_y;  //y坐标
//public://通过成员函数对外开放接口，使得可以访问到私有的成员属性
//	void set_Point_x(int x) //设置x
//	{
//		p_x = x;
//	}
//	void set_Ponit_y(int y) //设置y
//	{
//		p_y = y;
//	}
//	int get_Point_x() //输出x
//	{
//		return p_x;
//	}
//	int get_Point_y() //输出y
//	{
//		return p_y;
//	}
//};
//class Circle //圆类
//{
//private:
//	int c_R;//半径
//	Point c_center;//圆心
//public://通过成员函数对外开放接口，使得可以访问到私有的成员属性
//	void set_Circle_r(int r)//设置圆的半径
//	{
//		c_R = r;
//	}
//	void set_Circle_x_y(Point center) //设置圆心
//	{
//		c_center = center;	//圆的半径等于传进来的值
//	}
//	int get_Circle_r() //获取圆的半径
//	{
//		return c_R;
//	}
//	Point get_Circle_x_y() //获取圆心
//	{
//		return c_center;
//	}
//};
//判断点和圆的关系
void isIncircle(Circle& c, Point& p)
{
	//计算两点距离的平方
	//思路：点到圆心的距离和半径比较
	int distance1 =
		(
			(p.get_Point_x() - c.get_Circle_x_y().get_Point_x()) * (p.get_Point_x() - c.get_Circle_x_y().get_Point_x()) +
			(p.get_Point_y() - c.get_Circle_x_y().get_Point_y()) * (p.get_Point_y() - c.get_Circle_x_y().get_Point_y())
			);
	//计算半径的平方
	int distance2 = (c.get_Circle_r() * c.get_Circle_r());

	cout << "半径的平方：" << distance2 << endl;
	cout << "点到圆形的距离平方：" << distance1 << endl;

	//进行比较，判断比较
	if (distance1 < distance2)
	{
		cout << "点在圆内" << endl;
	}
	else if (distance1 == distance2)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance1 > distance2)
	{
		cout << "点在圆外" << endl;
	}
}
int main()
{
	Point p;//定义一个点类的对象：p
	//p点的x,y的坐标
	p.set_Point_x(10);
	p.set_Ponit_y(10);


	Circle c;//定义一个圆类的对象：c

	Point c_center;//圆c的圆心
	c_center.set_Point_x(10);//圆心x的坐标
	c_center.set_Ponit_y(0); //圆心y的坐标

	c.set_Circle_x_y(c_center);//圆心（x，y）的坐标

	c.set_Circle_r(10);//圆c的半径

	isIncircle(c, p);//调用函数，确定点和圆的关系

	system("pause");
	return 0;
};