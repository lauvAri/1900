#include<iostream>
using namespace std;

//权限
//1.public 公共权限
// 2.private私有权限      
// 3.protected保护权限

//struct和class的区别
//struct默认权限是公共，class默认权限是私有
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
	stu1.name = "zhou";//结构体默认是公共权限，在类外可以访问
	student2 stu2;
	stu2.name = "zhou";//类默认是私有权限，在类外不可以访问
	return 0;
}