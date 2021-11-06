#include"manager.h"
#include"globalFile.h"
//默认构造
manager::manager() 
{

}
//有参构造
manager::manager(string name, string pwd) 
{
	//初始化管理员的信息
	this->m_name = name;
	this->m_pwd = pwd;
}
//重写父类的纯虚函数
//自身的操作菜单
void manager::operMenu() 
{
	cout << "欢迎" << this->m_name << "管理员登录~" << endl;
	cout << endl;
	cout << "\t\t------------------------------------------\n" << endl;
	cout << "\t\t|		1.添加账号		 |\n" << endl;
	cout << "\t\t|		2.查看账号		 |\n" << endl;
	cout << "\t\t|		3.查看机房		 |\n" << endl;
	cout << "\t\t|		4.清空预约  		 |\n" << endl;
	cout << "\t\t|		0.注销登录  		 |\n" << endl;
	cout << "\t\t------------------------------------------\n" << endl;
	cout << "请输入您的选择：";
}
//添加账号
void manager::add_Person() 
{
	cout << "请输入添加账号的类型：" << endl;
	cout << "1、学生-----2、教师" << endl;
	cout << "请输入 1 或者 2 :";

	string fileName;//用于接收文件名
	string tip;
	ofstream ofs;//用于文件操作

	int select = 0;//用户选择
	cin >> select;
	if (select == 1) 
	{
		fileName = STUDENT_FILE;
		tip = "请输入学号：";
	}
	else if (select == 2) 
	{
		fileName = TEACHER_FILE;
		tip = "请输入职工号：";
	}
	//利用追加的方式写文件
	ofs.open(fileName, ios::out | ios::app);

	int id; //接收学号或者职工号
	string name;
	string pwd;

	cout << tip;
	cin >> id;

	cout << "请输入姓名：";
	cin >> name;

	cout << "请输入密码：";
	cin >> pwd;

	//将用户的数据添加到文件中
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "添加成功~" << endl;
	system("pause");
	system("cls");
	ofs.close();
}
//查看账号
void manager::show_Person() 
{

}
//查看机房信息
void manager::show_Computer() 
{

}
//清空预约记录
void manager::clear_File() 
{

}