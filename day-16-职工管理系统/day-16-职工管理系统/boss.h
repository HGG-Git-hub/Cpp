#pragma once
#include"worker.h"
class Boss :public Worker
{
public:
	//���캯��,��ʼ������������
	Boss(int id, string name, int did);

	//���������д���ി�麯����virtual�ؼ��ֿ�ɾ�ɲ�ɾ
	//��ʾ������Ϣ(����)
	virtual void  showInfo();

	//��ʾ��λ���ƣ�������
	virtual string getDeptName();
};