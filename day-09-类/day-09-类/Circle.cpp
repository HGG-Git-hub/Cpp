#include"案例2_Circle.h"
//圆类
void Circle::set_Circle_r(int r)//设置圆的半径
{
	c_R = r;
}
void Circle::set_Circle_x_y(Point center) //设置圆心
{
	c_center = center;	//圆的半径等于传进来的值
}
int Circle::get_Circle_r() //获取圆的半径
{
	return c_R;
}
Point Circle::get_Circle_x_y() //获取圆心
{
	return c_center;
}