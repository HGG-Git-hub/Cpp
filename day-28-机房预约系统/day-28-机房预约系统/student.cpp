#include"student.h"
#include"globalFile.h"
//默认构造
student::student() 
{

}
//有参构造 参数：学号、姓名、密码
student::student(int id, string name, string pwd) 
{
	this->m_Id = id;
	this->m_name = name;
	this->m_pwd = pwd;

	//初始化机房信息
	//v_Com.clear();

	ifstream ifs(COMPUTER_FILE, ios::in);
	computerRoom com;
	while (ifs >> com.m_Com_Id >> com.m_Max) 
	{
		v_Com.push_back(com);
	}
	ifs.close();
}
//重写父类的纯虚函数
//自身的操作菜单
void student::operMenu() 
{
	cout << "欢迎 " << this->m_name << " 同学登录~" << endl;
	cout << "\t\t------------------------------------------\n" << endl;
	cout << "\t\t|		1.申 请 预 约		 |\n" << endl;
	cout << "\t\t|		2.查看自身预约		 |\n" << endl;
	cout << "\t\t|		3.查看全部预约		 |\n" << endl;
	cout << "\t\t|		4.取 消 预 约  		 |\n" << endl;
	cout << "\t\t|		0.注 销 登 录  		 |\n" << endl;
	cout << "\t\t------------------------------------------\n" << endl;
	cout << "请输入您的选择：";
}
//申请预约
void student::apply_Order() 
{
	cout << "机房开放的时间为周一至周五~" << endl;
	cout << "请输入您需要预约时间对应的数字：" << endl;
	cout << "1.周一 2.周二 3.周三 4.周四 5.周五 " << endl;
	
	int date = 0;	 //日期
	int interval = 0;//上午或者下午
	int room = 0;	 //机房号

	while (true)
	{
		cin >> date;
		if (date >= 1 && date <= 5)
		{
			break;
		}
		cout << "输入有误，请重新输入！" << endl;
	}

	cout << "请输入具体的时间段对应的数字：" << endl;
	cout << "=======1.上午  2.下午=======" << endl;
	while (true)
	{
		cin >> interval;
		if (interval >= 1 && interval <= 2)
		{
			break;
		}
		cout << "输入有误，请重新输入！" << endl;
	}
	cout << "请选择机房：" << endl;
	
	//输出机房信息
	for (int i = 0; i < v_Com.size(); i++) 
	{
		cout << "机房编号：" << v_Com[i].m_Com_Id << " 容量为：" << v_Com[i].m_Max << endl;
	}
	while (true)
	{
		cout << "请选择机房的ID号:";
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		cout << "输入有误，请重新输入！" << endl;
	}
	cout << "恭喜 " << this->m_name << " 同学，预约成功~" << endl;
	cout << "审核中~" << endl;

	//将预约信息写入到预约文件中
	ofstream ofs(ORDER_FILE, ios::app);//追加方式写入
	ofs << "date:" << date << " " << "interval:" << interval << " "
		<< "Stu_Id:" << this->m_Id << " "
		<< "Stu_name:" << this->m_name << " "
		<< "room:" << room << " "
		<< "status:" << 1 << endl;   //审核状态 默认为1,表示预约中
	ofs.close();

	system("pause");
	system("cls");
}
//查看自身预约
void student::show_My_Order() 
{
	orderFile of;
	if (of.m_Size == 0) 
	{
		cout << "无预约记录~" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++) 
	{
		if (atoi(of.m_Order_Date[i]["Stu_Id"].c_str()) == this->m_Id) 
		{
			cout << "预约日期: 周 " << of.m_Order_Date[i]["date"];
			cout << " 时间段：" << (of.m_Order_Date[i]["interval"] == "1" ? "上午" : "下午");
			cout << " 机房号：" << of.m_Order_Date[i]["room"];
			string status = " 状态: ";
			//0 取消预约 1 审核中 2 已预约 -1 预约失败
			if (of.m_Order_Date[i]["status"] == "1")
			{
				status += "审核中";
			}
			else if (of.m_Order_Date[i]["status"] == "2")
			{
				status += "预约成功";
			}
			else if (of.m_Order_Date[i]["status"] == "-1")
			{
				status += "预约失败，审核未通过";
			}
			else
			{
				status += "预约已取消";
			}
			cout << status << endl;
		}
	}
	system("pause");
	system("cls");
}
//查看全部预约
void student::show_All_Order() 
{

}
//取消预约
void student::cancel_Order() 
{

}