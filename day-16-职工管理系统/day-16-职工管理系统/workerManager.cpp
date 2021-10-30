#include"workerManager.h"
//构造函数空实现
WorkerManager::WorkerManager()
{
	//1.第一次使用，文件未创建
	ifstream ifs;
	ifs.open(FILENAME,ios::in);//读文件
	if(!ifs.is_open())
	{
		//下面这一行是测试代码
		//测试代码
		//cout << "文件不存在！" << endl;
		
		//初始化人数为0
		this->m_Empnum = 0;
		//初始化数组指针指向NULL
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		//关闭文件
		ifs.close();
		//文件不存在时，直接返回不进行其他操作
		return;
	}
	//2.文件存在，数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof()) 
	{
		//测试代码
		cout << "文件为空！" << endl;
		//初始化人数为0
		this->m_Empnum = 0;
		//初始化数组指针指向NULL
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		//关闭文件
		ifs.close();
		//文件不存在时，直接返回不进行其他操作
		return;
	}
	//3.文件存在且保存数据
	int num = get_EmpNum();//定义一个变量用来接收get_EmpNum函数的返回值
	//测试代码
	//cout << "职工数为：" << num << endl;
	this->m_Empnum = num;

	//开辟空间
	this->m_EmpArray = new Worker * [this->m_Empnum];
	//存到数组中
	this->init_Emp();

	//测试代码
	/*for (int i = 0; i <this->m_Empnum;i++) 
	{
		cout << m_EmpArray[i]->m_Id << endl;
		cout << m_EmpArray[i]->m_Name << endl;
		cout << m_EmpArray[i]->m_DeptId << endl;
	}*/
}

//展示菜单函数实现
void WorkerManager::Show_Menu()
{
	cout << "****************************" << endl;
	cout << "*****欢迎使用职工管理系统~**" << endl;
	cout << "********0.退出管理程序******" << endl;
	cout << "********1.增加职工信息******" << endl;
	cout << "********2.显示职工信息******" << endl;
	cout << "********3.删除离职职工******" << endl;
	cout << "********4.修改职工信息******" << endl;
	cout << "********5.查找职工信息******" << endl;
	cout << "********6.按照编号排序******" << endl;
	cout << "********7.清空所有文档******" << endl;
	cout << "****************************" << endl;
	cout << endl;
}
//退出系统函数实现
void WorkerManager::Exit_system() 
{
	cout << "欢迎下次使用~" << endl;
	system("pause");
	exit(0);//退出函数
}
//添加员工函数实现
void WorkerManager::Add_Emp() 
{
	cout << "请输入添加职工的个数：" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0) 
	{
		//添加操作
		
		//计算数组中的人数
		//理解：新空间的人数=原来的人数+新添加的人数
		int newSize = this->m_Empnum + addNum;
		//开辟新空间
		Worker** newSpace = new Worker * [newSize];
		//Worker* (*newSpace) = new Worker * [newSize];
		//如果原来的数组中有数据，需要拷贝到新的空间中
		if (this->m_EmpArray != NULL) 
		{
			for (int i = 0; i < this->m_Empnum; i++) 
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		//开始添加新的数据
		for (int i = 0; i < addNum; i++) 
		{
			int id;//个人编号
			string name;//姓名
			int depSelect;//部门选择
			cout << "请输入第" << i+1 << "号的新员工编号：" << endl;
			cin >> id;
			cout << "请输入第" << i+1 << "号的新员工姓名：" << endl;
			cin >> name;
			cout << "请选择该职工的岗位："<<endl;
			cout << "1-普通职工，2-经理，3-老板" << endl;
			cin >> depSelect;

			Worker* worker = NULL;
			switch (depSelect)
			{
			case 1:
				worker = new Employee(id, name, 1); break;
			case 2:
				worker = new Manage(id, name,2); break;
			case 3:
				worker = new Boss(id, name, 3); break;
			default:
				break;
			}
			//将创建的职工数组指针，保存到数组中
			newSpace[this->m_Empnum + i] = worker;
		}
		//释放原有空间
		//解释：释放数组时需要加[],语法规定
		delete[] this->m_EmpArray;
		//更改新的指针指向
		this->m_EmpArray = newSpace;
		//更新员工人数
		this->m_Empnum = newSize;
		//更新文件标志不为空
		this->m_FileIsEmpty = false;
		//提示添加成功
		cout << "成功添加~" << addNum << "个员工" << endl;

		this->save();//调用保存文件的函数
	}
	else 
	{
		cout << "您输入的值有误！" << endl;
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}
//保存文件函数实现
void WorkerManager::save() 
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out);
	//将每个人的数据写入到文件
	for (int i = 0; i < this->m_Empnum; i++) 
	{
		ofs << this->m_EmpArray[i]->m_Id << "  "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	//关闭文件
	ofs.close();
}
//统计文件中人数的函数实现
int WorkerManager::get_EmpNum() 
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);//打开文件，读文件

	int id;//读到的职工id存放在这个变量中
	string name;//读到的职工name存放在这个变量中
	int did;//读到的职工所在部门存放在这个变量中

	int num = 0;//表示读取到的人数

	while (ifs >> id && ifs >> name && ifs >> did) 
	{
		//读取完一行，进行++
		num++;
	}
	return num;
}
//初始化员工人数的函数实现
void WorkerManager::init_Emp() 
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	int id;//读到的职工id存放在这个变量中
	string name;//读到的职工name存放在这个变量中
	int did;//读到的职工所在部门存放在这个变量中

	int index = 0;//表示数组中的索引

	while (ifs >> id && ifs >> name && ifs >> did) 
	{
		Worker* worker = NULL;//Worker类的指针

		if (did == 1) //普通职工
		{
			worker = new Employee(id, name, did);
		}
		else if (did == 2)//经理
		{
			worker = new Manage(id,name,did);
		}
		else//老板
		{
			worker = new Boss(id,name,did);
		}
		this->m_EmpArray[index] = worker;
		index++;//索引++
	}
	//关闭文件
	ifs.close();
}
//显示职工函数实现
void WorkerManager::Show_Emp() 
{
	if (this->m_FileIsEmpty) 
	{
		cout << "文件为空或文件不存在~" << endl;
	}
	else 
	{
		for (int i = 0; i < m_Empnum; i++) 
		{
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}
//删除职工函数实现
void WorkerManager::Del_Emp() 
{
	if (this->m_FileIsEmpty) 
	{
		cout << "文件为空或文件不存在~" << endl;
	}
	else
	{
		//按照员工编号进行删除
		cout << "请输入要删除的员工编号：" << endl;
		int id = 0;
		cin >> id;
		
		int index = this->IsExist(id);//调用职工是否存在函数

		if (index != -1) //表示职工存在
		{
			//数据前移
			for (int i = index; i < this->m_Empnum - 1; i++) 
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_Empnum--;//更新数组中的个数
			//同步到文件中
			this->save();
			cout << "删除成功~" << endl;
		}
		else
		{
			cout << "职工不存在~" << endl;
		}
		system("pause");
		system("cls");
	}

}
//职工是否存在函数,存在-返回数组中的位置，不存在-返回-1
int WorkerManager::IsExist(int id) 
{
	int index = -1;
	for (int i = 0; i < this->m_Empnum; i++) 
	{
		if (this->m_EmpArray[i]->m_Id == id) 
		{
			//找到职工
			index = i;
		}
	}
	return index;
}
//修改职工函数实现
void WorkerManager::Mod_Emp() 
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空或文件不存在~" << endl;
	}
	else
	{
		cout << "请输入需要修改的职工编号：" << endl;
		int id;
		cin >> id;
		int res = this->IsExist(id);
		if (res!=-1) 
		{
			//找到职工
			//先将之前的员工信息释放干净
			delete this->m_EmpArray[res];
			//开始添加新的员工信息
			int newId=0;
			string newName="";
			int dSelect=0;

			cout << "查找到第" << id << "的职工,请输入新的职工编号" << endl;
			cin >> newId;
			cout << "请输入新的姓名：" << endl;
			cin >> newName;
			cout << "请输入新的部门：" << endl;
			cout << "1-普通职工，2-经理，3-老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;

			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect); break;
			case 2:
				worker = new Manage(newId, newName, dSelect); break;
			case 3:
				worker = new Boss(newId, newName, dSelect); break;
			default:
				break;
			}
			//更新数据
			this->m_EmpArray[res] = worker;
			cout << "修改成功" << endl;
			//保存到文件中
			this->save();
		}
		else 
		{
			cout << "查无此人~" << endl;
		}
	}
	system("pause");
	system("cls");
}
//查找职工函数实现
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空或文件不存在~" << endl;
	}
	else
	{
		cout << "请输入查找的方式：" << endl;
		cout << "1-按照编号，2-按照姓名" << endl;
		int select = 0;
		cin >> select;
		if (select == 1) 
		{
			//按照编号查询	
			int id;
			cout << "请输入您需要查询的编号：" << endl;
			cin >> id;

			int res = this->IsExist(id);
			if (res!=-1) 
			{
				//找到职工
				cout << "成功找到，信息如下" << endl;
				this->m_EmpArray[res]->showInfo();
			}
			else 
			{
				cout << "查无此人~" << endl;
			}
		}
		else if (select == 2) 
		{
			//按照姓名查询
			string name;
			//加入一个是否查到的标志
			bool flag = false;//默认没有找到

			cout << "请输入您需要查询的姓名：" << endl;
			cin >> name;
			for (int i = 0; i < m_Empnum; i++) 
			{
				if (this->m_EmpArray[i]->m_Name == name) 
				{
					cout << "查找成功~" << endl;
					cout << "职工编号：" 
						 << this->m_EmpArray[i]->m_Id << "的员工信息如下：" << endl;
					
					flag = true;

					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false) 
			{
				cout << "查无此人~" << endl;
			}
		}
		else 
		{
			cout << "您的输入有误~" << endl;
		}
	}
	system("pause");
	system("cls");
}
//排序职工函数实现
void WorkerManager::Sort_Emp() 
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空或文件不存在~" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式：" << endl;
		cout << "1-按照职工编号升序，2-按照职工编号降序" << endl;
		int select=0;
		cin >> select;
		//选择排序
		for (int i=0;i<this->m_Empnum;i++) 
		{
			int Min_or_Max = i;//先声明一个变量，可以是最小值也可以是最大值
			for (int j = i + 1; j < this->m_Empnum; j++) 
			{
				if (select == 1) //升序
				{
					if (this->m_EmpArray[Min_or_Max]->m_Id > this->m_EmpArray[j]->m_Id) 
					{
						Min_or_Max = j;
					}
				}
				else //降序
				{
					if (this->m_EmpArray[Min_or_Max]->m_Id < this->m_EmpArray[j]->m_Id) 
					{
						Min_or_Max = j;
					}
				}
			}
			//判断最开始认定的Min_or_Max,是不是真实的最大值或最小值
			if (Min_or_Max != i) 
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[Min_or_Max];
				this->m_EmpArray[Min_or_Max] = temp;
			}
		}
		cout << "排序成功，排序后的结果为：" << endl;
		this->save();//保存到文件
		this->Show_Emp();//展示职工
	}
}
//清空文件函数实现
void WorkerManager::Clean_File() 
{
	cout << "是否确认清空？" << endl;
	cout << "1-确认，2-犹豫" << endl;
	int select = 0;
	cin >> select;
	if (select == 1) 
	{
		//清空文件
		ofstream ofs;
		ofs.open(FILENAME,ios::trunc);//删除文件后重新创建
		ofs.close();
		
		if (this->m_EmpArray != NULL) 
		{
			//删除堆区数组中的对象
			for (int i = 0; i < m_Empnum; i++) 
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//删除读取的数组指针
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;

			this->m_Empnum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功~" << endl;
	}
	system("pause");
	system("cls");
}


//析构函数空实现
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL) 
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
