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
	set<int>s;

	s.insert(20);
	s.insert(10);
	s.insert(30);
	s.insert(50);
	s.insert(40);

	printSet(s);

	//查找
	//find(key);查找`key`是否存在，若存在，返回该键的元素的迭代器，若不存在，返回`set.end(); `
	set<int>::iterator pos= s.find(300);
	if (pos != s.end()) 
	{
		cout << "找到了~" << *pos << endl;
	}
	else 
	{
		cout << "未找到~" << endl;
	}
}
//统计
void test02() 
{
	set<int>s;

	s.insert(20);
	s.insert(10);
	s.insert(30);
	s.insert(50);
	s.insert(40);

	printSet(s);
	//count(key); 统计`key`的元素个数
	//对于set容器而言，统计的结果要么是0要么是1
	cout << s.count(300) << endl;
}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
};