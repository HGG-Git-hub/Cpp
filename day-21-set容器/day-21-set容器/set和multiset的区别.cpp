#include"global.h"

void printSet(set<int>& s) 
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void printMultiset(multiset<int>& m)
{
	for (multiset<int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	set<int>s;
	//对组
	pair<set<int>::iterator ,bool> res = s.insert(10);
	if (res.second) 
	{
		cout << "插入成功~" << endl;
	}
	else
	{
		cout << "插入失败~" << endl;
	}
	pair<set<int>::iterator, bool> es = s.insert(20);
	if (es.second)
	{
		cout << "插入成功~" << endl;
	}
	else 
	{
		cout << "插入失败~" << endl;
	}
	cout << "set的输出：" << endl;
	printSet(s);//不会输出重复

	multiset<int>m;
	m.insert(10);
	m.insert(10);
	cout << "multiset的输出：" << endl;
	printMultiset(m);//可以输出重复
}
int main() 
{
	test01();
	system("pause");
	return 0;
};