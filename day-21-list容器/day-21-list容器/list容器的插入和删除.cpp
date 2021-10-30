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

	//β��
	L.push_back(100);
	L.push_back(200);
	//ͷ��
	L.push_front(10);
	L.push_front(20);

	printList(L);//��������20 10 100 200

	//βɾ
	L.pop_back();
	printList(L);
	//ͷɾ
	L.pop_front();
	printList(L);

	//����
	L.insert(L.begin(),1000);
	printList(L);

	list<int>::iterator it = L.begin();
	L.insert(++it,5,2000);
	printList(L);

	//ɾ��
	it = L.begin();
	L.erase(it);
	printList(L);

	//�Ƴ�������Ҫ������
	L.remove(2000);
	printList(L);

	//���
	L.clear();
	printList(L);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};