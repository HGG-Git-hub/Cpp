#pragma once
#include<iostream>
#include<string>
using namespace std;
//ְ��������
class Worker 
{
public://��Ա����
	//ְ�����
	int m_Id;
	//ְ������
	string m_Name;
	//ְ���������ű��
	int m_DeptId;
public://��Ա��������Ա��Ϊ��
	//��ʾ������Ϣ
	virtual void  showInfo() = 0;//���麯���������κ�ʵ��
	//��ʾ��λ����
	virtual string getDeptName() = 0;
};