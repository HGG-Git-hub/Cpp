#include"global.h"

void printDeque(const deque<int>& d) 
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) 
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
	//deque.empty(); //判断容器是否为空

	if (d.empty()) 
	{
		cout << "空" << endl;
	}
	else
	{
		cout << "非空" << endl;
	}
	
	//deque.size(); //返回容器中元素的个数
	d.size();
	cout << d.size() << endl;
	
	//deque.resize(num); 重新指定容器的长度为`num`，若容器变长，则以默认值填充新位置
						//如果变短，则末尾超出容器长度的元素被删除
	//d.resize(20);
	d.resize(20, 1);//两个重新指定不能同时出现
	printDeque(d);
	
	d.resize(5);
	printDeque(d);

}
int main() 
{
	test01();

	system("pause");
	return 0;
};