#pragma once
#include"案例2_Point.h"
//圆类
class Circle
{
private:
	int c_R;//半径
	Point c_center;//圆心
public://通过成员函数对外开放接口，使得可以访问到私有的成员属性

	void set_Circle_r(int r);//设置圆的半径
	void set_Circle_x_y(Point center); //设置圆心

	int get_Circle_r(); //获取圆的半径
	Point get_Circle_x_y();//获取圆心
};