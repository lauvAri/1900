#include<iostream>
using namespace std;

int main()
{//1.定义一个结构体数组
	struct student
	{
		string name;
		int age;
		int score;
	};
	//2.创建一个结构体数组
	student arr[3] =
	{
		{"zhangsan",18,89},
		{"lisi",19,90},
		{"wangwu",18,80}
	};
	//3.可以给结构体数组中的元素赋值
	arr[0].name = "zhouyi";
	//4.遍历结构体数组
	for(int i=0;i<3;i++)
	cout << arr[i].name<<"\t" << arr[i].age <<"\t" << arr[i].score << endl;
}