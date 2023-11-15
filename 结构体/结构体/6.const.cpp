#include<iostream>
using namespace std;
//定义结构体
struct student
{
	string name;
	int age;
	int score;
};
//定义输出函数
//使用地址传递，不会拷贝，一个指针只占4个四节，节省了空间，大大提高了效率。
// 而用值传递会完全复制出来一个副本，当数据过多时会占用过多空间。

void printstudent(const student *s)//使用常量指针，达到只读不写的功能
{
	//s->age = 100;该行代码会报错，并提示表达式必须是可修改的左值
	cout << (*s).name <<" " <<(*s).age <<" " << (*s).score << endl;
}
int main()
{
	//创建结构体变量
	struct student s1= { "zhangsan",18,89 };
	printstudent(& s1);
}