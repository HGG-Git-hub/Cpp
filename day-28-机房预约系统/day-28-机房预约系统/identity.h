#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//身份抽象基类
/*抽象基类不需要实现，在子类中实现*/
class Identity 
{
public:
	//操作菜单（纯虚函数）
	virtual void operMenu() = 0;
	string m_name;//用户名
	string m_pwd;//密码
};