#include"global.h"
void printList(const list<int>& L) 
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
//赋值
void test01() 
{
	list<int>L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	printList(L1);

	list<int>L2;
	//assign(beg, end);将[beg, end)区间中的数据拷贝赋值给本身
	L2.assign(L1.begin(), L1.end());
	printList(L2);
	
	//assign(n,elem);`//将n个elem拷贝赋值给本身
	list<int>L3;
	L3.assign(5,1);
	printList(L3);

	//list& operator=(const list &list);重载等号操作符
	list<int>L4;
	L4 = L1;
	printList(L4);
}
//交换
void test02() 
{
	list<int>L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);

	cout << "交换前：" << endl;
	printList(L1);
	list<int>L3;
	L3.assign(5, 1);
	printList(L3);

	swap(L1,L3);

	cout << "交换后：" << endl;
	printList(L1);
	printList(L3);
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};