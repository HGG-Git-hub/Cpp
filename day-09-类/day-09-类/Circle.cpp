#include"����2_Circle.h"
//Բ��
void Circle::set_Circle_r(int r)//����Բ�İ뾶
{
	c_R = r;
}
void Circle::set_Circle_x_y(Point center) //����Բ��
{
	c_center = center;	//Բ�İ뾶���ڴ�������ֵ
}
int Circle::get_Circle_r() //��ȡԲ�İ뾶
{
	return c_R;
}
Point Circle::get_Circle_x_y() //��ȡԲ��
{
	return c_center;
}