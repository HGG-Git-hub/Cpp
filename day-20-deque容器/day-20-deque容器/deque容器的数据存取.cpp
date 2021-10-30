#include"global.h"
void printDeque(deque<int>& d) 
{
	for (deque<int>::iterator it=d.begin(); it != d.end(); it++) 
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
	
	//at(int idx);返回索引`idx`所指的数据
	for (int i = 0; i < 10; i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl; 
	
	//operator[]; 返回索引`idx`所指的数据
	for (int i = 0; i < 10; i++) 
	{
		cout << d[i] << " ";
	}
	cout << endl;
	//front(); 返回容器中第一个数据元素
	cout << d.front() << endl;
	
	//back();返回容器中最后一个数据元素
	cout << d.back() << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};