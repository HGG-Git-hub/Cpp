#include"global.h"


class GreateFive
{
public:
	bool operator()(int val) 
	{
		if (val > 5) 
		{
			return true;
		}
		else 
		{
			return false;
		}
		//if{}else{}�ȼ��� return val > 5;
	}
};
void test01() 
{
	vector<int>v;
	for (int i = 0; i < 10; i++) 
	{
		v.push_back(i);
	}
	
	//������������û�д���5����
	//GreateFive()�����������������������Ķ��󣬿���ʹ����������
	//GreateFive g;�������Ķ���
	//find_if() �������㷨���������ң���3�����������ص������ǵ�����

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreateFive());
	if (it == v.end()) 
	{
		cout << "��" << endl;
	}
	else 
	{
		cout << "��" << endl;
		for (; it != v.end(); it++) 
		{
			cout << *it << " ";
		}
		cout << endl;
	}
}
int main() 
{
	test01();
	system("pause");
	return 0;
};