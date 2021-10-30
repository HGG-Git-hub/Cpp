#include"global.h"

void printDeque(const deque<int>& t) 
{
	for (deque<int>::const_iterator it = t.begin(); it != t.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	deque<int>T;
	for (int i = 0; i < 10; i++) 
	{
		T.push_back(i);
	}
	printDeque(T);
	//deque& operator=(const deque & deq);重载等号操作符
	deque<int>T1;
	T1 = T;
	printDeque(T1);
	
	//assign(begin, end); 将[beg，end)区间中的数据拷贝赋值给本身
	deque<int>T2;
	T2.assign(T1.begin(), T1.end());
	printDeque(T2);
	
	//assign(n, elem);将n个elem拷贝赋值给本身
	deque<int>T3;
	T3.assign(5,11);
	printDeque(T3);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};