#pragma once
#include"worker.h"
#include<iostream>
using namespace std;
//Ա��������
class Employee :public Worker 
{
public:
	//���캯��,��ʼ������������
	Employee(int id,string name,int did);

	//���������д���ി�麯����virtual�ؼ��ֿ�ɾ�ɲ�ɾ
	//��ʾ������Ϣ(����)
	virtual void  showInfo();
	
	//��ʾ��λ���ƣ�������
	virtual string getDeptName();
};