#include"manage.h"
#include<iostream>
using namespace std;

//���캯���ľ���ʵ�֣������ʼ���������ֵ=�����ֵ
Manage::Manage(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}
//��ʾ������Ϣ�����ľ���ʵ��
void Manage::showInfo()
{
	cout << "Ա�����:" << this->m_Id
		<< "\t������" << this->m_Name
		<< "\t  ��λ��" << this->getDeptName()
		<< "\t��λְ������ϰ彻��������" << endl;
}
//��ʾ��λ���ƺ����ľ���ʵ��
string Manage::getDeptName()
{
	return "��˾����";
}
