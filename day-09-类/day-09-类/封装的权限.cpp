#include"global.h"
class Person 
{
public:
	string m_name;
protected:
	string m_car;
private:
	int ID_cipher;//(���п�����)

//����������ı���Ϊ����
public:
	void func()
	{
		m_name = "����";
		m_car = "С�γ�";
		ID_cipher =1233 ;
	}
};
int main() 
{
	//ʵ����һ����������
	Person p1;
	p1.m_name = "����";
	p1.m_car = "������";//�Ѿ��ڵ�7�����ñ���Ȩ�ޣ������޷����ʣ����Ա���
	p1.ID_cipher = 4321;////�Ѿ��ڵ�9������˽��Ȩ�ޣ������޷����ʣ����Ա���



	system("pause");
	return 0;
};