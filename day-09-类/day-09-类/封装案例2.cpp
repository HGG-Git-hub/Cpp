#pragma once
#include"global.h"
#include"����2_Circle.h"
#include"����2_Point.h"
//���һ��Բ���ࣨCircle����һ�����ࣨPoint����������Բ�Ĺ�ϵ
//class Point //����
//{
//private://˽��Ȩ��
//	int p_x;  //x����
//	int p_y;  //y����
//public://ͨ����Ա�������⿪�Žӿڣ�ʹ�ÿ��Է��ʵ�˽�еĳ�Ա����
//	void set_Point_x(int x) //����x
//	{
//		p_x = x;
//	}
//	void set_Ponit_y(int y) //����y
//	{
//		p_y = y;
//	}
//	int get_Point_x() //���x
//	{
//		return p_x;
//	}
//	int get_Point_y() //���y
//	{
//		return p_y;
//	}
//};
//class Circle //Բ��
//{
//private:
//	int c_R;//�뾶
//	Point c_center;//Բ��
//public://ͨ����Ա�������⿪�Žӿڣ�ʹ�ÿ��Է��ʵ�˽�еĳ�Ա����
//	void set_Circle_r(int r)//����Բ�İ뾶
//	{
//		c_R = r;
//	}
//	void set_Circle_x_y(Point center) //����Բ��
//	{
//		c_center = center;	//Բ�İ뾶���ڴ�������ֵ
//	}
//	int get_Circle_r() //��ȡԲ�İ뾶
//	{
//		return c_R;
//	}
//	Point get_Circle_x_y() //��ȡԲ��
//	{
//		return c_center;
//	}
//};
//�жϵ��Բ�Ĺ�ϵ
void isIncircle(Circle& c, Point& p)
{
	//������������ƽ��
	//˼·���㵽Բ�ĵľ���Ͱ뾶�Ƚ�
	int distance1 =
		(
			(p.get_Point_x() - c.get_Circle_x_y().get_Point_x()) * (p.get_Point_x() - c.get_Circle_x_y().get_Point_x()) +
			(p.get_Point_y() - c.get_Circle_x_y().get_Point_y()) * (p.get_Point_y() - c.get_Circle_x_y().get_Point_y())
			);
	//����뾶��ƽ��
	int distance2 = (c.get_Circle_r() * c.get_Circle_r());

	cout << "�뾶��ƽ����" << distance2 << endl;
	cout << "�㵽Բ�εľ���ƽ����" << distance1 << endl;

	//���бȽϣ��жϱȽ�
	if (distance1 < distance2)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance1 == distance2)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance1 > distance2)
	{
		cout << "����Բ��" << endl;
	}
}
int main()
{
	Point p;//����һ������Ķ���p
	//p���x,y������
	p.set_Point_x(10);
	p.set_Ponit_y(10);


	Circle c;//����һ��Բ��Ķ���c

	Point c_center;//Բc��Բ��
	c_center.set_Point_x(10);//Բ��x������
	c_center.set_Ponit_y(0); //Բ��y������

	c.set_Circle_x_y(c_center);//Բ�ģ�x��y��������

	c.set_Circle_r(10);//Բc�İ뾶

	isIncircle(c, p);//���ú�����ȷ�����Բ�Ĺ�ϵ

	system("pause");
	return 0;
};