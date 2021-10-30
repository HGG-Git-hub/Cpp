#include"global.h"
//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class student 
{
public://公共权限
	//属性
	string s_name;
	int s_num;

	//通过行为给属性赋值
	void set_name(string name)
	{
		s_name = name;
	}
	void set_num(int num)
	{
		s_num = num;
	}

	//行为
	void showStudent() 
	{
		cout<<s_name<<" "<<s_num<< endl;
	};
};	
int main() 
{	
	//实例化(通过类，定义具体的对象)
	student s1;

	//赋值
	s1.set_name("张三");
	s1.set_num(1);

	//调用函数
	s1.showStudent();

	system("pause");
	return 0;
};