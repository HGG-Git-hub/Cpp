#include"global.h"
void printDeque(deque<int>& d) 
{
	for (deque<int>::iterator it=d.begin(); it != d.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	deque<int>d;
	for (int i = 0; i < 10; i++) 
	{
		d.push_back(i);
	}
	printDeque(d);
	
	//at(int idx);��������`idx`��ָ������
	for (int i = 0; i < 10; i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl; 
	
	//operator[]; ��������`idx`��ָ������
	for (int i = 0; i < 10; i++) 
	{
		cout << d[i] << " ";
	}
	cout << endl;
	//front(); ���������е�һ������Ԫ��
	cout << d.front() << endl;
	
	//back();�������������һ������Ԫ��
	cout << d.back() << endl;
}
int main() 
{
	test01();

	system("pause");
	return 0;
};