#include"global.h"
void printVector(vector<int>& v) 
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++) 
	{
		v1.push_back(i);
	}
	printVector(v1);
	
	//at(int dix); `/ / ��������`idx`��ָ������
	for (int i = 0; i < v1.size(); i++) 
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;
	//operator[]; `/ / ��������`idx`��ָ������
	for (int i = 0; i < v1.size(); i++) 
	{
		cout << v1[i] <<" ";
	}
	cout << endl;
	
	//front(); `/ / ���������е�һ������Ԫ��
	v1.front();
	cout << v1.front() << endl;
	
	//back(); `/ / �������������һ������Ԫ��
	v1.back();
	cout << v1.back() << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};