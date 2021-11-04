#include"speechManager.h"
//���캯����ʵ��
SpeechManager::SpeechManager() 
{
	//���ó�ʼ�����Եĺ���
	this->initSpeech();
	//���ô���12��ѡ�ֵĺ���
	this->createSpeaker();
	//���������¼
	this->loadRecord();
}

//��ʾ�˵�������ʵ��
void SpeechManager::show_Menu()
{
	cout << " **************************** " << endl;
	cout << " ******��ӭ�μ��ݽ�����****** " << endl; 
	cout << " ******1.��ʼ�ݽ�����******** " << endl;
	cout << " ******2.�鿴�����¼******** " << endl;
	cout << " ******3.��ձ�����¼******** " << endl;
	cout << " ******0.�˳���������******** " << endl;
	cout << " **************************** " << endl;
}
//�˳��˵�������ʵ��
void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��~" << endl;
	system("pause");
	exit(0);
}

//��ʼ�����������Եĺ���ʵ��
void SpeechManager::initSpeech()
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//���������ӵ�һ�ֿ�ʼ
	this->index = 1;
}
//����12��ѡ�ֵĺ���ʵ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";

	//����12��ѡ�ֵ�����
	for (int i = 0; i < nameSeed.size(); i++) 
	{
		string name = "ѡ��";
		name += nameSeed[i];

		Speaker sp;

		sp.m_name = name;
		//���ֵ÷���Ϊ0
		for (int j = 0; j < 2; j++) 
		{
			sp.m_score[j] = 0;
		}

		//����ѡ�ֱ�ţ������뵽������
		this->v1.push_back(i+1001);
		//ѡ�ֱ�źͶ�Ӧ��ѡ�ַ���map������
		this->m_Speaker.insert(make_pair((i + 1001), sp));
	}
}

//��ʼ�����ĺ���ʵ��
void SpeechManager::startSpeech()
{
	//��һ�ֱ���
	//1.��ǩ
	this->speechDraw();
	//2.����
	this->speechContest();
	//3.��ʾ�������
	this->showScore();
	//�ڶ��ֱ���
	//0.��������+1
	this->index++;
	//1.��ǩ
	this->speechDraw();
	//2.����
	this->speechContest();
	//3.��ʾ���ս��
	this->showScore();
	//4.����������ļ�
	this->saveRecord();

	cout << "���α����ѽ���!" << endl;
	system("pause");
	system("cls");
}
//��ǩ������ʵ��
void SpeechManager::speechDraw()
{
	cout << "��<<" << this->index << ">>�ֵ�ѡ�����ڳ�ǩ~" << endl;
	cout << "----------------------------------------" << endl;
	cout << "��ǩ���˳�����£�" << endl;
	
	//�ж�һ���ǵڼ��ֵı���
	if (this->index == 1)
	{
		//��һ�ֱ���
		//���������
		srand((unsigned int)time(NULL));
		//�������
		random_shuffle(v1.begin(),v1.end());
		//��������Ľ��
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) 
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else 
	{
		//�ڶ��ֱ���
		//���������
		srand((unsigned int)time(NULL));
		//�������
		random_shuffle(v2.begin(), v2.end());
		//����漴��Ľ��
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
//��������������
void SpeechManager::speechContest()
{
	cout << "��<<" << this->index << ">>�ֵı�����ʽ��ʼ~" << endl;

	//׼��һ����ʱ�������������С��ɼ�
	//double��ʾ������int��ʾ��ţ�greater��ʾ��������
	multimap<double, int, greater<double>> groupScore;

	int num01 = 0;//����ͳ��С����Ա����

	vector<int>v_Src;//����ѡ�ֵ�����
	if (index == 1)  //����ǵ�һ��
	{
		v_Src = v1;  //����ѡ�ֵ������ǵ�һ�ֵ�ѡ�ֱ������
	}
	else 
	{
		v_Src = v2;	 //����ѡ�ֵ������ǵڶ��ֵ�ѡ�ֱ������
	}
	//�������в���ѡ�ֵı��
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++) 
	{
		num01++;//����ͳ��С������

		//��ί��ѡ�ִ��
		deque<double>d; //���ڴ洢��ί�ķ���
		for (int i = 0; i < 10; i++)
		{
			//�������������10
			double score = (rand() % 401 + 600) / 10.f; //600~1000
			//cout << score << " "; //����
			d.push_back(score);
		}
		cout << endl;
		//������������
		sort(d.begin(),d.end(),greater<int>());
		d.pop_front(); //ȥ����߷�
		d.pop_back();  //ȥ����ͷ�
		//��ȡ�ܷ�
		double num = accumulate(d.begin(),d.end(),0.0f);//0.0f��ʾ��ʼ�ۼ�ֵ
		//��ȡ����
		double avg = num / (double)d.size();//intǿ��ת����double
		//��ӡ�������
		/*���Դ���
		cout << "��ţ�" << *it << " ";
		cout << "������" << m_Speaker[*it].m_name << " ";
		cout << "���֣�" << avg << endl;
		*/
		
		//�����ַ��뵽����
		/*�����еĵ�*it�ŵ��˵ĵ�index-1�ֵĵ÷�=����*/
		this->m_Speaker[*it].m_score[index-1] = avg;

		//��������ݴ�ŵ���ʱ������
		//make_pair(���֣�ѡ�ֱ��)
		groupScore.insert(make_pair(avg,*it));
		//ÿ6��ȡ��ǰ����
		if (num01 % 6 == 0) 
		{
			cout << "��" << num01 / 6 << "��ĳɼ�����:" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++) 
			{
				cout << "��ţ�" << it->second<<" "
					 << "������" << this->m_Speaker[it->second].m_name<<" "
					 << "���֣�" << this->m_Speaker[it->second].m_score[index-1] << endl;
			}
			//ȡ��ǰ����
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
			groupScore.clear();//�����ʱ����
		}
	}
	cout << "----------��" << this->index << "�ֵı������!----------" << endl;
	system("pause");
}
//���������ĺ���ʵ��
void SpeechManager::showScore()
{
	cout << "��" << this->index << "�ֽ�����ѡ����Ϣ���£�" << endl;
	vector<int>v;
	if (this->index == 1) //��ʾ��һ�ֱ������
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) 
	{
		cout << "��ţ�" << *it <<" "
			 << "������" << this->m_Speaker[*it].m_name <<" "
			 << "�÷֣�" << this->m_Speaker[*it].m_score[index-1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->show_Menu();
}
//������Ϣ����ĺ���ʵ��
void SpeechManager::saveRecord()
{
	ofstream ofs;
	//ios::app��ʾ׷�ӷ�ʽ
	//ios::out��ʾд�ļ�
	ofs.open("speech.csv",ios::out|ios::app);
	//��������ʤ�ߵ���Ϣд�뵽�ļ���
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++) 
	{
		ofs << *it << "," << this->m_Speaker[*it].m_score[1] << ",";
	}
	cout << endl;

	ofs.close();
	cout << "����ɹ�~" << endl;
}
//��ȡ��¼��Ϣ�ĺ���ʵ��
void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv",ios::in);
	
	//�ж��ļ��Ƿ�򿪳ɹ�
	//�ļ������ڵ����
	if (!ifs.is_open())//�ļ��򿪲��ɹ�
	{
		fileIsEmpty = true;
		cout << "�ļ������ڣ���ʧ��~" << endl;
		ifs.close();
		return;
	}
	//�ļ�����չ������
	char ch;
	ifs >> ch; //����һ�������ַ�
	if (ifs.eof()) //�����Ϊ�ļ�β
	{
		cout << "�ļ�Ϊ��~" << endl;
		fileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ���Ϊ��
	this->fileIsEmpty = false;
	ifs.putback(ch);//��������ߵĵ����ַ���ȡ����

	string data;
	//����ȡ�������ݴ�ŵ�data��
	while (ifs >> data) 
	{
		cout << data << endl;
	}
	ifs.close();
}

//���������Ŀ�ʵ��
SpeechManager::~SpeechManager()
{
	
}