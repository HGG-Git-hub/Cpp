#include"global.h"
struct student
{
	string name;
	int age;
	int score;
};
struct student1
{
	//成员列表
	string name;//姓名
	int age;//年龄
	int score;//分数
}s3;

int main() 
{
	struct student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << s1.name << s1.age << s1.score << endl;

	struct student s2 = { "李四",19,90 };
	cout << s2.name << s2.age << s2.score << endl;

	//3.定义结构体时顺便创建变量
	//查看定义结构体
	s3.name = "王五";
	s3.age = 20;
	s3.score = 80;
	cout << s3.name << s3.age << s3.score << endl;
	
	system("pause");
	return 0;
}