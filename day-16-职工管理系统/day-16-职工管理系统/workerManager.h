#pragma once//防止头文件重复包含
#include<iostream>
#include"worker.h"
#include"employee.h"
#include"manage.h"
#include"boss.h"
#include<fstream>//文件流函数
#define FILENAME "empFile.txt"//文件的路径(只写文件名表示同级)
using namespace std;
//	管理类
class WorkerManager 
{
public:
	//记录职工人数个数
	int m_Empnum;
	//职工数组指针
	Worker** m_EmpArray;
	//标志文件是否为空
	bool m_FileIsEmpty;
	//统计文件中的人数
	int get_EmpNum();

public:
	WorkerManager();//构造函数

	void Show_Menu();//展示菜单函数声明
	void Exit_system();//退出系统函数声明
	void Add_Emp();//添加员工函数声明
	void save();//保存文件函数声明
	//将文件中原有的员工信息读取到，
	void init_Emp();//初始化员工函数声明
	void Show_Emp();//显示职工函数声明
	void Del_Emp();//删除职工函数声明
	int IsExist(int id);//职工是否存在函数声明
	void Mod_Emp();//修改职工函数函数声明
	void Find_Emp();//查找职工函数声明
	void Sort_Emp();//排序职工函数声明
	void Clean_File();//清空文件函数声明

	~WorkerManager();//析构函数
};