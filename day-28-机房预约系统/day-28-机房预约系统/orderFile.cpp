#include"orderFile.h"

//构造函数
orderFile::orderFile() 
{
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);

	string date;	//日期
	string interval;//时间段
	string stuId;	//学号
	string stuName; //学生姓名
	string roomId;	//机房编号
	string status;	//预约状态

	this->m_Size = 0;//初始记录为0条

	while (ifs >> date >> interval >> stuId >> stuName >> roomId >> status)
	{
		//测试代码
		//cout << date << interval << stuId  << stuName << roomId << status << endl;;
		string key;
		string value;
		map<string, string>m;


		int pos = date.find(":");//在date字符串中找 : 找到返回其位置,找不到返回-1
		if (pos != -1) 
		{
			key = date.substr(0, pos);//截取0-pos的字符串
			value = date.substr(pos + 1, date.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		//测试
		//cout << key << " " << value << endl;
		pos = interval.find(":");//在interval字符串中找 : 找到返回其位置,找不到返回-1
		if (pos != -1)
		{
			key = interval.substr(0, pos);//截取0-pos的字符串
			value = interval.substr(pos + 1, interval.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		
		pos = stuId.find(":");//在stuId字符串中找 : 找到返回其位置,找不到返回-1
		if (pos != -1)
		{
			key = stuId.substr(0, pos);//截取0-pos的字符串
			value = stuId.substr(pos + 1, stuId.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		pos = stuName.find(":");//在stuName字符串中找 : 找到返回其位置,找不到返回-1
		if (pos != -1)
		{
			key = stuName.substr(0, pos);//截取0-pos的字符串
			value = stuName.substr(pos + 1, stuName.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		pos = roomId.find(":");//在roomId字符串中找 : 找到返回其位置,找不到返回-1
		if (pos != -1)
		{
			key = roomId.substr(0, pos);//截取0-pos的字符串
			value = roomId.substr(pos + 1, roomId.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		pos = status.find(":");//在roomId字符串中找 : 找到返回其位置,找不到返回-1
		if (pos != -1)
		{
			key = status.substr(0, pos);//截取0-pos的字符串
			value = status.substr(pos + 1, status.size() - pos - 1);
			m.insert(make_pair(key, value));
		}


		//将map<string,string>m放入map<int,map<string,string>>m_Order_Date中
		this->m_Order_Date.insert(make_pair(this->m_Size, m));
		this->m_Size++;
	}
	ifs.close();

	//测试是否放入map<int,map<string,string>>m_Order_Date中
	/*
	for (map<int, map<string, string>>::iterator it = m_Order_Date.begin(); it != m_Order_Date.end(); it++) 
	{
		cout << "第" << it->first + 1 << "条" << endl;
		for (map<string, string>::iterator mit = it->second.begin(); mit != (*it).second.end(); mit++) 
		{
			cout << mit->first << " " << mit->second << " ";
		}
		cout << endl;
	}
	*/
}

//更新预约记录
void orderFile::update_Order() 
{
	if (this->m_Size == 0) //预约记录为0条，不更新
	{
		return;
	}
	//写文件
	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);
	//i小于预约记录的条数
	for (int i = 0; i < this->m_Size; i++) 
	{
		ofs << "date:" << this->m_Order_Date[i]["date"] << " ";
		ofs << "interval:" << this->m_Order_Date[i]["interval"] << " ";
		ofs << "stuId:" << this->m_Order_Date[i]["stuId"] << " ";
		ofs << "stuName:" << this->m_Order_Date[i]["stuName"] << " ";
		ofs << "roomId:" << this->m_Order_Date[i]["roomId"] << " ";
		ofs << "status:" << this->m_Order_Date[i]["status"] << endl;
	}
	ofs.close();
}
