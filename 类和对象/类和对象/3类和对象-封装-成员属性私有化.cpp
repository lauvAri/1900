#include<iostream>
using namespace std;

class person
{
public://开启一个公共接口
	void setName(string name)//可以写入姓名
	{
		m_Name = name;
	}
	string getName()//可以读取姓名
	{
		return m_Name;
	}

	void setGender(string gender)//性别为只写
	{
		m_Gender = gender;
	}

	int getAge()//年龄为只读
	{
		return m_Age;
	}

	void setHeight(int height)
	{
		if (m_Height < 0||m_Height > 300)
		{
			m_Height = 0;
			cout << "数据有错误" << endl;
			return;
		}
		else
		{
			m_Height = height;
		}
		
	}
int  getHeight()
	{
	
		return m_Height;
	}


private:
	string m_Name;
	string m_Gender="男";
	int m_Age=18;
	int m_Height=0;
};
int main()
{
	person pers;
	pers.setName("zhou");
	cout << pers.getName() << endl;
	pers.setGender("女");
	cout << pers.getAge() << endl;
	pers.setHeight(320);
	cout << pers.getHeight() << endl;

	return 0;
}