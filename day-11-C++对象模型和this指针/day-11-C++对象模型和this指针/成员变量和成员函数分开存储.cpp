#include"global.h"
class Person 
{
public:
	int m_age;//�Ǿ�̬��Ա����,������Ķ���
	static int s_m_age;//��̬��Ա��������������Ķ���
	void func() //�Ǿ�̬��Ա����,����������Ķ���
	{	
	}
	static void func1() //��̬��Ա��������������Ķ���
	{
	}
};
int Person::s_m_age=0;//��̬����
void test01() 
{
	Person p;
	//����ռ�õĿռ�Ϊ1���ֽ�
	/*��Ϊ�����ֲ�ͬ�Ŀն��󣬲�ͬ�Ķ���ռ�õ��ڴ�λ�ò�ͬ*/
	cout << "����size of =" << sizeof(p) << endl;
}
void test02() 
{
	Person p;
	//����Ľ�����Կ���class�е�������Щ��������Ķ���
	cout << "�ǿ���size of ="<<sizeof(p)<<endl;
}
int main() 
{
	test01();
	test02();

	system("pause");
	return 0;
};