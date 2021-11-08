#include"teacher.h"
#include"orderFile.h"
//默认构造
teacher::teacher() 
{

}

//有参构造 参数：教师职工编号、姓名、密码
teacher::teacher(int empid, string name, string pwd) 
{
	this->m_EmpId = empid;
	this->m_name = name;
	this->m_pwd = pwd;
}

//重写父类的纯虚函数
//自身的操作菜单
void teacher::operMenu() 
{
	cout << "欢迎 " << this->m_name << " 教师登录~" << endl;
	cout << endl;
	cout << "\t\t---------------------------------\n" << endl;
	cout << "\t\t|	  1.查 看 预 约		 |\n" << endl;
	cout << "\t\t|	  2.审 核 预 约		 |\n" << endl;
	cout << "\t\t|	  0.注 销 登 录		 |\n" << endl;
	cout << "\t\t---------------------------------\n" << endl;	
	cout << "请输入您的选择：";
}

//查看所有预约
void teacher::show_All_Order() 
{
	orderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录~" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "预约信息如下:" << endl;

	for (int i = 0; i < of.m_Size; i++)
	{
		cout << "第" << i + 1 << "条 ";
		cout << " 学号：" << of.m_Order_Date[i]["stuId"];
		cout << " 姓名：" << of.m_Order_Date[i]["stuName"];
		cout << " 预约日期: 周 " << of.m_Order_Date[i]["date"];
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
	system("pause");
	system("cls");
}

//审核预约
void teacher::valid_Order() 
{
	orderFile of;
	
	for (int i = 0; i < of.m_Size; i++)
	{
		//学生取消或者没记录时执行
		cout << "无预约记录~" << endl;
		system("pause");
		system("cls");
		return;
	}
	vector<int>v;//存放编号
	int index = 1;//用于记录容器中的编号数量
	cout << "待审核记录如下：" << endl;
	for (int i = 0; i < of.m_Size; i++) 
	{
		if (of.m_Order_Date[i]["status"] == "1") 
		{
			v.push_back(i);
			cout << "第" << index++ << "条" << endl;
			cout << "学号：" << of.m_Order_Date[i]["stuId"];
			cout << " 姓名：" << of.m_Order_Date[i]["stuName"];
			cout << " 预约日期: 周 " << of.m_Order_Date[i]["date"];
			cout << " 时间段：" << (of.m_Order_Date[i]["interval"] == "1" ? "上午" : "下午");
			cout << " 机房号：" << of.m_Order_Date[i]["roomId"];
			string status = " 状态 : 审核中 ";
			cout << status << endl;
		}
	}
	cout << "提示：0.代表不审核" << endl;
	cout << "请输入需要审核的预约记录编号：";
	int select = 0;//接收教师审核的编号
	int ret = 0;//接收审核是否通过的结果
	while (true)
	{	
		cin >> select;
		if (select >= 0 && select <= v.size()) //输入的是有效值
		{	
			if (select == 0) 
			{
				break;
			}
			else 
			{
				cout << "提示：1.通过,2.不通过" << endl;
				cout << "请输入审核结果：";
				cin >> ret;
				if (ret == 1) 
				{
					//通过
					of.m_Order_Date[v[select - 1]]["status"] = "2";
				}
				else
				{
					//不通过
					of.m_Order_Date[v[select - 1]]["status"] = "-1";
				}
				//审核完成后及时更新文件
				of.update_Order();
				cout << "审核完毕~" << endl;
				break;
			}
		}
		cout << "输入有误！" << endl;
	}
	system("pause");
	system("cls");
}