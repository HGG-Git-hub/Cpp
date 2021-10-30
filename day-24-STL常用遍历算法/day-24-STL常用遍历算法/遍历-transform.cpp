#include"global.h"
//仿函数
class Transform 
{
public:
	int operator()(int v) 
	{
		return v;
	}
};
class Print 
{
public:
	void operator()(int val) 
	{
		cout << val<< " ";
	}
};
void print1(int v) 
{
	cout << v << " ";
}
void test01() 
{
	vector<int>v;
	for (int i = 0;i < 10; i++) 
	{
		v.push_back(i);
	}

	vector<int>v1;
	
	//指定容器v1的大小
	v1.resize(v.size());
	
	//用内置的函数将v容器中的元素搬运到v1中
	transform(v.begin(),v.end(),v1.begin(), Transform());
	
	//将v1中的元素遍历
	//普通函数
	for_each(v1.begin(),v1.end(), print1);
	cout << endl;
	//仿函数
	for_each(v1.begin(), v1.end(), Print());
	cout << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};