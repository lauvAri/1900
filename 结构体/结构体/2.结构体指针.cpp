#include<iostream>
using namespace std;
//1.����ṹ��
struct student
{
	string name;
	int age;
	int score;
};
int main()
{
	//2.�����ṹ�����
	struct student s1 = { "zhangsan",18,90 };
	//3.ͨ��ָ��ָ��ṹ�����
	struct student* p = &s1;
	//4.ͨ��ָ����ʽṹ������е�����
	cout << p->name <<"\t"<<p->age<<"\t"<<p->score << endl;
	//5.ͨ�������÷��ʽṹ������е�����
	cout<<(*p).name << "\t" << (*p).age << "\t" << (*p).score << endl;
}