#include"global.h"

class Person
{
public:
	int m_age;//��������
	int *m_hight;//�������
	Person()
	{
		cout << "Ĭ�Ϲ��캯��" << endl;
	}
	Person(int age,int hight)
	{
		m_age = age;
		//new�����˶�����ַ�����ص��ǵ�ַ��������Ҫָ�����
		//new�ǳ���Ա�ֶ����ٵĵ�ַ����Ҫ�ֶ��ͷţ�һ��������������delete
		m_hight = new int(hight);

		cout << "�вι��캯��" << endl;
	}
	//ǳ�������������⣬�������ظ��ͷ�
	//����İ취���ڶ�������������һ���ַ(new)����ͬ�ĵ�ַ������ͬ������
	//���й��쿽������,���һ��ǳ���������ĵ�����
	Person(const Person& p) 
	{
		m_age = p.m_age;
		/*
		Person���еĶ���p��m_hight��һ����ַ��*p.m_hight��ʾ�����õõ���ַ�е�����,
		new���������ڶ�������һ���µĵ�ַ�����õ�ַ����ָ��m_hight,��Ҫ��������ʱ������m_hight
		*/
		m_hight = new int(*p.m_hight);

		cout<<"����������" << endl;
	}
	~Person()
	{
		//�������룬���������ٵ������ͷŸɾ�
		if (m_hight != NULL) 
		{
			delete m_hight;
			m_hight = NULL;
		}
		cout << "��������" << endl;
	}
};
void test01()
{
	Person p1(18, 160);
	cout << "���䣺" << p1.m_age << "��ߣ�" << *p1.m_hight << endl;

	Person p2(p1);
	cout << "���䣺" << p1.m_age << "��ߣ�" << *p1.m_hight << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
};