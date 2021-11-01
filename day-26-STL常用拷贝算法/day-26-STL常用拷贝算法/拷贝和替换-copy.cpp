#include"global.h"
void print_V(int val) 
{
	cout << val << " ";
}
void  test01() 
{
	vector<int>v1;
	for (int i = 0; i < 10; i++) 
	{
		v1.push_back(i);
	}
	//输出第一个容器中的内容
	for_each(v1.begin(),v1.end(),print_V);
	cout << endl;

	//准备第二个容器，并指定大小
	vector<int>v2;
	v2.resize(v1.size());

	//进行拷贝
	copy(v1.begin(), v1.end(), v2.begin());
	
	//输出第e二个容器中的内容
	for_each(v2.begin(), v2.end(), print_V);
	cout << endl;

	//赋值等同于拷贝
	v2 = v1;
	for_each(v2.begin(), v2.end(), print_V);
	cout << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};