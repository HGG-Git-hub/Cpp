#include"global.h"
void printList(const list<int>& L) 
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	//������������
	//list<T > lst;list`����ģ��ʵ�֣������Ĭ�Ϲ�����ʽ
	list<int>lst;
	//��������
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	//��������
	printList(lst);

	//���䷽ʽ���캯��
	//list(beg, end);���캯����[beg, end)�����е�Ԫ�ؿ���������
	list<int>l2(lst.begin(),lst.end());
	printList(l2);

	//��������
	//list(const list & lst);�������캯��

	list<int>l3(l2);
	printList(l3);

	//list(n, elem);���캯����n��elem����������
	list<int>l4(4,11);
	printList(l4);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};