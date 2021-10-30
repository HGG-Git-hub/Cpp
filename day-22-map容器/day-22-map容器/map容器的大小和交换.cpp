#include"global.h"
void printMap(map<int,int>& m) 
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) 
	{
		cout << (*it).first << " " << (*it).second << " ";
	}
	cout << endl;
}
void test01() 
{
	map<int,int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 10));
	m.insert(pair<int, int>(3, 10));
	m.insert(pair<int, int>(4, 10));

	//empty();�ж������Ƿ�Ϊ��
	if (m.empty()) 
	{
		cout << "��~" << endl;
	}
	else 
	{
		cout << "�ǿ�~" << endl;
		//size();����������Ԫ�ص���Ŀ
		cout << "Ԫ�ظ�����" << m.size() << endl;
	}
	//swap(st);����������������
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 20));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 20));
	m1.insert(pair<int, int>(4, 20));
	cout << "����ǰ��" << endl;
	printMap(m);
	printMap(m1);

	m.swap(m1);

	cout << "������" << endl;
	printMap(m);
	printMap(m1);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};