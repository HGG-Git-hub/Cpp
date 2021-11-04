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

//����ݽ�����������
class SpeechManager 
{
public:
	//��һ�ֵ�ѡ�ֱ������
	vector<int>v1;
	//��һ�ֽ�����ѡ�ֱ������
	vector<int>v2;
	//ʤ����ѡ�ֱ������
	vector<int>vVictory;
	//��ű���Լ���Ӧѡ�ֵ�����
	map<int, Speaker>m_Speaker;
	//��������¼������
	map<int,vector<string>>m_Record;
	//��¼��������
	int index;

public:
	//�Ա���ʱ֮��
	//���캯��������
	SpeechManager();
	
	//��ʾ�˵�����������
	void show_Menu();
	//�˳��˵�����������
	void exitSystem();
	
	//��ʼ�����������Եĺ�������
	void initSpeech();
	//����12��ѡ�ֵĺ�������
	void createSpeaker();
	
	//��ʼ�����ĺ�������
	void startSpeech();
	//��ǩ����������
	void speechDraw();
	//��������������
	void speechContest();
	//���������ĺ�������
	void showScore();
	//������Ϣ����ĺ�������
	void saveRecord();
	//��ȡ��¼��Ϣ�ĺ�������
	void loadRecord();
	//�ж��ļ��Ƿ�Ϊ�յı�־
	bool fileIsEmpty;

	
	//��������������
	~SpeechManager();
};