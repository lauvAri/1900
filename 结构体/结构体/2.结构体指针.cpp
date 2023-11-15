#include<iostream>
using namespace std;
//1.定义结构体
struct student
{
	string name;
	int age;
	int score;
};
int main()
{
	//2.创建结构体变量
	struct student s1 = { "zhangsan",18,90 };
	//3.通过指针指向结构体变量
	struct student* p = &s1;
	//4.通过指针访问结构体变量中的数据
	cout << p->name <<"\t"<<p->age<<"\t"<<p->score << endl;
	//5.通过解引用访问结构体变量中的数据
	cout<<(*p).name << "\t" << (*p).age << "\t" << (*p).score << endl;
}