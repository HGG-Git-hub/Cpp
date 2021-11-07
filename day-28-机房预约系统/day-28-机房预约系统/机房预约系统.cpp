#include<iostream>
#include<string>
#include"globalFile.h"
#include"identity.h"
#include"manager.h"
#include"teacher.h"
#include"student.h"
using namespace std;
//进入管理员的子菜单
/*引用的方式将管理员传入，通过父类指针接收*/
void managerMenu(Identity*& manager01)
{
	while (true)
	{
		//父类指针调用调用管理员子菜单的函数
		/*父类指针只能调用共有的属性和函数*/
		manager01->operMenu();
		//将父类指针转化为为子类指针，调用子类其他的函数
		manager* man = (manager*)manager01;
		
		int select = 0;
		cin >> select;
		if (select == 1)
		{
			//调用添加账号的函数
			//cout << "添加账号" << endl;
			man->add_Person();
		}
		else if (select == 2) 
		{
			//调用查看账号的函数
			//cout << "查看账号" << endl;
			man->show_Person();
		}
		else if (select == 3) 
		{
			//调用查看机房信息的函数
			//cout << "查看机房信息" << endl;
			man->show_Computer();
		}
		else if (select == 4) 
		{
			//调用清空预约记录的函数
			//cout << "清空预约记录" << endl;
			man->clear_File();
		}
		else 
		{
			delete manager01;
			cout << "注销成功~" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}


//进入学生的子菜单
/*引用的方式将管理员传入，通过父类指针接收*/
void studentMenu(Identity*& student01) 
{
	while (true)
	{
		//父类指针调用调用管理员子菜单的函数
		/*父类指针只能调用共有的属性和函数*/
		student01->operMenu();
		//将父类指针转化为为子类指针，调用子类其他的函数
		student* stu = (student*)student01;
		int select = 0;
		cin >> select;
		if (select == 1) //申请预约
		{
			stu->apply_Order();
		}
		else if (select==2) //查看自身预约
		{
			stu->show_My_Order();
		}
		else if (select == 3) //查看全部预约
		{
			stu->show_All_Order();
		}
		else if (select == 4) //取消预约
		{
			stu->cancel_Order();
		}
		else
		{
			//注销登录
			delete student01;
			cout << "注销成功~" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}



//登录功能   参数1：操作的文件名，参数2：操作的身份类型
void LoginIn(string fileName, int type) 
{
	//父类指针，用于指向子类对象
	Identity* person;

	//读文件
	ifstream ifs;
	ifs.open(fileName, ios::in);
	//判断文件是否存在
	if (!ifs.is_open()) 
	{
		cout << "文件不存在！" << endl;
		ifs.close();
		return;
	}
	//准备接收用户的信息
	int id = 0;
	string name;
	string pwd;
	//判断身份
	if (type == 1) 
	{
		cout << "请输入您的学号：";
		cin >> id;
	}
	else if (type == 2) 
	{
		cout << "请输入您的职工号：";
		cin >> id;
	}
	//管理员只有用户名和密码
	cout << "请输入您的用户名：";
	cin >> name;
	cout << "请输入您的密码：";
	cin >> pwd;

	//身份验证
	if (type == 1) 
	{
		//学生的验证
		int fid;//从文件中读取到的学号号
		string fname;//从文件中读取到的姓名
		string fpwd;//从文件中读取到的密码
		while (ifs >> fid && ifs >> fname && ifs >> fpwd) 
		{
			//与用户输入的信息做对比
			if (fid == id && fname == name && fpwd == pwd) 
			{
				cout << "学生验证成功~" << endl;
				system("pause");
				system("cls");
				//成功后在堆区创建该学生
				person = new student(id, name, pwd);
				//进入学生菜单
				studentMenu(person);
				return;
			}
		}
	}
	else if (type == 2) 
	{
		//教师的验证
		int fid;//从文件中读取到的学号号
		string fname;//从文件中读取到的姓名
		string fpwd;//从文件中读取到的密码
		while (ifs >> fid && ifs >> fname && ifs >> fpwd)
		{
			//与用户输入的信息做对比
			if (fid == id && fname == name && fpwd == pwd)
			{
				cout << "教师验证成功~" << endl;
				system("pause");
				system("cls");
				//成功后在堆区创建该教师
				person = new teacher(id, name, pwd);
				//进入教师菜单
				/*暂未实现*/
				return;
			}
		}
	}
	else if (type == 3) 
	{
		//管理员的验证
		string fname;//从文件中读取到的姓名
		string fpwd;//从文件中读取到的密码
		while (ifs >> fname && ifs >> fpwd)
		{
			//与用户输入的信息做对比
			if (fname == name && fpwd == pwd)
			{
				cout << "管理员验证成功~" << endl;
				system("pause");
				system("cls");
				//成功后在堆区创建该管理员
				person = new manager(name, pwd);
				//进入管理员菜单
				managerMenu(person);
				return;
			}
		}
	}

	cout << "验证登录信息失败，请重新输入！" << endl;
	system("pause");
	system("cls");
	return;
}

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
				LoginIn(STUDENT_FILE, select);
				break;
			case 2: //教师
				LoginIn(TEACHER_FILE, select);
				break;
			case 3: //管理员
				LoginIn(ADMIN_FILE, select);
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
			cout << "请输入对应的数字！" << endl;
		}
	}
	system("pause");
	return 0;
};