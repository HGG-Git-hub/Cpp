#include"global.h"
class Person 
{
public:
	char m_name[64];
	int m_age = 19;
};
void test01() 
{
	//2.����������
	ifstream ifs;
	//3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("Person.txt",ios::in|ios::binary);
	if (!ifs.is_open()) 
	{
		cout << "�ļ���ʧ��~" << endl;
		return;
	}
	//4.���ļ�
	Person p;
	ifs.read((char *)&p,sizeof(Person));

	cout << p.m_name << p.m_age << endl;
	//5.�ر��ļ�
	ifs.close();
}
int main() 
{
	test01();
	system("pause");
	return 0;
};