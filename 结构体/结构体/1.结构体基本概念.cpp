#include<iostream>
using namespace std;
struct student//����һ��ѧ���������ͣ����������������䣬������
	//�Զ����������ͣ�һЩ�������͵ļ���
	//struct  �������� { ��Ա�б� }
{
	string name;//����
	int age;//����
	int score;//����
}s3;
int main()
{
	//ͨ��ѧ�����ʹ��������ѧ��
	//1.struct student s1
	struct student s1;//struct ���Բ�д
	//��s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 89;
	cout  << s1.name << "\t" << s1.age << "\t" << s1.score<<endl;
	//2.struct student s2={....}
	struct student s2 = { "����",18,87 };
	cout<< s2.name << "\t" << s2.age << "\t" << s2.score<<endl;
	//3.�ڶ���ṹ��ʱ˳�㴴���ṹ�����
	s3.name = "����";
	s3.age = 19;
	s3.age = 90;
	cout<<s3.name << "\t" << s3.age << "\t" << s3.score;
	return 0;
}