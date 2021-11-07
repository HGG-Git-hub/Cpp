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
	//初始化容器,拿到容器中学生和教师的信息
	this->initVector();
	//初始化机房的信息：将文件中的信息存放到机房容器中
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	computerRoom com;
	while (ifs >> com.m_Com_Id >> com.m_Max)
	{
		v_Com.push_back(com);
	}
	ifs.close();
	//测试
	//cout << "机房的数量：" << v_Com.size() << endl;
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
	string errorTip;//重复错误提示

	int select = 0;//用户选择
	cin >> select;
	if (select == 1) 
	{
		fileName = STUDENT_FILE;
		tip = "请输入学号：";
		errorTip = "学号已存在，请重新输入！";
	}
	else if (select == 2) 
	{
		fileName = TEACHER_FILE;
		tip = "请输入职工号：";
		errorTip = "职工号已存在，请重新输入！";
	}
	//利用追加的方式写文件
	ofs.open(fileName, ios::out | ios::app);

	int id; //接收学号或者职工号
	string name;
	string pwd;

	cout << tip;
	//用于检测学号或职工号是否重复
	while (true)
	{
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret)  //表示重复
		{
			cout << errorTip << endl;
			cout << tip;
		}
		else 
		{
			cout << "学号添加成功！" << endl;
			break;
		}
	}
	
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

	//及时将文件中的数据读取到容器中
	this->initVector();
}
//查看账号
void printStudent(student& s) 
{
	cout << "学号：" << s.m_Id << "  姓名：" << s.m_name << "  密码：" << s.m_pwd << endl;
}
void printTeacher(teacher& t) 
{
	cout << "职工号：" << t.m_EmpId << "  姓名：" << t.m_name << "  密码：" << t.m_pwd << endl;
}
void manager::show_Person() 
{
	cout << "请选择需要查看的信息：" << endl;
	cout << "1、查看所有学生信息" << endl;
	cout << "2、查看所有教师信息" << endl;
	cout << "请输入 1 或 2 " << endl;

	int select = 0;
	cin >> select;
	if (select == 1) //学生
	{
		cout << "所有学生信息如下：" << endl;
		for_each(v_Stu.begin(),v_Stu.end(),printStudent);
	}
	else //老师
	{
		cout << "所有教师信息如下" << endl;
		for_each(v_Tea.begin(), v_Tea.end(), printTeacher);
	}
	system("pause");
	system("cls");
}
//查看机房信息
void manager::show_Computer() 
{
	cout << "机房的信息如下：" << endl;
	for (vector<computerRoom>::iterator it = v_Com.begin(); it != v_Com.end(); it++) 
	{
		cout << "机房的编号：" << it->m_Com_Id
			<< " 机房的容量：" << it->m_Max << endl;
	}
	system("pause");
	system("cls");
}
//清空预约记录
void manager::clear_File() 
{
	cout << "是否清空？" << endl;
	cout << "1.是-2.否" << endl;
	int select = 0;
	cin >> select;
	if (select == 1) 
	{
		//trunc方式打开，文件里有信息，删除
		ofstream ofs(ORDER_FILE, ios::trunc);
		ofs.close();
		cout << "清空成功~" << endl;
		system("pause");
		system("cls");
	}
	else 
	{
		cout << "清空失败~" << endl;
		system("pause");
		system("cls");
	}
}
//初始化容器
void manager::initVector()
{
	//首先确保两容器清空,在进行存放
	v_Stu.clear();
	v_Tea.clear();
	//读取信息--学生
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open()) 
	{
		cout << "文件读取失败！" << endl;
		return;
	}
	student s;
	while (ifs>>s.m_Id>>s.m_name>>s.m_pwd)
	{
		v_Stu.push_back(s);
	}
	//测试是否读取成功
	//cout << "学生的数量：" << v_Stu.size() << endl;
	ifs.close();

	//读取信息--教师
	ifs.open(TEACHER_FILE, ios::in);
	if (!ifs.is_open()) 
	{
		cout << "文件读取失败！" << endl;
		return;
	}
	teacher t;
	while (ifs >> t.m_EmpId >> t.m_name >> t.m_pwd) 
	{
		v_Tea.push_back(t);
	}
	//测试是否读取成功
	//cout << "教师的数量：" << v_Tea.size() << endl;
	ifs.close();
}
//检测重复，参数1：学号或职工编号，参数2：类型（老师或学生）
bool manager::checkRepeat(int id, int type)
{
	if (type == 1) //学生
	{
		for (vector<student>::iterator it = v_Stu.begin(); it != v_Stu.end(); it++) 
		{
			if (id == it->m_Id) 
			{
				return true;
			}
		}
	}
	else //教师
	{
		for (vector<teacher>::iterator it = v_Tea.begin(); it != v_Tea.end(); it++) 
		{
			if (id == it->m_EmpId) 
			{
				return true;
			}
		}
	}
	return false;//假表示没有重复
}