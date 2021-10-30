#include"global.h"

void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	//定义了一个存放int类型数据的容器，不指定构造函数，默认编译器安排
	//默认构造
	vector<int>v1;

	for (int i = 0; i < 10; i++) //插入数据
	{
		v1.push_back(i);
	}
	printVector(v1);//打印数据


	//通过区间构造
	//将v1的开头和结尾迭代器拿过来直接用，此时v2和v1的内容一样
	vector<int>v2(v1.begin(),v1.end());
	printVector(v2);

	//vector(n,elem);//构造函数将n个elem拷贝给本身
	vector<int>v3(5,100);
	printVector(v3);

	//拷贝构造
	vector<int>v4(v3);
	printVector(v4);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};