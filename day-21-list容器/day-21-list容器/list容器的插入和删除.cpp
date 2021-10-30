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

	//尾插
	L.push_back(100);
	L.push_back(200);
	//头插
	L.push_front(10);
	L.push_front(20);

	printList(L);//输出结果：20 10 100 200

	//尾删
	L.pop_back();
	printList(L);
	//头删
	L.pop_front();
	printList(L);

	//插入
	L.insert(L.begin(),1000);
	printList(L);

	list<int>::iterator it = L.begin();
	L.insert(++it,5,2000);
	printList(L);

	//删除
	it = L.begin();
	L.erase(it);
	printList(L);

	//移除，不需要迭代器
	L.remove(2000);
	printList(L);

	//清空
	L.clear();
	printList(L);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};