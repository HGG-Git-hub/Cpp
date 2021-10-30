#include"global.h"
void printSet(set<int>& s) 
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	set<int>s1;

	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	//empty(); �ж������Ƿ�Ϊ��
	if (s1.empty()) 
	{
		cout << "��~" << endl;
	}
	else 
	{
		cout << "�ǿ�" << endl;
		//size(); ����������Ԫ�ص���Ŀ
		cout << "Ԫ�ص���Ŀ��" << s1.size() << endl;
	}
	set<int>s2;

	s2.insert(11);
	s2.insert(22);
	s2.insert(33);
	s2.insert(44);

	cout << "����ǰ��" << endl;
	printSet(s1);
	printSet(s2);
	//swap(st);����������������
	s1.swap(s2);
	cout << "������" << endl;
	printSet(s1);
	printSet(s2);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};