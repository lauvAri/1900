#include<iostream>
using namespace std;

//Ȩ��
//1.public ����Ȩ��
// 2.private˽��Ȩ��      
// 3.protected����Ȩ��

//struct��class������
//structĬ��Ȩ���ǹ�����classĬ��Ȩ����˽��
struct student1
{
	string name;
	string id;
};

class student2
{
	string name;
	string id;
};

int main()
{
	student1 stu1;
	stu1.name = "zhou";//�ṹ��Ĭ���ǹ���Ȩ�ޣ���������Է���
	student2 stu2;
	stu2.name = "zhou";//��Ĭ����˽��Ȩ�ޣ������ⲻ���Է���
	return 0;
}