#pragma once
#include"identity.h"
#include"computerRoom.h"
#include"orderFile.h"
#include<string>
#include<vector>
#include<fstream>
//子类-学生类
class student :public Identity 
{
public:
	//学生学号
	int m_Id;
	
	//默认构造
	student();
	//有参构造 参数：学号、姓名、密码
	student(int id, string name, string pwd);
	//重写父类的纯虚函数
	//自身的操作菜单
	virtual void operMenu();
	//申请预约
	void apply_Order();
	//查看自身预约
	void show_My_Order();
	//查看全部预约
	void show_All_Order();
	//取消预约
	void cancel_Order();
	//机房容器
	vector<computerRoom>v_Com;
};