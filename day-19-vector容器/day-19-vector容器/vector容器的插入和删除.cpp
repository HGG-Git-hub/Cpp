#include"global.h"

void printVector(vector<int>&v) 
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
	
	//push_back(ele); β������Ԫ��`ele`
	//β�巨
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);
	
	//pop_back(); `/ / ɾ�����һ��Ԫ��
	//βɾ
	v1.pop_back();
	printVector(v1);
	
	//insert(const_iterator pos, ele); ������ָ��λ��`pos`����Ԫ��`ele`
	v1.insert(v1.begin(),100);
	printVector(v1);
	
	//insert(const_iterator pos, int count, ele);������ָ��λ��`pos`����count��Ԫ��`ele`
	v1.insert(v1.end(), 2, 100);
	printVector(v1);
	
	//erase(const_iterator pos); ɾ��������ָ���Ԫ��
	v1.erase(v1.begin());
	printVector(v1);
	
	//���
	//erase(const_iterator start, const_iterator end);ɾ����������`start`��`end`֮���Ԫ��
	v1.erase(v1.begin(),v1.end());
	printVector(v1);
	
	//clear(); `/ / ɾ������������Ԫ��
	v1.clear();
	printVector(v1);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};