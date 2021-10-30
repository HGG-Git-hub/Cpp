#include"global.h"

void printVector(vector<int>& v) 
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
//基本使用
void test01() 
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "交换前的输出结果：" << endl;
	printVector(v1);

	vector<int>v2;
	for (int j = 9; j >= 0; j--) 
	{
		v2.push_back(j);
	}
	printVector(v2);
	cout << "交换后的输出结果：" << endl;

	//swap(vec);`//将`vec`与本身的元素互换

	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}
//实际用途
//巧用swap可以收缩内存空间
void test02() 
{
	vector<int>v3;
	for (int i = 0; i < 100000; i++) 
	{
		v3.push_back(i);
	}
	cout << "v3的容量：" << v3.capacity() << endl;
	cout << "v3的大小：" << v3.size() << endl;

	v3.resize(3);
	cout << "v3的容量：" << v3.capacity() << endl;
	cout << "v3的大小：" << v3.size() << endl;

	vector<int>(v3).swap(v3);//等价于下面
	//用v3目前所用的元素个数（大小）初始化x，然后通过swap进行交换
	/*vector<int>x = v3;
	x.swap(v3);*/
	
	cout << "v3的容量：" << v3.capacity() << endl;
	cout << "v3的大小：" << v3.size() << endl;
}
int main() 
{
	//test01();
	test02();

	system("pause");
	return 0;
};