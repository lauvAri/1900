#include<iostream>
using namespace std;

int main()
{//1.����һ���ṹ������
	struct student
	{
		string name;
		int age;
		int score;
	};
	//2.����һ���ṹ������
	student arr[3] =
	{
		{"zhangsan",18,89},
		{"lisi",19,90},
		{"wangwu",18,80}
	};
	//3.���Ը��ṹ�������е�Ԫ�ظ�ֵ
	arr[0].name = "zhouyi";
	//4.�����ṹ������
	for(int i=0;i<3;i++)
	cout << arr[i].name<<"\t" << arr[i].age <<"\t" << arr[i].score << endl;
}