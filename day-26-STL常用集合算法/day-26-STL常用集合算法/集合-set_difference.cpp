#include"global.h"
void print_V(int val)
{
	cout << val << " ";
}
void test01() 
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int>v2;
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(40);

	vector<int>v3;
	//开辟空间
	//max表示获取两个里比较大的一个
	v3.resize(max(v1.size(),v2.size()));

	//返回一个迭代器
	//这个迭代器是交集完成的位置
	cout << "v1和v2的差集：" << endl;
	vector<int>::iterator it = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	//输出时，结束位置写交集完成的位置
	for_each(v3.begin(), it, print_V);
	cout << endl;

	//仅仅需要交换连个容器的迭代器
	cout << "v2和v1的差集：" << endl;
	it = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v3.begin());

	//输出时，结束位置写交集完成的位置
	for_each(v3.begin(), it, print_V);
	cout << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};