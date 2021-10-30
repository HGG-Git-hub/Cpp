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
	
	//�ж��Ƿ�Ϊ��
	if (L.empty()) 
	{
		cout << "��~" << endl;
	}
	else 
	{
		cout << "�ǿ�~" << endl;
		//size();����������Ԫ�صĸ���
		cout << L.size() << endl;
	}
	
	//resize(num);����ָ�������ĳ���Ϊ`num`���������䳤������Ĭ��ֵ�����λ��
	L.resize(10);
	printList(L);
	
	//resize(num,elem);����ָ�������ĳ���Ϊ`num`���������䳤������`elem`ֵ�����λ��
	L.resize(10,2);
	printList(L);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};