#pragma once
#include"worker.h"
//经理抽象类
class Manage :public Worker
{
public:
	//构造函数,初始化对象（声明）
	Manage(int id, string name, int did);

	//子类必须重写父类纯虚函数，virtual关键字可删可不删
	//显示个人信息(声明)
	virtual void  showInfo();

	//显示岗位名称（声明）
	virtual string getDeptName();
};