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
	set<int>s1;

	s1.insert(510);
	s1.insert(710);
	s1.insert(310);
	s1.insert(410);
	s1.insert(410);

	//�ص㣺
	/*
		����ʱ�Զ���������
		���������ظ������ݲ���
	*/
	printSet(s1);

	//��������
	set<int>s2(s1);
	printSet(s2);

	//��ֵ����
	set<int>s3;
	s3 = s1;
	printSet(s3);
}
int main() 
{
	test01();
	system("pause");
	return 0;
};