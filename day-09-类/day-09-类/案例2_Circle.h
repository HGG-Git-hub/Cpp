#pragma once
#include"����2_Point.h"
//Բ��
class Circle
{
private:
	int c_R;//�뾶
	Point c_center;//Բ��
public://ͨ����Ա�������⿪�Žӿڣ�ʹ�ÿ��Է��ʵ�˽�еĳ�Ա����

	void set_Circle_r(int r);//����Բ�İ뾶
	void set_Circle_x_y(Point center); //����Բ��

	int get_Circle_r(); //��ȡԲ�İ뾶
	Point get_Circle_x_y();//��ȡԲ��
};