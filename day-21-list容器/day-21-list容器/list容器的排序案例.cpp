#include"global.h"
class Person 
{
public:
	string m_name;
	int m_age;
	int m_tall;
public:
	Person(string name,int age,int tall) 
	{
		this->m_name = name;
		this->m_age = age;
		this->m_tall = tall;
	}
};
//排序
//将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
//按照年龄进行升序，如果年龄相同按照身高进行降序
bool compare(Person& p1, Person& p2) 
{
	if (p1.m_age == p2.m_age) 
	{
		return p1.m_tall > p2.m_tall;
	}
	else 
	{
		return p1.m_age < p2.m_age;
	}
}
void test01() 
{
	list<Person>L;

	Person p1("张三", 20, 180);
	Person p2("李四", 18, 182);
	Person p3("王五", 19, 187);
	Person p4("赵六", 22, 171);
	Person p5("苗七", 22, 172);

	//插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);

	cout << "排序前：" << endl;
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << (*it).m_name << " " << (*it).m_age << " " << (*it).m_tall << endl;
	}
	cout << endl;

	//排序
	//将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
	//按照年龄进行升序，如果年龄相同按照身高进行降序
	L.sort(compare);
	cout << "排序后：" << endl;
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << (*it).m_name << " " << (*it).m_age << " " << (*it).m_tall << endl;
	}
	cout << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};