#include"global.h"

void printDeque(deque<int>& d) 
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	deque<int>d;

	d.push_back(2);
	d.push_back(4);
	d.push_back(6);
	d.push_back(7);
	d.push_back(1);
	cout << "排序前：" << endl;
	printDeque(d);
	
	//sort(iterator beg, iterator end); 对`beg`和`end`区间内元素进行排序
	sort(d.begin(),d.end());

	cout << "排序后：" << endl;
	printDeque(d);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};