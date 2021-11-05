#include"speechManager.h"
int main() 
{
	//随机数种子
	srand((unsigned)time(NULL));
	//实例化一个对象
	SpeechManager Sm;

	//测试12名选手的创建代码
	/*for (map<int, Speaker>::iterator it = Sm.m_Speaker.begin(); it != Sm.m_Speaker.end(); it++)
	{
		cout << "选手编号：" << it->first << " ";
		cout << "选手姓名：" << it->second.m_name << " ";
		cout << "选手得分：" << it->second.m_score[0] << endl;
	}*/

	int choice = 0;
	while(true) 
	{
		//通过对象来调用成员函数
		Sm.show_Menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://开始演讲
			Sm.startSpeech();
			break;
		case 2://查看往届
			Sm.showRecord();
			break;
		case 3://清空比赛
			Sm.clearRecord();
			break;
		case 0://退出系统
			Sm.exitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
};