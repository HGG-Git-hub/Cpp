#include"employee.h"

//���캯���ľ���ʵ�֣������ʼ���������ֵ=�����ֵ
Employee::Employee(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}
//��ʾ������Ϣ�����ľ���ʵ��
void Employee::showInfo() 
{
	cout << "Ա�����:" << this->m_Id
		<< "\t������" << this->m_Name
		<< "\t  ��λ��" << this->getDeptName()
		<< "\t��λְ����ɾ�����������" << endl;
}
//��ʾ��λ���ƺ����ľ���ʵ��
string Employee::getDeptName() 
{
	return "��ͨԱ��";
}
