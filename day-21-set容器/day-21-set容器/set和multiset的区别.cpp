#include"global.h"

void printSet(set<int>& s) 
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void printMultiset(multiset<int>& m)
{
	for (multiset<int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	set<int>s;
	//����
	pair<set<int>::iterator ,bool> res = s.insert(10);
	if (res.second) 
	{
		cout << "����ɹ�~" << endl;
	}
	else
	{
		cout << "����ʧ��~" << endl;
	}
	pair<set<int>::iterator, bool> es = s.insert(20);
	if (es.second)
	{
		cout << "����ɹ�~" << endl;
	}
	else 
	{
		cout << "����ʧ��~" << endl;
	}
	cout << "set�������" << endl;
	printSet(s);//��������ظ�

	multiset<int>m;
	m.insert(10);
	m.insert(10);
	cout << "multiset�������" << endl;
	printMultiset(m);//��������ظ�
}
int main() 
{
	test01();
	system("pause");
	return 0;
};