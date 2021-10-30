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

	//reverse(); ��ת����
	L.reverse();
	printList(L);
	
	//sort();��������
	L.sort();//Ĭ������
	printList(L);
	//�������-дһ������
	L.sort(myCompare);
	printList(L);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};