#include<iostream>
using namespace std;

int main() 
{
	int select = 0;//用于接收用户的输入
	while (true) 
	{
		cout << endl;
		cout << " ===================欢迎使用机房预约系统~===================" << endl;
		cout << endl;
		cout << "请确认您的身份：" << endl;
		cout << "\t\t--------------------------------------------\n" << endl;
		cout << "\t\t|		1.学  生		   |\n" << endl;
		cout << "\t\t|		2.教  师	   	   |\n" << endl;
		cout << "\t\t|		3.管理员		   |\n" << endl;
		cout << "\t\t|		0.退  出	   	   |\n" << endl;
		cout << "\t\t--------------------------------------------\n" << endl;
		cout << "请输入您的选择：";

		cin >> select;//进行接收

		if (cin.good() == 1) //判断输入的数据是否为整型
		{
			switch (select)
			{
			case 1: //学生
				break;
			case 2: //教师
				break;
			case 3: //管理员
				break;
			case 0: //退出
				cout << "欢迎下次使用~" << endl;
				system("pause");
				system("cls");
				return 0;
				break;
			default:
				cout << "选择有误，请重新选择！" << endl;
				system("pause");
				system("cls");
				break;
			}
		}
		else 
		{
			cout << "输入有误，请重新输入！" << endl;
			system("pause");
			system("cls");
		}	
	}
	system("pause");
	return 0;
};