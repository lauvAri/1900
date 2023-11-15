#include<iostream>
using namespace std;
//定义学生结构体
struct student
{
	string name;
	int age;
	int score;
};
//定义老师结构体
struct teacher
{
	string name;
	int id;
	int age;
	struct student stu;//嵌套学生结构体，要在老师结构体前定义
};
int main()
{
	//创建老师
	struct teacher t1 = { "Jack", 001,34 };//也可以直接把学生信息放在大扩号里
	/*t1.name = "Jack";
	t1.id = 001;
	t1.age = 34;*/
	t1.stu.name = "Allie";
	t1.stu.age = 18;
	t1.stu.score = 98;
	cout << t1.name << " " << t1.id << " " << t1.age << endl;
	cout << t1.stu.name <<" " << t1.stu.age <<" " << t1.stu.score << endl;
	return 0;
}
