#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
#include"worker.h"
#include"employee.h"
#include"manage.h"
#include"boss.h"
#include<fstream>//�ļ�������
#define FILENAME "empFile.txt"//�ļ���·��(ֻд�ļ�����ʾͬ��)
using namespace std;
//	������
class WorkerManager 
{
public:
	//��¼ְ����������
	int m_Empnum;
	//ְ������ָ��
	Worker** m_EmpArray;
	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
	//ͳ���ļ��е�����
	int get_EmpNum();

public:
	WorkerManager();//���캯��

	void Show_Menu();//չʾ�˵���������
	void Exit_system();//�˳�ϵͳ��������
	void Add_Emp();//���Ա����������
	void save();//�����ļ���������
	//���ļ���ԭ�е�Ա����Ϣ��ȡ����
	void init_Emp();//��ʼ��Ա����������
	void Show_Emp();//��ʾְ����������
	void Del_Emp();//ɾ��ְ����������
	int IsExist(int id);//ְ���Ƿ���ں�������
	void Mod_Emp();//�޸�ְ��������������
	void Find_Emp();//����ְ����������
	void Sort_Emp();//����ְ����������
	void Clean_File();//����ļ���������

	~WorkerManager();//��������
};