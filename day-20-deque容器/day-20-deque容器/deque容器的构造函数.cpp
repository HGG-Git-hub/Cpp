#include"global.h"
void printDeque(const deque<int> &T)
{
	//for (deque<int>::iterator it = T.begin(); it != T.end(); it++) 
	for (deque<int>::const_iterator it = T.begin(); it != T.end(); it++)
	{
		//*it = 100;const限定，无法进行修改
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	//deque<T > deqT; 默认构造形式
	deque<int>T1;
	//插入数据
	for (int i = 0; i < 10; i++) 
	{
		T1.push_back(i);
	}
	printDeque(T1);
	//deque(beg, end);  构造函数将[beg, end)区间的元素拷贝给本身
	deque<int>T2(T1.begin(),T1.end());
	printDeque(T2);
	//deque(n, elem); 构造函数将n个elem拷贝给本身
	deque<int>T3(5,10);
	printDeque(T3);
	//deque(const deque & deq);拷贝构造函数
	deque<int>T4(T3);
	printDeque(T4);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};