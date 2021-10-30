#include"global.h"
void printList(const list<int>& L) 
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	//创建链表容器
	//list<T > lst;list`采用模板实现，对象的默认构造形式
	list<int>lst;
	//插入数据
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	//遍历容器
	printList(lst);

	//区间方式构造函数
	//list(beg, end);构造函数将[beg, end)区间中的元素拷贝给本身
	list<int>l2(lst.begin(),lst.end());
	printList(l2);

	//拷贝构造
	//list(const list & lst);拷贝构造函数

	list<int>l3(l2);
	printList(l3);

	//list(n, elem);构造函数将n个elem拷贝给本身
	list<int>l4(4,11);
	printList(l4);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};