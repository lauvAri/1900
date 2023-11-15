#include<iostream>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
//打印学生信息的函数
//1.值传递
void printstudent1(struct student s)
{
	s.age = 100;
	cout << "在子函数1中打印：" << s.name << " " << s.age << " " << s.score << endl;
}
//2.地址传递
void printstudent2(struct student *s)
{
	s->age = 200;
	cout<< "在子函数2中打印：" << (*s).name << " " <<( *s).age << " " <<(* s).score << endl;
	cout<< "在子函数2中打印：" << s->name << " " << s->age << " " << s->score << endl;
}
int main()
{
	//结构体做函数参数
	//将学生传入到一个参数中，打印学生身上的信息

	//创建结构体变量
	struct student s;
		s.name = "zhangsan";
		s.age = 18;
		s.score = 90;

		printstudent1(s);

		printstudent2(&s);

		cout << "在main函数中打印：" << s.name << " " << s.age << " " << s.score << endl;
	system("pause");
	return 0;
}