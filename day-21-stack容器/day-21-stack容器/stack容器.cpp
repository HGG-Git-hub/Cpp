#include"global.h"

void test01() 
{
	
	//���캯����
	//stack<T > stk;stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
	stack<int>stk;
	
	//���ݴ�ȡ��
	//push(elem);��ջ�����Ԫ��
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);
	
	cout << "ջ�Ĵ�С��" << stk.size() << endl;

	//ֻҪջ��Ϊ�գ��鿴ջ����Ԫ�أ���ִ�г�ջ�Ĳ���
	
	//empty();�ж϶�ջ�Ƿ�Ϊ��
	while (!stk.empty())
	{
		//top();����ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ��" <<stk.top() << endl;
		//pop(); ��ջ���Ƴ���һ��Ԫ��
		stk.pop();
	}
	//size(); ����ջ�Ĵ�С
	cout << "ջ�Ĵ�С��" << stk.size() << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};