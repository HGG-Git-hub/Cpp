#include"global.h"
class Person 
{
public:
	string m_name;
	int m_age;
public:
	Person(string name,int age) 
	{
		this->m_name = name;
		this->m_age = age;
	}
};
void test01() 
{
	//queue<T> que;//queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
	queue<Person>q;

	//׼������
	Person p1("����", 20);
	Person p2("����", 21);
	Person p3("����", 22);
	Person p4("����", 23);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "����Ԫ�ظ�����" << q.size() << endl;

	//�ж�һ�¶����Ƿ�Ϊ�գ���Ϊ�ղ鿴��ͷ�Ͷ�β
	while (!q.empty()) 
	{
		//�鿴��ͷ
		cout << "��ͷԪ�أ�" << q.front().m_name << q.front().m_age << endl;
		//�鿴��β
		cout << "��βԪ�أ�" << q.back().m_name << q.back().m_age << endl;
		//����
		q.pop();
	}
	cout << "����ʣ�������" << q.size() << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};