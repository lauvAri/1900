#include<iostream>
using namespace std;

class person
{
public://����һ�������ӿ�
	void setName(string name)//����д������
	{
		m_Name = name;
	}
	string getName()//���Զ�ȡ����
	{
		return m_Name;
	}

	void setGender(string gender)//�Ա�Ϊֻд
	{
		m_Gender = gender;
	}

	int getAge()//����Ϊֻ��
	{
		return m_Age;
	}

	void setHeight(int height)
	{
		if (m_Height < 0||m_Height > 300)
		{
			m_Height = 0;
			cout << "�����д���" << endl;
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
	string m_Gender="��";
	int m_Age=18;
	int m_Height=0;
};
int main()
{
	person pers;
	pers.setName("zhou");
	cout << pers.getName() << endl;
	pers.setGender("Ů");
	cout << pers.getAge() << endl;
	pers.setHeight(320);
	cout << pers.getHeight() << endl;

	return 0;
}