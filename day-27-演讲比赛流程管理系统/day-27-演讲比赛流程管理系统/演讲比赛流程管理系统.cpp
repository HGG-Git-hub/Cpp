#include"speechManager.h"
int main() 
{
	//ʵ����һ������
	SpeechManager Sm;

	//����12��ѡ�ֵĴ�������
	/*for (map<int, Speaker>::iterator it = Sm.m_Speaker.begin(); it != Sm.m_Speaker.end(); it++)
	{
		cout << "ѡ�ֱ�ţ�" << it->first << " ";
		cout << "ѡ��������" << it->second.m_name << " ";
		cout << "ѡ�ֵ÷֣�" << it->second.m_score[0] << endl;
	}*/


	int choice = 0;
	while(true) 
	{
		//ͨ�����������ó�Ա����
		Sm.show_Menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://��ʼ�ݽ�
			Sm.startSpeech();
			break;
		case 2://�鿴����
			//Sm.loadRecord();
			break;
		case 3://��ձ���
			break;
		case 0://�˳�ϵͳ
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