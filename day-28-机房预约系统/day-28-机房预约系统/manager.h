#pragma once
#include"identity.h"
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
};