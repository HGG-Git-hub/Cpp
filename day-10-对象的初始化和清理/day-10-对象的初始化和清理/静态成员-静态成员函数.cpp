#include"global.h"

//��̬��Ա����
class Person 
{
public:
	static int m_age;//��̬��Ա����
	int m_num;//�Ǿ�̬��Ա����

	/*�ص㣺��Ҫ�����������������ʼ��,��Ҫд���������*/

	//��̬��Ա����������Ȩ�ޣ�˽�еľ�̬��Ա�����������޷����ʣ�
	static void func() 
	{
		//��̬�������Ա����ʵ�ԭ�򣺾�̬�����ǹ���ģ�
		m_age = 100;
		//m_num = 200; //��̬��Ա�����޷����ʷǾ�̬��Ա�������ᱨ��
		/*�����ԭ���޷�����m_num���ĸ����������*/
		cout << "static void func" << endl;
		cout << m_age << endl;
	}
private:
	static void func1()//������Ȩ�ޣ�˽�еľ�̬��Ա�����������޷����ʣ�
	{
	}
};
int Person::m_age = 0; //��̬��Ա���Եĳ�ʼ��

void test01() 
{
	//���ʾ�̬��Ա���������ַ�ʽ
	// ע�⣺���ʷǾ�̬��Ա����ֻ��ͨ���������
	//ͨ���������
	Person p;
	p.func();
	//ͨ����������
	Person::func();
	//Person::fun1();//˽�о�̬�������޷�����
}
int main() 
{
	test01();

	system("pause");
	return 0;
};