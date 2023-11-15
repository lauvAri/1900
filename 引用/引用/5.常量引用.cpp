#include<iostream>
using namespace  std;
void showValue01( int& val)
{
	val = 90;
	cout << val << endl;
}
void showValue02(const int& val)
{
	//val = 90;    不允许此种写法
	cout << val << endl;
}
int main()
{
	int a0 = 10;
	showValue01(a0);//输出为90，形参改变了实参
	int a1 = 10;
	showValue02(a1);//将形参设定为   常量引用   可以防止形参改变实参的值
	const int& b = 30;//编译器将代码转化为int temp=30; int& b=temp;
	//int& c = 20;  这种写法是错误的
	return 0;
}