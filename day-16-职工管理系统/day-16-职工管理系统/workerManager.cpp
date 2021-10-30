#include"workerManager.h"
//���캯����ʵ��
WorkerManager::WorkerManager()
{
	//1.��һ��ʹ�ã��ļ�δ����
	ifstream ifs;
	ifs.open(FILENAME,ios::in);//���ļ�
	if(!ifs.is_open())
	{
		//������һ���ǲ��Դ���
		//���Դ���
		//cout << "�ļ������ڣ�" << endl;
		
		//��ʼ������Ϊ0
		this->m_Empnum = 0;
		//��ʼ������ָ��ָ��NULL
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		//�ر��ļ�
		ifs.close();
		//�ļ�������ʱ��ֱ�ӷ��ز�������������
		return;
	}
	//2.�ļ����ڣ�����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof()) 
	{
		//���Դ���
		cout << "�ļ�Ϊ�գ�" << endl;
		//��ʼ������Ϊ0
		this->m_Empnum = 0;
		//��ʼ������ָ��ָ��NULL
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		//�ر��ļ�
		ifs.close();
		//�ļ�������ʱ��ֱ�ӷ��ز�������������
		return;
	}
	//3.�ļ������ұ�������
	int num = get_EmpNum();//����һ��������������get_EmpNum�����ķ���ֵ
	//���Դ���
	//cout << "ְ����Ϊ��" << num << endl;
	this->m_Empnum = num;

	//���ٿռ�
	this->m_EmpArray = new Worker * [this->m_Empnum];
	//�浽������
	this->init_Emp();

	//���Դ���
	/*for (int i = 0; i <this->m_Empnum;i++) 
	{
		cout << m_EmpArray[i]->m_Id << endl;
		cout << m_EmpArray[i]->m_Name << endl;
		cout << m_EmpArray[i]->m_DeptId << endl;
	}*/
}

//չʾ�˵�����ʵ��
void WorkerManager::Show_Menu()
{
	cout << "****************************" << endl;
	cout << "*****��ӭʹ��ְ������ϵͳ~**" << endl;
	cout << "********0.�˳��������******" << endl;
	cout << "********1.����ְ����Ϣ******" << endl;
	cout << "********2.��ʾְ����Ϣ******" << endl;
	cout << "********3.ɾ����ְְ��******" << endl;
	cout << "********4.�޸�ְ����Ϣ******" << endl;
	cout << "********5.����ְ����Ϣ******" << endl;
	cout << "********6.���ձ������******" << endl;
	cout << "********7.��������ĵ�******" << endl;
	cout << "****************************" << endl;
	cout << endl;
}
//�˳�ϵͳ����ʵ��
void WorkerManager::Exit_system() 
{
	cout << "��ӭ�´�ʹ��~" << endl;
	system("pause");
	exit(0);//�˳�����
}
//���Ա������ʵ��
void WorkerManager::Add_Emp() 
{
	cout << "���������ְ���ĸ�����" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0) 
	{
		//��Ӳ���
		
		//���������е�����
		//��⣺�¿ռ������=ԭ��������+����ӵ�����
		int newSize = this->m_Empnum + addNum;
		//�����¿ռ�
		Worker** newSpace = new Worker * [newSize];
		//Worker* (*newSpace) = new Worker * [newSize];
		//���ԭ���������������ݣ���Ҫ�������µĿռ���
		if (this->m_EmpArray != NULL) 
		{
			for (int i = 0; i < this->m_Empnum; i++) 
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		//��ʼ����µ�����
		for (int i = 0; i < addNum; i++) 
		{
			int id;//���˱��
			string name;//����
			int depSelect;//����ѡ��
			cout << "�������" << i+1 << "�ŵ���Ա����ţ�" << endl;
			cin >> id;
			cout << "�������" << i+1 << "�ŵ���Ա��������" << endl;
			cin >> name;
			cout << "��ѡ���ְ���ĸ�λ��"<<endl;
			cout << "1-��ְͨ����2-����3-�ϰ�" << endl;
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
			//��������ְ������ָ�룬���浽������
			newSpace[this->m_Empnum + i] = worker;
		}
		//�ͷ�ԭ�пռ�
		//���ͣ��ͷ�����ʱ��Ҫ��[],�﷨�涨
		delete[] this->m_EmpArray;
		//�����µ�ָ��ָ��
		this->m_EmpArray = newSpace;
		//����Ա������
		this->m_Empnum = newSize;
		//�����ļ���־��Ϊ��
		this->m_FileIsEmpty = false;
		//��ʾ��ӳɹ�
		cout << "�ɹ����~" << addNum << "��Ա��" << endl;

		this->save();//���ñ����ļ��ĺ���
	}
	else 
	{
		cout << "�������ֵ����" << endl;
	}
	system("pause");//�����������
	system("cls");//����
}
//�����ļ�����ʵ��
void WorkerManager::save() 
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out);
	//��ÿ���˵�����д�뵽�ļ�
	for (int i = 0; i < this->m_Empnum; i++) 
	{
		ofs << this->m_EmpArray[i]->m_Id << "  "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	//�ر��ļ�
	ofs.close();
}
//ͳ���ļ��������ĺ���ʵ��
int WorkerManager::get_EmpNum() 
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);//���ļ������ļ�

	int id;//������ְ��id��������������
	string name;//������ְ��name��������������
	int did;//������ְ�����ڲ��Ŵ�������������

	int num = 0;//��ʾ��ȡ��������

	while (ifs >> id && ifs >> name && ifs >> did) 
	{
		//��ȡ��һ�У�����++
		num++;
	}
	return num;
}
//��ʼ��Ա�������ĺ���ʵ��
void WorkerManager::init_Emp() 
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	int id;//������ְ��id��������������
	string name;//������ְ��name��������������
	int did;//������ְ�����ڲ��Ŵ�������������

	int index = 0;//��ʾ�����е�����

	while (ifs >> id && ifs >> name && ifs >> did) 
	{
		Worker* worker = NULL;//Worker���ָ��

		if (did == 1) //��ְͨ��
		{
			worker = new Employee(id, name, did);
		}
		else if (did == 2)//����
		{
			worker = new Manage(id,name,did);
		}
		else//�ϰ�
		{
			worker = new Boss(id,name,did);
		}
		this->m_EmpArray[index] = worker;
		index++;//����++
	}
	//�ر��ļ�
	ifs.close();
}
//��ʾְ������ʵ��
void WorkerManager::Show_Emp() 
{
	if (this->m_FileIsEmpty) 
	{
		cout << "�ļ�Ϊ�ջ��ļ�������~" << endl;
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
//ɾ��ְ������ʵ��
void WorkerManager::Del_Emp() 
{
	if (this->m_FileIsEmpty) 
	{
		cout << "�ļ�Ϊ�ջ��ļ�������~" << endl;
	}
	else
	{
		//����Ա����Ž���ɾ��
		cout << "������Ҫɾ����Ա����ţ�" << endl;
		int id = 0;
		cin >> id;
		
		int index = this->IsExist(id);//����ְ���Ƿ���ں���

		if (index != -1) //��ʾְ������
		{
			//����ǰ��
			for (int i = index; i < this->m_Empnum - 1; i++) 
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_Empnum--;//���������еĸ���
			//ͬ�����ļ���
			this->save();
			cout << "ɾ���ɹ�~" << endl;
		}
		else
		{
			cout << "ְ��������~" << endl;
		}
		system("pause");
		system("cls");
	}

}
//ְ���Ƿ���ں���,����-���������е�λ�ã�������-����-1
int WorkerManager::IsExist(int id) 
{
	int index = -1;
	for (int i = 0; i < this->m_Empnum; i++) 
	{
		if (this->m_EmpArray[i]->m_Id == id) 
		{
			//�ҵ�ְ��
			index = i;
		}
	}
	return index;
}
//�޸�ְ������ʵ��
void WorkerManager::Mod_Emp() 
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ��ļ�������~" << endl;
	}
	else
	{
		cout << "��������Ҫ�޸ĵ�ְ����ţ�" << endl;
		int id;
		cin >> id;
		int res = this->IsExist(id);
		if (res!=-1) 
		{
			//�ҵ�ְ��
			//�Ƚ�֮ǰ��Ա����Ϣ�ͷŸɾ�
			delete this->m_EmpArray[res];
			//��ʼ����µ�Ա����Ϣ
			int newId=0;
			string newName="";
			int dSelect=0;

			cout << "���ҵ���" << id << "��ְ��,�������µ�ְ�����" << endl;
			cin >> newId;
			cout << "�������µ�������" << endl;
			cin >> newName;
			cout << "�������µĲ��ţ�" << endl;
			cout << "1-��ְͨ����2-����3-�ϰ�" << endl;
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
			//��������
			this->m_EmpArray[res] = worker;
			cout << "�޸ĳɹ�" << endl;
			//���浽�ļ���
			this->save();
		}
		else 
		{
			cout << "���޴���~" << endl;
		}
	}
	system("pause");
	system("cls");
}
//����ְ������ʵ��
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ��ļ�������~" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1-���ձ�ţ�2-��������" << endl;
		int select = 0;
		cin >> select;
		if (select == 1) 
		{
			//���ձ�Ų�ѯ	
			int id;
			cout << "����������Ҫ��ѯ�ı�ţ�" << endl;
			cin >> id;

			int res = this->IsExist(id);
			if (res!=-1) 
			{
				//�ҵ�ְ��
				cout << "�ɹ��ҵ�����Ϣ����" << endl;
				this->m_EmpArray[res]->showInfo();
			}
			else 
			{
				cout << "���޴���~" << endl;
			}
		}
		else if (select == 2) 
		{
			//����������ѯ
			string name;
			//����һ���Ƿ�鵽�ı�־
			bool flag = false;//Ĭ��û���ҵ�

			cout << "����������Ҫ��ѯ��������" << endl;
			cin >> name;
			for (int i = 0; i < m_Empnum; i++) 
			{
				if (this->m_EmpArray[i]->m_Name == name) 
				{
					cout << "���ҳɹ�~" << endl;
					cout << "ְ����ţ�" 
						 << this->m_EmpArray[i]->m_Id << "��Ա����Ϣ���£�" << endl;
					
					flag = true;

					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false) 
			{
				cout << "���޴���~" << endl;
			}
		}
		else 
		{
			cout << "������������~" << endl;
		}
	}
	system("pause");
	system("cls");
}
//����ְ������ʵ��
void WorkerManager::Sort_Emp() 
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ��ļ�������~" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1-����ְ���������2-����ְ����Ž���" << endl;
		int select=0;
		cin >> select;
		//ѡ������
		for (int i=0;i<this->m_Empnum;i++) 
		{
			int Min_or_Max = i;//������һ����������������СֵҲ���������ֵ
			for (int j = i + 1; j < this->m_Empnum; j++) 
			{
				if (select == 1) //����
				{
					if (this->m_EmpArray[Min_or_Max]->m_Id > this->m_EmpArray[j]->m_Id) 
					{
						Min_or_Max = j;
					}
				}
				else //����
				{
					if (this->m_EmpArray[Min_or_Max]->m_Id < this->m_EmpArray[j]->m_Id) 
					{
						Min_or_Max = j;
					}
				}
			}
			//�ж��ʼ�϶���Min_or_Max,�ǲ�����ʵ�����ֵ����Сֵ
			if (Min_or_Max != i) 
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[Min_or_Max];
				this->m_EmpArray[Min_or_Max] = temp;
			}
		}
		cout << "����ɹ��������Ľ��Ϊ��" << endl;
		this->save();//���浽�ļ�
		this->Show_Emp();//չʾְ��
	}
}
//����ļ�����ʵ��
void WorkerManager::Clean_File() 
{
	cout << "�Ƿ�ȷ����գ�" << endl;
	cout << "1-ȷ�ϣ�2-��ԥ" << endl;
	int select = 0;
	cin >> select;
	if (select == 1) 
	{
		//����ļ�
		ofstream ofs;
		ofs.open(FILENAME,ios::trunc);//ɾ���ļ������´���
		ofs.close();
		
		if (this->m_EmpArray != NULL) 
		{
			//ɾ�����������еĶ���
			for (int i = 0; i < m_Empnum; i++) 
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//ɾ����ȡ������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;

			this->m_Empnum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ�~" << endl;
	}
	system("pause");
	system("cls");
}


//����������ʵ��
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL) 
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
