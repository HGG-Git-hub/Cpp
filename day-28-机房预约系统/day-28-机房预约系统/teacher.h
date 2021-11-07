#pragma once
#include"identity.h"

//子类-教师类
class teacher :public Identity
{
public:
	//教师职工编号
	int m_EmpId;
	//默认构造
	teacher();
	//有参构造 参数：教师职工编号、姓名、密码
	teacher(int empid, string name, string pwd);
	//重写父类的纯虚函数
	//自身的操作菜单
	virtual void operMenu();
	//查看所有预约
	void show_All_Order();
	//审核预约
	void valid_Order();
};