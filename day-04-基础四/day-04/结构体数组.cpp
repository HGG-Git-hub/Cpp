#include"global.h"
//定义一个结构体
struct student
{
	string name;
	int age;
	int score;
};
int main() 
{
	//创建结构体数组并赋值
	student stuArray[3] = 
	{
		{"张三",18,80},
		{"李四",19,90},
		{"王五",20,70}
	};
	//后期也可以修改定义好的值
	stuArray[0].name = "a";
	stuArray[0].age = 1;
	stuArray[0].score = 2;

	//cout << stuArray[0].score << stuArray[0].age << stuArray[0].name << endl;

	for (int i = 0; i < 3; i++) 
	{
		cout<<stuArray[i].name<<stuArray[i].age<<stuArray[i].score<<endl;
	}
	
	
	system("pause");
	return 0;

};
