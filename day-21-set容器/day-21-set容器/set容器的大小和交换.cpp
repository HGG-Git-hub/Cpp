#include"global.h"
void printSet(set<int>& s) 
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	set<int>s1;

	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	//empty(); 判断容器是否为空
	if (s1.empty()) 
	{
		cout << "空~" << endl;
	}
	else 
	{
		cout << "非空" << endl;
		//size(); 返回容器中元素的数目
		cout << "元素的数目：" << s1.size() << endl;
	}
	set<int>s2;

	s2.insert(11);
	s2.insert(22);
	s2.insert(33);
	s2.insert(44);

	cout << "交换前：" << endl;
	printSet(s1);
	printSet(s2);
	//swap(st);交换两个集合容器
	s1.swap(s2);
	cout << "交换后：" << endl;
	printSet(s1);
	printSet(s2);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};