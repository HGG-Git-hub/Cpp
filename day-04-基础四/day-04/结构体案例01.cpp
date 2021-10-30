#include"global.h"
//定义学生结构体
struct student
{
	string sName;
	int score;
};
//定义老师结构体
struct teacher
{
	string tName;
	struct student sArray[5];
};
void all(struct teacher tArray[3], int len) 
{
	//添加随机数种子，作用：利用当前系统时间生成随机数，防止每次随机数都一样,必须有头文件
	srand((unsigned int)time(NULL));

	string nameSeed = "ABCDE";  
	for (int i = 0; i < len; i++) 
	{
		tArray[i].tName = "teacher_";
		tArray[i].tName += nameSeed[i]; //输出老师的姓名
		for (int j = 0; j < 5; j++) 
		{
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameSeed[j];  //输出对应学生的姓名
			//1.系统生成随机数:rand()%61 表示生成0-60的随机数 加40之后 为40-100
			int num = rand() % 61 + 40 ;
			tArray[i].sArray[j].score = num;		//输出学生的成绩；
		}
	}
}
void print_all(struct teacher tArray[],int len)
{
	for (int i = 0; i < len; i++) 
	{
		cout <<"老师姓名：" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++) 
		{
			cout << "\t学生的姓名：" << tArray[i].sArray[j].sName <<" ";
			cout <<"\t学生的分数：" << tArray[i].sArray[j].score<< endl;
		}
	}
}
int main() 
{
	//创建3名老师的数组
	struct teacher tArray[3];
	//通过函数给老师和学生赋值
	int len = (sizeof(tArray)/sizeof(tArray[0]));
	all(tArray,len);
	//打印输出
	print_all(tArray,len);

	system("pause");
	return 0;
};

