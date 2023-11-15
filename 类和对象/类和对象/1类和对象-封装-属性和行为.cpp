#include<iostream>
using namespace std;
//设计一个学生类
class student//类包括权限和成员
{
public://公共权限

	//类中的属性和行为叫做：成员
	//属性：成员属性/成员变量
	//行为：成员函数/成员方法

	//属性   有姓名和学号
	string name;
	long long number;
	//行为   是展示相关信息
	void display()
	{
		cout << name << endl << number << endl;
	}
};
int main()
{
	student stu;//实例化，即创建一个具体的对象
	cout << "请输入学生姓名：";
	cin >> stu.name;
	cout << "请输入学号：";
	cin >> stu.number;
	system("cls");
	stu.display();
}