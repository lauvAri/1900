#include<iostream>
using namespace std;
//���һ��ѧ����
class student//�����Ȩ�޺ͳ�Ա
{
public://����Ȩ��

	//���е����Ժ���Ϊ��������Ա
	//���ԣ���Ա����/��Ա����
	//��Ϊ����Ա����/��Ա����

	//����   ��������ѧ��
	string name;
	long long number;
	//��Ϊ   ��չʾ�����Ϣ
	void display()
	{
		cout << name << endl << number << endl;
	}
};
int main()
{
	student stu;//ʵ������������һ������Ķ���
	cout << "������ѧ��������";
	cin >> stu.name;
	cout << "������ѧ�ţ�";
	cin >> stu.number;
	system("cls");
	stu.display();
}