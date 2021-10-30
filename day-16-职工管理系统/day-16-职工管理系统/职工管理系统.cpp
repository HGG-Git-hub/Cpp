#include<iostream>
using namespace std;
#include"workerManager.h"
#include"worker.h"
#include"employee.h"
#include"manage.h"
#include"boss.h"
int main()
{
	WorkerManager wm;//实例化一个对象

	////测试代码（普通员工类实现）
	//Worker* worker = new Employee(1, "zhang", 1);
	//worker->showInfo();
	//delete worker;
	// 
	////测试代码（经理类的实现）
	//Worker* worker = new Manage(2, "duan", 2);
	//worker->showInfo();
	//delete worker;
	//
	////测试代码（老板类的实现）
	//Worker* worker = new Boss(3,"hong",3);
	//worker->showInfo();

	int choice = 0;//用户选择变量

	while (true) 
	{
		wm.Show_Menu();//对象调用展示菜单的成员函数
		cout << "请输入相应的编号：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出系统
			wm.Exit_system(); break;
		case 1://增加职工
			wm.Add_Emp(); break;
		case 2://显示职工
			wm.Show_Emp(); break;
		case 3://删除职工
			//测试
			/*{
				int ra = wm.IsExist(5);
				if (ra != -1)
				{
					cout << "存在~" << endl;
				}
				else
				{
					cout << "不存在~~" << endl;
				}
				break;
			}*/
			wm.Del_Emp();
			break;
		case 4://修改职工
			wm.Mod_Emp();
			break;
		case 5://查找职工
			wm.Find_Emp();
			 break;
		case 6://职工排序
			wm.Sort_Emp();
			break;
		case 7://清空所有文档
			wm.Clean_File();
			break;
		default:
			system("cls");//输入其他数字时，进行清屏操作
			break;
		}
	}

	system("pause");
	return 0;
};