#include"boss.h"
#include<iostream>
using namespace std;

//���캯���ľ���ʵ�֣������ʼ���������ֵ=�����ֵ
Boss::Boss(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}
//��ʾ������Ϣ�����ľ���ʵ��
void Boss::showInfo()
{
	cout << "Ա�����:" << this->m_Id
		<< "\t������" << this->m_Name
		<< "\t  ��λ��" << this->getDeptName()
		<< "\t��λְ�𣺹���˾һ������" << endl;
}
//��ʾ��λ���ƺ����ľ���ʵ��
string Boss::getDeptName()
{
	return "��˾�ϴ�";
}

