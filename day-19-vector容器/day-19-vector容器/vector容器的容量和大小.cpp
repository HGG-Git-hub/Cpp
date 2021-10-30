#include"global.h"
void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++) 
	{
		v1.push_back(i);
	}
	printVector(v1);
	//empty(); 判断容器是否为空
	bool b = v1.empty();
	if (b == 0) 
	{
		cout << "不为空" << endl;
	}
	else 
	{
		cout << "为空" << endl;
	}
	//capacity(); 容器的容量
	v1.capacity();
	cout << v1.capacity() << endl;
	//size(); 返回容器中元素的个数
	cout << v1.size() << endl;
	/*resize(int num); 重新指定容器的长度为num,若容器变长，则以0填充新位置, 
											   如果容器变短，则末尾超出容器长度的元素被删除*/
	//v1.resize(15);
	//printVector(v1);
	/*resize(int num, elem); 重新指定容器的长度为num，若容器变长，则以elem值填充新位置, 
													如果容器变短，则末尾超出容器长度的元素被删除*/
	v1.resize(15,100);
	printVector(v1);
}

int main() 
{
	test01();

	system("pause");
	return 0;
};