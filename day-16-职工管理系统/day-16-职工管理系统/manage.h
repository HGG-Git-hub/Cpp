#pragma once
#include"worker.h"
//���������
class Manage :public Worker
{
public:
	//���캯��,��ʼ������������
	Manage(int id, string name, int did);

	//���������д���ി�麯����virtual�ؼ��ֿ�ɾ�ɲ�ɾ
	//��ʾ������Ϣ(����)
	virtual void  showInfo();

	//��ʾ��λ���ƣ�������
	virtual string getDeptName();
};