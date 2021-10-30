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
	set<int>s;

	s.insert(20);
	s.insert(10);
	s.insert(30);
	s.insert(50);
	s.insert(40);

	printSet(s);

	//����
	//find(key);����`key`�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�����`set.end(); `
	set<int>::iterator pos= s.find(300);
	if (pos != s.end()) 
	{
		cout << "�ҵ���~" << *pos << endl;
	}
	else 
	{
		cout << "δ�ҵ�~" << endl;
	}
}
//ͳ��
void test02() 
{
	set<int>s;

	s.insert(20);
	s.insert(10);
	s.insert(30);
	s.insert(50);
	s.insert(40);

	printSet(s);
	//count(key); ͳ��`key`��Ԫ�ظ���
	//����set�������ԣ�ͳ�ƵĽ��Ҫô��0Ҫô��1
	cout << s.count(300) << endl;
}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
};