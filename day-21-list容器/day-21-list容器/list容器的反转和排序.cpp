#include"global.h"
void printList(list<int>& L) 
{
	for (list<int>::iterator it = L.begin(); it != L.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
bool myCompare(int v1, int v2) 
{
	return v1 > v2;
}
void test01() 
{
	list<int>L;
	L.push_back(90);
	L.push_back(80);
	L.push_back(85);
	L.push_back(40);

	printList(L);

	//reverse(); 反转链表
	L.reverse();
	printList(L);
	
	//sort();链表排序
	L.sort();//默认升序
	printList(L);
	//降序操作-写一个函数
	L.sort(myCompare);
	printList(L);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};