#include<iostream>
using namespace std;
int main()
{
	/*1.引用要初始化，即int& b;是错误的
	* 2.引用初始化后不能更改
	*/
	int a = 10;
	int& b = a;
	int  c = 20;
	b = c;
	cout << a << " " << b << " " << c << endl;//20 20 20 ;
	//引用本质上是指针常量，指针指向的值可以修改，指向的地址不可以改
	cout << &a << " " << &b << " " << &c << endl;//地址一 地址一 地址二
	return 0;
}