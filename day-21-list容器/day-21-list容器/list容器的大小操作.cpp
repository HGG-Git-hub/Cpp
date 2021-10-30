#include"global.h"
void printList(list<int>& L) 
{
	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	list<int>L;

	L.push_back(1);
	L.push_back(2);
	L.push_back(3);
	L.push_back(4);

	printList(L);
	
	//判断是否为空
	if (L.empty()) 
	{
		cout << "空~" << endl;
	}
	else 
	{
		cout << "非空~" << endl;
		//size();返回容器中元素的个数
		cout << L.size() << endl;
	}
	
	//resize(num);重新指定容器的长度为`num`，若容器变长，则以默认值填充新位置
	L.resize(10);
	printList(L);
	
	//resize(num,elem);重新指定容器的长度为`num`，若容器变长，则以`elem`值填充新位置
	L.resize(10,2);
	printList(L);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};