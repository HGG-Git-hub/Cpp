#include"global.h"
void myPrint(int val)
{
	cout << val << endl;
}
void test01() 
{
	//vectorΪ����������������������ͷ�ļ�ֱ��ʹ�ü��ɣ�int��ʾ����һ��int���͵���v
	vector<int>v;
	vector<int>a;

	//������v�в�������
	v.push_back(10);//�������Դ�,��ʾ����10�������
	v.push_back(20);//�������Դ�,��ʾ����20�������
	v.push_back(30);//�������Դ�,��ʾ����30�������
	v.push_back(40);//�������Դ�,��ʾ����40�������

	//ͨ�����������������е�Ԫ��
	//v.begin()��ʾ��ʼ��������ָ�������е�һ��Ԫ��
	vector<int>::iterator itBegin/*���ֿ������д*/ = v.begin();
	//v.end()��ʾ������������ָ�����������һ��Ԫ�ص���һ��λ��
	vector<int>::iterator itEnd/*���ֿ������д*/ = v.end();

	//��ʼ�������ݣ������
	//��һ�ֱ�����ʽ:��ͨ�����������������е�Ԫ�أ��ٽ��б���
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}
	//�ڶ��ֱ����������������������е�Ԫ��д����forѭ���У�ֱ�ӱ���
	for (vector<int>::iterator itbegin = v.begin(); itbegin != v.end(); itbegin++) 
	{
		cout << *itbegin << endl;
	}
	//�����֣�ֱ��ʹ�ñ��������õı����㷨����Ҫ����ͷ�ļ�#include<algorithm>
	//��ͨ�����������������е�Ԫ�أ���ʹ�ñ��������õı����㷨
	for_each(v.begin(), v.end(), myPrint);
}

int main() 
{
	test01();

	system("pause");
	return 0;
};