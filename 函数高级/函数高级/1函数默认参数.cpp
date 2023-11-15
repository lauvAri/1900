#include<iostream>
using namespace std;
//double sum(double a, double b, double c = 1.0, double d, double e )//错误，因为c有默认参数，所以d和e也必须有参数
//{
//	return a + b + c + d + e;
//}
double sum2(double a, double b = 1.0, double c = 2.0)
{
	return a + b + c;
}

//函数声明中有默认值，那么函数定义中不能有默认值，反之亦然
//若两者都有默认参数，则报错为“重定义默认参数”
int sum3(int a , int b );//函数的声明

int sum3(int a=1, int b=2)//函数定义
{
	return a + b;
}

int sum4(int a=2, int b=4);//告诉编译器有这个函数存在，这样的话函数定义就可以写在main函数的后面（但是有默认参数时只能写在声明中）

int main()
{
	cout << sum2(1.1) << endl;
	cout << sum3() << endl;
	cout << sum4() << endl;
}

int sum4(int a , int b )
{
	return a + b;
 }