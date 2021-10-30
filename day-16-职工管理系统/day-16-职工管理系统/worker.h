#pragma once
#include<iostream>
#include<string>
using namespace std;
//职工抽象类
class Worker 
{
public://成员属性
	//职工编号
	int m_Id;
	//职工姓名
	string m_Name;
	//职工所属部门编号
	int m_DeptId;
public://成员函数（成员行为）
	//显示个人信息
	virtual void  showInfo() = 0;//纯虚函数，不做任何实现
	//显示岗位名称
	virtual string getDeptName() = 0;
};