#pragma once
#include"globalFile.h"
#include<fstream>
#include<iostream>
#include<map>
#include<string>
using namespace std;

class orderFile
{
public:
	//记录预约条数
	int m_Size;

	//存放预约信息的容器
	/*int-第几个人，map<string,string>--第几个人的具体信息*/
	map<int, map<string, string>>m_Order_Date;

	//构造函数
	orderFile();
	//更新预约记录
	void update_Order();
};