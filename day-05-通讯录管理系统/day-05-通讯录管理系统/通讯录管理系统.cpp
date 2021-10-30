#include"global.h"
//������ϵ�˽ṹ��
struct Person
{
	string m_Name;
	int m_Sex;//1-�У�2-Ů
	int m_Age;
	string m_Phone;
	string m_Addr;//סַ
};
//����ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX];//��ϵ������
	int m_Size=0;  //��ǰ��ŵ���������
};

//��ʾ�˵��ĺ���
void showMenu()//��ʾ�˵�
{
	cout << "*************************" << endl;
	cout << "***** 1�������ϵ�� *****" << endl;
	cout << "***** 2����ʾ��ϵ�� *****" << endl;
	cout << "***** 3��ɾ����ϵ�� *****" << endl;
	cout << "***** 4��������ϵ�� *****" << endl;
	cout << "***** 5���޸���ϵ�� *****" << endl;
	cout << "***** 6�������ϵ�� *****" << endl;
	cout << "***** 0���˳�ͨѶ¼ *****" << endl;
	cout << "*************************" << endl;
}
//�����ϵ�˵ĺ���
void addPerson(Addressbooks *abs) 
{
	//���ж�ͨѶ¼�Ƿ���Ա
	if (abs->m_Size == MAX) 
	{
		cout<<"ͨѶ¼����" << endl;
	}
	else 
	{
		//����Ա������������ϵ��
		cout << "����������" << endl;
		string name;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;//ͨѶ¼�е���ϵ�˽ṹ��������
		
		cout << "�������Ա�" << endl;
		cout << "1-�У�2-Ů" << endl;
		while (true) 
		{
			//����������1��2������ִ��
			int sex;//1-�У�2-Ů
			cin >> sex;
			if (sex == 1 || sex == 2) 
			{
				abs->personArray[abs->m_Size].m_Sex = sex;//ͨѶ¼�е���ϵ�˽ṹ�����Ա�
				break;
			}
			cout<<"������1��2��������Ч" << endl;
		}
		cout << "����������" << endl;
		int age;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		cout << "������绰" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		cout << "�������ַ" << endl;
		string addr;//סַ
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//����ͨѶ¼����
		abs->m_Size++;
		cout<<"�����ϵ�˳ɹ�~" << endl;

		system("pause");
		system("cls");
	}
}
//��ʾ��ϵ�˵ĺ���
void showPerson(Addressbooks * abs)
{
	//�ж������ǰͨѶ¼��û����Ա������ʾΪ�գ���������0����ʾͨѶ¼����Ϣ
	if (abs->m_Size==0) 
	{
		cout <<"��ǰͨѶ¼��¼Ϊ0" << endl;
	}
	else 
	{
		for (int i = 0; i < abs->m_Size; i++) 
		{
			cout << "������" << abs->personArray[i].m_Name <<"  "
				 << "�Ա�" << (abs->personArray[i].m_Sex==1?"��":"Ů") << "  "
				 << "���䣺" << abs->personArray[i].m_Age << "  "
				 << "�绰��" << abs->personArray[i].m_Phone << "  "
				 << "��ַ��" << abs->personArray[i].m_Addr << "  "
				 << endl;
		}
	}
	system("pause");
	system("cls");
}
//�ж���ϵ���Ƿ���ڵĺ���
int isExist(Addressbooks * abs, string name)//��ͨѶ¼���û��������������
{
	for (int i = 0; i < abs->m_Size; i++) 
	{
		//�������
		if (abs->personArray[i].m_Name == name) 
		{
			return i;
		}
	}
	//ͨѶ¼����ĵ�����ȫ�����꣬û���ҵ�
	return -1;
}
//ɾ����ϵ�˵ĺ���
void deletePerson(Addressbooks * abs) 
{
	while (true) 
	{
		cout << "������Ҫɾ������ϵ��" << endl;
		string name;
		cin >> name;
		//�������res��=1��
		//���������res=1��
		int res = isExist(abs, name);
		if (res != -1) //���ڵ������res����isExist�ķ���ֵ
		{
			for (int i = res; i < abs->m_Size; i++)
			{
				abs->personArray[i] = abs->personArray[i + 1];//�����еĺ�һ�����ݸ���ǰһ������
			}
			abs->m_Size--;//ɾ���ɹ���ͨѶ¼�����Ա��-1
			cout << "ɾ���ɹ�~" << endl;
			cout << "��ʱ��ͨѶ¼����Ϊ��" << abs->m_Size << endl;
			break;
		}
		else //�����ڵ����
		{
			cout << "���޴���,����������" << endl;
		}
	}
	system("pause");
	system("cls");
}
//������ϵ�˵ĺ���
void findPerson(Addressbooks * abs) 
{
	cout << "��������Ҫ������ϵ�˵�������" << endl;
	string name;
	cin >> name;

	int res = isExist(abs,name);
	if (res != -1) 
	{
		cout << "������" << abs->personArray[res].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[res].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[res].m_Age << "\t";
		cout << "�绰��" << abs->personArray[res].m_Phone << "\t";
		cout << "��ַ��" << abs->personArray[res].m_Addr << endl;
	}
	else 
	{
		cout<<"���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//�޸���ϵ�˵ĺ���
void modifyPerson(Addressbooks * abs)
{
	cout<<"������Ҫ�޸���ϵ�˵�������" << endl;
	string name;
	cin >> name;
	int res = isExist(abs, name);
	if (res != -1) 
	{
		cout << "�������޸ĵ�������"<<" ";
			cin >> abs->personArray[res].m_Name;
		cout << "�������޸ĵ��Ա�,1---�У�2---Ů: " <<" ";
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
					cout <<"������������������~" << endl;
				}
			}
		cout << "�������޸ĵ����䣺" <<" ";
			cin >> abs->personArray[res].m_Age;
		cout << "�������޸ĵĵ绰��" <<" ";
			cin >> abs->personArray[res].m_Phone;
		cout << "�������޸ĵĵ�ַ��" <<" ";
			cin >> abs->personArray[res].m_Addr;
		cout<<"�޸ĳɹ�~" << endl;
	}
	else 
	{
		cout<<"���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//�����ϵ�˵ĺ���
void clearPerson(Addressbooks* abs) 
{
	cout<< "�˲���������������ݣ���ȷ����" << endl;
	cout<< "�����룺ȷ�� ���� ȡ�� " << endl;
	string num;
	cin >> num;
	while (true) 
	{
		if (num == "ȷ��")
		{
			abs->m_Size = 0;
			cout << "ͨѶ¼����գ���лʹ��~" << endl;
			break;
		}
		else 
		{
			cout<<"���������������������룡" << endl;
		}
	}
	system("pause");
	system("cls");
}

//���������
int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ������ֵ
	abs.m_Size = 0;//�ʼ��ϵ�˵�����Ϊ0


	int select = 0;//����һ���û�ѡ�����
	while (true)
	{
		//����showMenu����
		showMenu();
		while (true) 
		{
			cout << "����������Ҫ������Ӧ�����֣�";
			cin >> select;
			if (select >= 0 && select <= 6)
			{
				switch (select)
				{
				case 1://�����ϵ��
					addPerson(&abs);
					break;
				case 2://��ʾ��ϵ��
					showPerson(&abs);
					break;
				case 3://ɾ����ϵ��
					deletePerson(&abs);
					//�׶�����֤����
				   /*{
					   cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
					   string name;
					   cin >> name;
					   if(isExist(&abs,name)==-1)
					   {
						   cout << "���޴���" << endl;
					   }
					   else
					   {
						   cout << "�ҵ�����" << endl;
					   }
				   }*/
					break;
				case 4://������ϵ��
					findPerson(&abs);
					break;
				case 5://�޸���ϵ��
					modifyPerson(&abs);
					break;
				case 6://�����ϵ��
					clearPerson(&abs);
					break;
				case 0://�˳�ͨѶ¼
					cout << "��ӭ�´�ʹ��~" << endl;
					system("pause");//��������˳�
					return 0;		//�˳�ϵͳ
					break;
				default:
					break;
				}
				break;
			}
			else 
			{
				cout<<"����������" << endl;
			}
		}
	}

	system("pause");
	return 0;
};