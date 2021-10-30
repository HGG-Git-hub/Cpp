#include"global.h"
void printList(const list<int>& L) 
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
//��ֵ
void test01() 
{
	list<int>L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	printList(L1);

	list<int>L2;
	//assign(beg, end);��[beg, end)�����е����ݿ�����ֵ������
	L2.assign(L1.begin(), L1.end());
	printList(L2);
	
	//assign(n,elem);`//��n��elem������ֵ������
	list<int>L3;
	L3.assign(5,1);
	printList(L3);

	//list& operator=(const list &list);���صȺŲ�����
	list<int>L4;
	L4 = L1;
	printList(L4);
}
//����
void test02() 
{
	list<int>L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);

	cout << "����ǰ��" << endl;
	printList(L1);
	list<int>L3;
	L3.assign(5, 1);
	printList(L3);

	swap(L1,L3);

	cout << "������" << endl;
	printList(L1);
	printList(L3);
}
int main() 
{
	//test01();
	test02();
	system("pause");
	return 0;
};