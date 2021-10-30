#include"global.h"
//定义联系人结构体
struct Person
{
	string m_Name;
	int m_Sex;//1-男，2-女
	int m_Age;
	string m_Phone;
	string m_Addr;//住址
};
//定义通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX];//联系人数组
	int m_Size=0;  //当前存放的人数个数
};

//显示菜单的函数
void showMenu()//显示菜单
{
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl;
	cout << "*************************" << endl;
}
//添加联系人的函数
void addPerson(Addressbooks *abs) 
{
	//先判断通讯录是否满员
	if (abs->m_Size == MAX) 
	{
		cout<<"通讯录已满" << endl;
	}
	else 
	{
		//不满员，则可以添加联系人
		cout << "请输入姓名" << endl;
		string name;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;//通讯录中的联系人结构体存放名字
		
		cout << "请输入性别" << endl;
		cout << "1-男，2-女" << endl;
		while (true) 
		{
			//如果输入的是1或2，正常执行
			int sex;//1-男，2-女
			cin >> sex;
			if (sex == 1 || sex == 2) 
			{
				abs->personArray[abs->m_Size].m_Sex = sex;//通讯录中的联系人结构体存放性别
				break;
			}
			cout<<"请输入1或2，其他无效" << endl;
		}
		cout << "请输入年龄" << endl;
		int age;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		cout << "请输入电话" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		cout << "请输入地址" << endl;
		string addr;//住址
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//更新通讯录人数
		abs->m_Size++;
		cout<<"添加联系人成功~" << endl;

		system("pause");
		system("cls");
	}
}
//显示联系人的函数
void showPerson(Addressbooks * abs)
{
	//判断如果当前通讯录中没有人员，就提示为空，人数大于0，显示通讯录中信息
	if (abs->m_Size==0) 
	{
		cout <<"当前通讯录记录为0" << endl;
	}
	else 
	{
		for (int i = 0; i < abs->m_Size; i++) 
		{
			cout << "姓名：" << abs->personArray[i].m_Name <<"  "
				 << "性别：" << (abs->personArray[i].m_Sex==1?"男":"女") << "  "
				 << "年龄：" << abs->personArray[i].m_Age << "  "
				 << "电话：" << abs->personArray[i].m_Phone << "  "
				 << "地址：" << abs->personArray[i].m_Addr << "  "
				 << endl;
		}
	}
	system("pause");
	system("cls");
}
//判断联系人是否存在的函数
int isExist(Addressbooks * abs, string name)//把通讯录和用户输入的姓名传入
{
	for (int i = 0; i < abs->m_Size; i++) 
	{
		//如果存在
		if (abs->personArray[i].m_Name == name) 
		{
			return i;
		}
	}
	//通讯录里面的的数据全部走完，没有找到
	return -1;
}
//删除联系人的函数
void deletePerson(Addressbooks * abs) 
{
	while (true) 
	{
		cout << "请输入要删除的联系人" << endl;
		string name;
		cin >> name;
		//如果存在res！=1；
		//如果不存在res=1；
		int res = isExist(abs, name);
		if (res != -1) //存在的情况，res等于isExist的返回值
		{
			for (int i = res; i < abs->m_Size; i++)
			{
				abs->personArray[i] = abs->personArray[i + 1];//数组中的后一个数据覆盖前一个数据
			}
			abs->m_Size--;//删除成功后，通讯录里的人员数-1
			cout << "删除成功~" << endl;
			cout << "此时的通讯录人数为：" << abs->m_Size << endl;
			break;
		}
		else //不存在的情况
		{
			cout << "查无此人,请重新输入" << endl;
		}
	}
	system("pause");
	system("cls");
}
//查找联系人的函数
void findPerson(Addressbooks * abs) 
{
	cout << "请输入您要查找联系人的姓名：" << endl;
	string name;
	cin >> name;

	int res = isExist(abs,name);
	if (res != -1) 
	{
		cout << "姓名：" << abs->personArray[res].m_Name << "\t";
		cout << "性别：" << (abs->personArray[res].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[res].m_Age << "\t";
		cout << "电话：" << abs->personArray[res].m_Phone << "\t";
		cout << "地址：" << abs->personArray[res].m_Addr << endl;
	}
	else 
	{
		cout<<"查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//修改联系人的函数
void modifyPerson(Addressbooks * abs)
{
	cout<<"请输入要修改联系人的姓名：" << endl;
	string name;
	cin >> name;
	int res = isExist(abs, name);
	if (res != -1) 
	{
		cout << "请输入修改的姓名："<<" ";
			cin >> abs->personArray[res].m_Name;
		cout << "请输入修改的性别,1---男，2---女: " <<" ";
			int sex = 0;
			while (true) 
			{	
				cin >> sex;
				if (sex == 1 || sex == 2)
				{
					abs->personArray[res].m_Sex = sex;
					break;
				}
				else 
				{
					cout <<"输入有误，请重新输入~" << endl;
				}
			}
		cout << "请输入修改的年龄：" <<" ";
			cin >> abs->personArray[res].m_Age;
		cout << "请输入修改的电话：" <<" ";
			cin >> abs->personArray[res].m_Phone;
		cout << "请输入修改的地址：" <<" ";
			cin >> abs->personArray[res].m_Addr;
		cout<<"修改成功~" << endl;
	}
	else 
	{
		cout<<"查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//清空联系人的函数
void clearPerson(Addressbooks* abs) 
{
	cout<< "此操作会清空所有数据，您确定吗？" << endl;
	cout<< "请输入：确定 或者 取消 " << endl;
	string num;
	cin >> num;
	while (true) 
	{
		if (num == "确定")
		{
			abs->m_Size = 0;
			cout << "通讯录已清空，感谢使用~" << endl;
			break;
		}
		else 
		{
			cout<<"您的输入有误，请重新输入！" << endl;
		}
	}
	system("pause");
	system("cls");
}

//主函数入口
int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化变量值
	abs.m_Size = 0;//最开始联系人的数量为0


	int select = 0;//创建一个用户选择变量
	while (true)
	{
		//调用showMenu函数
		showMenu();
		while (true) 
		{
			cout << "请输入您需要操作对应的数字：";
			cin >> select;
			if (select >= 0 && select <= 6)
			{
				switch (select)
				{
				case 1://添加联系人
					addPerson(&abs);
					break;
				case 2://显示联系人
					showPerson(&abs);
					break;
				case 3://删除联系人
					deletePerson(&abs);
					//阶段性验证代码
				   /*{
					   cout << "请输入需要删除的联系人：" << endl;
					   string name;
					   cin >> name;
					   if(isExist(&abs,name)==-1)
					   {
						   cout << "查无此人" << endl;
					   }
					   else
					   {
						   cout << "找到此人" << endl;
					   }
				   }*/
					break;
				case 4://查找联系人
					findPerson(&abs);
					break;
				case 5://修改联系人
					modifyPerson(&abs);
					break;
				case 6://清空联系人
					clearPerson(&abs);
					break;
				case 0://退出通讯录
					cout << "欢迎下次使用~" << endl;
					system("pause");//按任意键退出
					return 0;		//退出系统
					break;
				default:
					break;
				}
				break;
			}
			else 
			{
				cout<<"请重新输入" << endl;
			}
		}
	}

	system("pause");
	return 0;
};