#pragma once
#include"speaker.h"
#include<iostream>
#include<vector>
#include<map>
#include<deque>
#include<algorithm>
#include<functional>
#include<numeric>
#include<string>
#include<fstream>
using namespace std;

//设计演讲比赛管理类
class SpeechManager 
{
public:
	//第一轮的选手编号容器
	vector<int>v1;
	//第一轮晋级的选手编号容器
	vector<int>v2;
	//胜出的选手编号容器
	vector<int>vVictory;
	//存放编号以及对应选手的容器
	map<int, Speaker>m_Speaker;
	//存放往届记录的容器
	map<int,vector<string>>m_Record;
	//记录比赛轮数
	int index;

public:
	//以备不时之需
	//构造函数的声明
	SpeechManager();
	
	//显示菜单函数的声明
	void show_Menu();
	//退出菜单函数的声明
	void exitSystem();
	
	//初始化容器和属性的函数声明
	void initSpeech();
	//创建12名选手的函数声明
	void createSpeaker();
	
	//开始比赛的函数声明
	void startSpeech();
	//抽签函数的声明
	void speechDraw();
	//比赛函数的声明
	void speechContest();
	//晋级分数的函数声明
	void showScore();
	//比赛信息保存的函数声明
	void saveRecord();
	//读取记录信息的函数声明
	void loadRecord();
	//判断文件是否为空的标志
	bool fileIsEmpty;

	
	//析构函数的声明
	~SpeechManager();
};