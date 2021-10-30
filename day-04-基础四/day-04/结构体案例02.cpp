#include"global.h"
//英雄结构体定义
struct Hero
{
	string name;
	int age;
	string sex;
};
void bbsort(struct Hero message[5],int len) //排序函数声明
{
	for (int i = 0; i < len - 1; i++) 
	{
		for (int j = 0; j < len - i - 1; j++) 
		{
			if (message[j].age > message[j + 1].age) 
			{
				struct Hero temp = message[j];
				message[j] = message[j + 1];
				message[j + 1] = temp;
			}
		}
	}
}
void print_Hero(struct Hero message[5],int len)//输出函数声明 
{
	for (int i = 0; i < len; i++) 
	{
		cout<<"排序后：" << message[i].name << message[i].age << message[i].sex << endl;
	}
}
int main() 
{
	//设计一个英雄的结构体
	struct Hero message[5]
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};

	int len = sizeof(message) / sizeof(message[0]);//求数组的元素个数
	for (int i = 0; i < len; i++)
	{
		cout <<"排序前：" << message[i].name << message[i].age << message[i].sex << endl;
	}
	cout << "  " << endl;

	bbsort(message,len);//排序函数调用

	print_Hero(message,len);//输出函数调用

	system("pause");
	return 0;
};