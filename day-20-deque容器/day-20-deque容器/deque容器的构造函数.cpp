#include"global.h"
void printDeque(const deque<int> &T)
{
	//for (deque<int>::iterator it = T.begin(); it != T.end(); it++) 
	for (deque<int>::const_iterator it = T.begin(); it != T.end(); it++)
	{
		//*it = 100;const�޶����޷������޸�
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	//deque<T > deqT; Ĭ�Ϲ�����ʽ
	deque<int>T1;
	//��������
	for (int i = 0; i < 10; i++) 
	{
		T1.push_back(i);
	}
	printDeque(T1);
	//deque(beg, end);  ���캯����[beg, end)�����Ԫ�ؿ���������
	deque<int>T2(T1.begin(),T1.end());
	printDeque(T2);
	//deque(n, elem); ���캯����n��elem����������
	deque<int>T3(5,10);
	printDeque(T3);
	//deque(const deque & deq);�������캯��
	deque<int>T4(T3);
	printDeque(T4);
}
int main() 
{
	test01();

	system("pause");
	return 0;
};