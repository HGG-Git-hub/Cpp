#include"global.h"
void printDeque(deque<int>& D) 
{
	for (deque<int>::iterator it = D.begin(); it != D.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int>d;
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}
	printDeque(d);

	//两端插入操作：
	//push_back(elem);在容器尾部添加一个数据
	d.push_back(20);
	printDeque(d);
	
	//push_front(elem);在容器头部插入一个数据
	d.push_front(20);
	printDeque(d);
	
	//pop_back();删除容器最后一个数据
	d.pop_back();
	printDeque(d);
	
	//pop_front();删除容器第一个数据
	d.pop_front();
	printDeque(d);
}
void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	printDeque(d1);
	//指定位置操作：
	//insert(pos, elem); 在`pos`位置插入一个`elem`元素的拷贝，返回新数据的位置
	d1.insert(d1.begin(), 222);
	printDeque(d1);

	//insert(pos, n, elem);在`pos`位置插入n个`elem`数据，无返回值
	d1.insert(d1.begin(), 2, 222);
	printDeque(d1);

	//insert(ops, beg, end);在`pos`位置插入[beg, end)区间的数据，无返回值
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);
}
void test03()
{
	deque<int>d3;
	for (int i = 0; i < 10; i++) 
	{
		d3.push_back(i);
	}
	//erase(beg, end); 删除[beg, end)区间的数据，返回下一个数据的位置
	//如果想要删除别的位置的数据，创建一个新的迭代器
	deque<int>::iterator it = d3.begin();
	it++;
	d3.erase(it);
	printDeque(d3);
	
	//erase(pos); 删除`pos`位置的数据，返回下一个数据的位置
	d3.erase(d3.begin());
	printDeque(d3);
	
	//clear();清空容器的所有数据
	d3.clear();
	//d3.erase(d3.begin(),d3.end());//两者效果一样
	printDeque(d3);
}
int main() 
{
	test01();
	test02();
	test03();

	system("pause");
	return 0;
};