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

	//insert(elem); 在容器中插入元素
	s1.insert(20);
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(50);

	printSet(s1);
	
	//erase(pos); 删除`pos`迭代器所指的的元素，返回下一个元素的迭代器
	s1.erase(s1.begin());
	printSet(s1);
	
	//erase(elem); 删除容器中值为`elem`的元素
	s1.erase(30);
	printSet(s1);

	//erase(beg, end); 删除区间[beg, end)的所有元素，返回下一个元素的迭代器
	s1.erase(s1.begin(), s1.end());
	printSet(s1);

	//clear(); 清除所有元素
	s1.clear();
	printSet(s1);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};