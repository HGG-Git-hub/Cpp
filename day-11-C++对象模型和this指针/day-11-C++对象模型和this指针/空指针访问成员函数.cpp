#include"global.h"
class Person 
{
public:
	int m_age=0;

	void show_Person_name() 
	{
		cout << "show_Person_name" << endl;
	}
	void show_age() 
	{
		if (this == NULL) //��������ͻ�İ취
		{
			return;
		}
		cout<<"m_age=" << m_age << endl;
		//cout<<"m_age=" << this->m_age << endl;
		/*���ߵȼۣ�ϵͳ��Ĭ�ϼ���this����������ʾ������
		  this��ָ�����ģ�����Ŀǰ����û�ж������
		  ����������thisָ��p��pΪ�գ�thisָ��ָ���˿գ���ָ����ʷǿ����Ի�������ͻ*/
	}
};
void test01() 
{
	Person* p = NULL;//Person���һ��ָ�룬ָ���

	p->show_Person_name();

	/*��p����show_age�������ʱ��thisָ��ͻ�ָ��p��
		pΪ�գ�thisָ��ָ���˿գ��ÿ�ָ����ʷǿջ�������ͻ*/
	p->show_age();
}
int main() 
{
	test01();

	system("pause");
	return 0;
};