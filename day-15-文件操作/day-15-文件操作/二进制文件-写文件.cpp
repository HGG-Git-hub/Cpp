#include"global.h"
class Person 
{
public:
	//c�е��ַ�����=C++�е�string�����ǽ���ʹ���ַ����飬ԭ�򣺵ײ㻹��ʹ��C����д��
	char m_name[64];
	int m_age;

};
void test01() 
{
	//2.����������
	ofstream ofs;

	//�������ڴ����������ͬʱ��ָ�����ļ�·���ʹ��ļ��ķ�ʽ2��3�ȼ�����һ��
	//ofstream ofs("Person.txt",ios::out|ios::binary);
	
	//3.���ļ�
	ofs.open("Person.txt", ios::out | ios::binary);

	//4.д�ļ�
	Person p = {"����",18};
	ofs.write((const char*)&p, sizeof(Person));

	int a = 10;
	ofs.write((const char*)&a,sizeof(int));

	//5.�ر��ļ�
	ofs.close();

}
int main() 
{
	test01();

	system("pause");
	return 0;
};