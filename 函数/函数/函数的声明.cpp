#include<iostream>
using namespace std;
//函数的定义
int max()
{
	cout << "请输入两个数字:";
	int i(0), j(0);
	cin >> i>> j;
	return i > j ? i : j;
}
//函数的声明：提前告诉编译器函数的存在
int max();
int main()
{
	cout<<"较大的数为：" << max();
}