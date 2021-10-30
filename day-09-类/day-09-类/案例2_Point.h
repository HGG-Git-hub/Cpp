#pragma once

//点类
class Point 
{
private://私有权限
	int p_x;  //x坐标
	int p_y;  //y坐标
public://通过成员函数对外开放接口，使得可以访问到私有的成员属性
	
	void set_Point_x(int x); //设置x
	void set_Ponit_y(int y);//设置y
	
	int get_Point_x();//输出x
	int get_Point_y(); //输出y	
};
