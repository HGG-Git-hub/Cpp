#include"global.h"

void printVector(vector<int>&v) 
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
	
	//push_back(ele); 尾部插入元素`ele`
	//尾插法
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);
	
	//pop_back(); `/ / 删除最后一个元素
	//尾删
	v1.pop_back();
	printVector(v1);
	
	//insert(const_iterator pos, ele); 迭代器指向位置`pos`插入元素`ele`
	v1.insert(v1.begin(),100);
	printVector(v1);
	
	//insert(const_iterator pos, int count, ele);迭代器指向位置`pos`插入count个元素`ele`
	v1.insert(v1.end(), 2, 100);
	printVector(v1);
	
	//erase(const_iterator pos); 删除迭代器指向的元素
	v1.erase(v1.begin());
	printVector(v1);
	
	//清空
	//erase(const_iterator start, const_iterator end);删除迭代器从`start`到`end`之间的元素
	v1.erase(v1.begin(),v1.end());
	printVector(v1);
	
	//clear(); `/ / 删除容器中所有元素
	v1.clear();
	printVector(v1);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};