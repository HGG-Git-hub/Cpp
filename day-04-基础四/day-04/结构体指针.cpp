#include"global.h"
struct student
{
	string name;
	int age;
	int score;
};

int main() 
{
	struct student stuArray[3]
	{
		{"张三",18,80},
		{"李四",19,90},
		{"王五",20,70}
	};


	struct student * p = stuArray;
	for (int i = 0; i < 3; i++)
	{
		cout << p->name << p->age << p->score << endl;
		p++;
	}
	////创建学生结构体变量
	//struct student s { "张三", 11, 77 };
	////通过指针指向结构体变量
	//struct student* p = &s;
	////通过指针访问结构体变量中的数据
	//cout << p->name << p->age << p->score << endl;

	


	system("pause");
	return 0;
};