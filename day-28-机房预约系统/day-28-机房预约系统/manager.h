#pragma once
#include"identity.h"
#include"teacher.h"
#include"student.h"
#include"computerRoom.h"
#include<algorithm>
//子类-管理员类
class manager :public Identity
{
public:
	//默认构造
	manager();
	//有参构造
	manager(string name,string pwd);
	//重写父类的纯虚函数
	//自身的操作菜单
	virtual void operMenu();
	//添加账号
	void add_Person();
	//查看账号
	void show_Person();
	//查看机房信息
	void show_Computer();
	//清空预约记录
	void clear_File();

	/*用来去重操作*/
	//初始化容器
	void initVector();
	//学生容器
	vector<student>v_Stu;
	//教师容器
	vector<teacher>v_Tea;
	//机房容器
	vector<computerRoom>v_Com;

	//检测重复，参数1：学号或职工编号，参数2：类型（老师或学生）
	bool checkRepeat(int id,int type);
};