#include<iostream>
using namespace std;
struct student//定义一个学生数据类型，包括（姓名，年龄，分数）
	//自定义数据类型，一些数据类型的集合
	//struct  类型名称 { 成员列表 }
{
	string name;//姓名
	int age;//年龄
	int score;//分数
}s3;
int main()
{
	//通过学生类型创建具体的学生
	//1.struct student s1
	struct student s1;//struct 可以不写
	//给s1属性赋值，通过.访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 89;
	cout  << s1.name << "\t" << s1.age << "\t" << s1.score<<endl;
	//2.struct student s2={....}
	struct student s2 = { "李四",18,87 };
	cout<< s2.name << "\t" << s2.age << "\t" << s2.score<<endl;
	//3.在定义结构体时顺便创建结构体变量
	s3.name = "王五";
	s3.age = 19;
	s3.age = 90;
	cout<<s3.name << "\t" << s3.age << "\t" << s3.score;
	return 0;
}