#include<iostream>
using namespace std;
/*两种分类
* 1.按参数分类：有参构造和无参构造
* 2.按类型分类：普通构造和拷贝构造
*/
/*三种调用方式
* 1.括号法
* 2.显示法
* 3.隐式转换法
*/

class Person
{
public:
	Person()
	{
		cout << "Person的无参构造（默认构造）函数调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person& p)//const最前修饰相当于常量指针，引用相当于指针常量
	{
		//将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int age;
};

//调用
void test01()
{
	//括号法
	cout << "括号法" << endl;
	Person p1;//默认
	Person p2(10);//有参
	Person p3(p2);//拷贝
	cout << "p2的年龄为" << p2.age << endl;
	cout << "p3的年龄为" << p3.age << endl;
	/*注意事项
	* 调用默认构造函数时不要加（），编译器会认为这是一个函数的声明（函数内部可以写其他函数的声明）不会认为在创建对象
	*/


	//显示法
	cout << "显示法" << endl;
	Person p4;//默认
	Person p5 = Person(10);//有参
	Person p6 = Person(p4);//拷贝
	
	//Person(10);// 是一个匿名对象  特点：当前行执行结束后，系统会立即回收掉匿名对象
	//cout << "hello world" << endl;

	/*注意事项
	* 不要用拷贝构造函数去初始化匿名对象 编译器会认为Person(p3)===Person p3;(即对象声明)
	*/
	//Person(p6);//重定义


	//隐式转换法
	cout << "隐式转换法" << endl;
	Person p7 = 10;//相当于   写了   Person p7=Person（10）；
	Person p8 = p7;
	cout << endl;
}
int main()
{
	test01();
	cin.get();
	return 0;
}