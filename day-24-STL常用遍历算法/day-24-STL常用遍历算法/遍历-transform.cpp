#include"global.h"
//�º���
class Transform 
{
public:
	int operator()(int v) 
	{
		return v;
	}
};
class Print 
{
public:
	void operator()(int val) 
	{
		cout << val<< " ";
	}
};
void print1(int v) 
{
	cout << v << " ";
}
void test01() 
{
	vector<int>v;
	for (int i = 0;i < 10; i++) 
	{
		v.push_back(i);
	}

	vector<int>v1;
	
	//ָ������v1�Ĵ�С
	v1.resize(v.size());
	
	//�����õĺ�����v�����е�Ԫ�ذ��˵�v1��
	transform(v.begin(),v.end(),v1.begin(), Transform());
	
	//��v1�е�Ԫ�ر���
	//��ͨ����
	for_each(v1.begin(),v1.end(), print1);
	cout << endl;
	//�º���
	for_each(v1.begin(), v1.end(), Print());
	cout << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};