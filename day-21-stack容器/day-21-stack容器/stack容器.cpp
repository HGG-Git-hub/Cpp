#include"global.h"

void test01() 
{
	
	//构造函数：
	//stack<T > stk;stack采用模板类实现，stack对象的默认构造形式
	stack<int>stk;
	
	//数据存取：
	//push(elem);向栈顶添加元素
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);
	
	cout << "栈的大小：" << stk.size() << endl;

	//只要栈不为空，查看栈顶的元素，并执行出栈的操作
	
	//empty();判断堆栈是否为空
	while (!stk.empty())
	{
		//top();返回栈顶元素
		cout << "栈顶元素为：" <<stk.top() << endl;
		//pop(); 从栈顶移除第一个元素
		stk.pop();
	}
	//size(); 返回栈的大小
	cout << "栈的大小：" << stk.size() << endl;
}
int main() 
{
	test01();
	system("pause");
	return 0;
};