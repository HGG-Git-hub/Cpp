#include"speechManager.h"
//构造函数的实现
SpeechManager::SpeechManager() 
{
	//调用初始化属性的函数
	this->initSpeech();
	//调用创建12名选手的函数
	this->createSpeaker();
	//加载往届记录
	this->loadRecord();
}

//显示菜单函数的实现
void SpeechManager::show_Menu()
{
	cout << " **************************** " << endl;
	cout << " ******欢迎参加演讲比赛****** " << endl; 
	cout << " ******1.开始演讲比赛******** " << endl;
	cout << " ******2.查看往届记录******** " << endl;
	cout << " ******3.清空比赛记录******** " << endl;
	cout << " ******0.退出比赛程序******** " << endl;
	cout << " **************************** " << endl;
}
//退出菜单函数的实现
void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用~" << endl;
	system("pause");
	exit(0);
}

//初始化容器和属性的函数实现
void SpeechManager::initSpeech()
{
	//容器都置空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//比赛轮数从第一轮开始
	this->index = 1;
	//将记录的容器置空
	this->m_Record.clear();
}
//创建12名选手的函数实现
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";

	//构建12名选手的名字
	for (int i = 0; i < nameSeed.size(); i++) 
	{
		string name = "选手";
		name += nameSeed[i];

		Speaker sp;

		sp.m_name = name;
		//两轮得分置为0
		for (int j = 0; j < 2; j++) 
		{
			sp.m_score[j] = 0;
		}

		//创建选手编号，并放入到容器中
		this->v1.push_back(i+1001);
		//选手编号和对应的选手放入map容器中
		this->m_Speaker.insert(make_pair((i + 1001), sp));
	}
}

//开始比赛的函数实现
void SpeechManager::startSpeech()
{
	//第一轮比赛
	//1.抽签
	this->speechDraw();
	//2.比赛
	this->speechContest();
	//3.显示晋级结果
	this->showScore();
	//第二轮比赛
	//0.比赛轮数+1
	this->index++;
	//1.抽签
	this->speechDraw();
	//2.比赛
	this->speechContest();
	//3.显示最终结果
	this->showScore();
	//4.保存分数到文件
	this->saveRecord();

	//重置比赛，获取记录
	//调用初始化属性的函数
	this->initSpeech();
	//调用创建12名选手的函数
	this->createSpeaker();
	//加载往届记录
	this->loadRecord();

	cout << "本次比赛已结束!" << endl;
	system("pause");
	system("cls");
}
//抽签函数的实现
void SpeechManager::speechDraw()
{
	cout << "第<<" << this->index << ">>轮的选手正在抽签~" << endl;
	cout << "----------------------------------------" << endl;
	cout << "抽签后的顺序如下：" << endl;
	
	//判断一下是第几轮的比赛
	if (this->index == 1)
	{
		//第一轮比赛
		//随机树种子
		srand((unsigned int)time(NULL));
		//随机打乱
		random_shuffle(v1.begin(),v1.end());
		//输出随机后的结果
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) 
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else 
	{
		//第二轮比赛
		//随机树种子
		srand((unsigned int)time(NULL));
		//随机打乱
		random_shuffle(v2.begin(), v2.end());
		//输出随即后的结果
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "----------------------------------------" << endl;
	system("pause");
	cout << endl;
}
//比赛函数的声明
void SpeechManager::speechContest()
{
	cout << "第<<" << this->index << ">>轮的比赛正式开始~";

	//准备一个临时容器，用来存放小组成绩
	//double表示分数，int表示编号，greater表示降序排序
	multimap<double, int, greater<double>> groupScore;

	int num01 = 0;//用来统计小组人员个数

	vector<int>v_Src;//比赛选手的容器
	if (index == 1)  //如果是第一轮
	{
		v_Src = v1;  //比赛选手的容器是第一轮的选手编号容器
	}
	else 
	{
		v_Src = v2;	 //比赛选手的容器是第二轮的选手编号容器
	}
	//遍历所有参赛选手的编号
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++) 
	{
		num01++;//用于统计小组人数

		//评委对选手打分
		deque<double>d; //用于存储评委的分数
		for (int i = 0; i < 10; i++)
		{
			//随机出的数除以10
			double score = (rand() % 401 + 600) / 10.f; //600~1000
			//cout << score << " "; //测试
			d.push_back(score);
		}
		cout << endl;
		//分数降序排序
		sort(d.begin(),d.end(),greater<double>());
		d.pop_front(); //去除最高分
		d.pop_back();  //去除最低分
		//求取总分
		double num = accumulate(d.begin(),d.end(),0.0f);//0.0f表示起始累加值
		//求取均分
		double avg = num / (double)d.size();//int强制转换成double
		//打印输出均分
		/*测试代码
		cout << "编号：" << *it << " ";
		cout << "姓名：" << m_Speaker[*it].m_name << " ";
		cout << "均分：" << avg << endl;
		*/
		
		//将均分放入到容器
		/*容器中的第*it号的人的第index-1轮的得分=均分*/
		this->m_Speaker[*it].m_score[index-1] = avg;

		//将打分数据存放到临时容器中
		//make_pair(均分，选手编号)
		groupScore.insert(make_pair(avg,*it));
		//每6人取出前三名
		if (num01 % 6 == 0) 
		{
			cout << "第" << num01 / 6 << "组的成绩如下:" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++) 
			{
				cout << "编号：" << it->second<<" "
					 << "姓名：" << this->m_Speaker[it->second].m_name<<" "
					 << "均分：" << this->m_Speaker[it->second].m_score[index-1] << endl;
			}
			//取走前三名
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end()&&count<3; it++,count++)
			{
				if (this->index == 1) 
				{
					v2.push_back((*it).second);
				}
				else 
				{
					vVictory.push_back((*it).second);
				}
			}
			groupScore.clear();//清空临时容器
		}
	}
	cout << "----------第" << this->index << "轮的比赛完毕!----------" << endl;
	system("pause");
}
//晋级分数的函数实现
void SpeechManager::showScore()
{
	cout << "第" << this->index << "轮晋级的选手信息如下：" << endl;
	vector<int>v;
	if (this->index == 1) //表示第一轮比试完成
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
	{
		cout << "编号：" << *it <<" "
			 << "姓名：" << this->m_Speaker[*it].m_name <<" "
			 << "得分：" << this->m_Speaker[*it].m_score[index-1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->show_Menu();
}
//比赛信息保存的函数实现
void SpeechManager::saveRecord()
{
	ofstream ofs;
	//ios::app表示追加方式
	//ios::out表示写文件
	ofs.open("speech.csv",ios::out|ios::app);
	//将比赛获胜者的信息写入到文件中
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++) 
	{
		ofs << *it << "," << this->m_Speaker[*it].m_score[1] << ",";
	}
	ofs << endl;

	ofs.close();
	cout << "保存成功~" << endl;
	//文件不为空，修改文件标志
	this->fileIsEmpty = false;
}
//读取记录信息的函数实现
void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv",ios::in);
	
	//判断文件是否打开成功
	//文件不存在的情况
	if (!ifs.is_open())//文件打开不成功
	{
		fileIsEmpty = true;
		//cout << "文件不存在，打开失败~" << endl;
		ifs.close();
		return;
	}
	//文件被清空过的情况
	char ch;
	ifs >> ch; //读走一个单个字符
	if (ifs.eof()) //如果是为文件尾
	{
		//cout << "文件为空~" << endl;
		fileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件不为空
	this->fileIsEmpty = false;
	ifs.putback(ch);//将上面读走的单个字符读取回来

	string data;
	int index = 0;//第几届
	//将读取到的数据存放到data中
	while (ifs >> data) 
	{
		//该变量表示是否找到逗号，-1表示没找到
		int pos = -1;
		int start = 0;
		
		vector<string>v;//存放读取到的数据
		while (true) 
		{
			//1009,86.4,1012,85.3125,1004,80.6125,
			
			//表示从0开始查找，并返回一个int类型的值
			pos = data.find(',', start);
			if (pos == -1)
			{
				//没找到的情况
				break;
			}
			else
			{
				string temp = data.substr(start, pos - start);
				v.push_back(temp);
			}
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index,v));
		index++;
	}
	ifs.close();
	//测试
	/*
	for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end();it++) 
	{
		cout << it->first << " "
			 << it->second[0] << " "
			 << it->second[1] << endl;
	}
	*/
}
//保存往届记录的函数实现
void SpeechManager::showRecord()
{
	if (this->fileIsEmpty) 
	{
		cout << "无历史信息~" << endl;
	}
	else 
	{	
		for (int i = 0; i < this->m_Record.size(); i++) 
		{
			cout << "第" << i + 1 << "届"
				 << "冠军编号：" << this->m_Record[i][0] << " 得分：" << this->m_Record[i][1] << " "
				 << "亚军编号：" << this->m_Record[i][2] << " 得分：" << this->m_Record[i][3] << " "
				 << "季军编号：" << this->m_Record[i][4] << " 得分：" << this->m_Record[i][5] << endl;
		}
		
		//第二种输出
		//for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)

		//{
		//	//1009,86.4,1012,85.3125,1004,80.6125,

		//	cout << "第" << it->first + 1 << "届" << endl;

		//	cout << "冠军编号为：" << it->second[0] << " "
		//		<< "冠军等分为：" << it->second[1] << " ";

		//	cout << "亚军编号为：" << it->second[2] << " "
		//		<< "亚军等分为：" << it->second[3] << " ";

		//	cout << "季军编号为：" << it->second[4] << " "
		//		<< "季军等分为：" << it->second[5] << endl;
		//}
	}
	system("pause");
	system("cls");
}
//清空记录的函数实现
void SpeechManager::clearRecord() 
{
	cout << "确认清空？" << endl;
	cout << "1.确认，2.清空" << endl;
	int select = 0;
	cin >> select;
	if (select == 1) 
	{
		//打开模式 ios::trunc
		//如果文件存在，删除并重新创建一个文件，此时文件为空
		ofstream ofs("speech.csv", ios::trunc);
		
		//调用初始化属性的函数
		this->initSpeech();
		//调用创建12名选手的函数
		this->createSpeaker();
		//加载往届记录
		this->loadRecord();

		cout << "清除成功！" << endl;
	}
	system("pause");
	system("cls");
}

//析构函数的空实现
SpeechManager::~SpeechManager()
{
	
}