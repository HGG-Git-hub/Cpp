#pragma once
#include<iostream>
using namespace std;

//选手类
class Speaker 
{
public:
	string m_name;		//姓名
	double m_score[2];  //得分（考虑到部分选手会有两轮得分）
};