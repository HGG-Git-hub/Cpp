#include"global.h"
void printMap(map<int,int>& m) 
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) 
	{
		cout << (*it).first << " " << (*it).second << " ";
	}
	cout << endl;
}
void test01() 
{
	map<int,int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 10));
	m.insert(pair<int, int>(3, 10));
	m.insert(pair<int, int>(4, 10));

	//empty();判断容器是否为空
	if (m.empty()) 
	{
		cout << "空~" << endl;
	}
	else 
	{
		cout << "非空~" << endl;
		//size();返回容器中元素的数目
		cout << "元素个数：" << m.size() << endl;
	}
	//swap(st);交换两个集合容器
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 20));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 20));
	m1.insert(pair<int, int>(4, 20));
	cout << "交换前：" << endl;
	printMap(m);
	printMap(m1);

	m.swap(m1);

	cout << "交换后：" << endl;
	printMap(m);
	printMap(m1);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};