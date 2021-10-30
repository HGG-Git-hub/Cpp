#include"global.h"

void printVector(vector<int>& v) 
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
	{
		cout << *it << " ";
	}
	cout << endl;
}
//����ʹ��
void test01() 
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "����ǰ����������" << endl;
	printVector(v1);

	vector<int>v2;
	for (int j = 9; j >= 0; j--) 
	{
		v2.push_back(j);
	}
	printVector(v2);
	cout << "���������������" << endl;

	//swap(vec);`//��`vec`�뱾���Ԫ�ػ���

	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}
//ʵ����;
//����swap���������ڴ�ռ�
void test02() 
{
	vector<int>v3;
	for (int i = 0; i < 100000; i++) 
	{
		v3.push_back(i);
	}
	cout << "v3��������" << v3.capacity() << endl;
	cout << "v3�Ĵ�С��" << v3.size() << endl;

	v3.resize(3);
	cout << "v3��������" << v3.capacity() << endl;
	cout << "v3�Ĵ�С��" << v3.size() << endl;

	vector<int>(v3).swap(v3);//�ȼ�������
	//��v3Ŀǰ���õ�Ԫ�ظ�������С����ʼ��x��Ȼ��ͨ��swap���н���
	/*vector<int>x = v3;
	x.swap(v3);*/
	
	cout << "v3��������" << v3.capacity() << endl;
	cout << "v3�Ĵ�С��" << v3.size() << endl;
}
int main() 
{
	//test01();
	test02();

	system("pause");
	return 0;
};