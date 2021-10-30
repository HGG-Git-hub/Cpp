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
	//queue<T> que;//queue采用模板类实现，queue对象的默认构造形式
	queue<Person>q;

	//准备数据
	Person p1("张三", 20);
	Person p2("李四", 21);
	Person p3("王五", 22);
	Person p4("赵六", 23);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "队伍元素个数：" << q.size() << endl;

	//判断一下队列是否为空，不为空查看对头和队尾
	while (!q.empty()) 
	{
		//查看队头
		cout << "队头元素：" << q.front().m_name << q.front().m_age << endl;
		//查看队尾
		cout << "队尾元素：" << q.back().m_name << q.back().m_age << endl;
		//出队
		q.pop();
	}
	cout << "队伍剩余个数：" << q.size() << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};