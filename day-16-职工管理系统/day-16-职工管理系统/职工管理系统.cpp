#include<iostream>
using namespace std;
#include"workerManager.h"
#include"worker.h"
#include"employee.h"
#include"manage.h"
#include"boss.h"
int main()
{
	WorkerManager wm;//ʵ����һ������

	////���Դ��루��ͨԱ����ʵ�֣�
	//Worker* worker = new Employee(1, "zhang", 1);
	//worker->showInfo();
	//delete worker;
	// 
	////���Դ��루�������ʵ�֣�
	//Worker* worker = new Manage(2, "duan", 2);
	//worker->showInfo();
	//delete worker;
	//
	////���Դ��루�ϰ����ʵ�֣�
	//Worker* worker = new Boss(3,"hong",3);
	//worker->showInfo();

	int choice = 0;//�û�ѡ�����

	while (true) 
	{
		wm.Show_Menu();//�������չʾ�˵��ĳ�Ա����
		cout << "��������Ӧ�ı�ţ�" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.Exit_system(); break;
		case 1://����ְ��
			wm.Add_Emp(); break;
		case 2://��ʾְ��
			wm.Show_Emp(); break;
		case 3://ɾ��ְ��
			//����
			/*{
				int ra = wm.IsExist(5);
				if (ra != -1)
				{
					cout << "����~" << endl;
				}
				else
				{
					cout << "������~~" << endl;
				}
				break;
			}*/
			wm.Del_Emp();
			break;
		case 4://�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5://����ְ��
			wm.Find_Emp();
			 break;
		case 6://ְ������
			wm.Sort_Emp();
			break;
		case 7://��������ĵ�
			wm.Clean_File();
			break;
		default:
			system("cls");//������������ʱ��������������
			break;
		}
	}

	system("pause");
	return 0;
};