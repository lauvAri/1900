#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int& b = a;//引用是给变量起别名，语法为：数据类型&  别名=原名
	cout << a << endl;
	cout << b << endl;
    b = 100;
	cout << a << endl;
	cout << b << endl;
	return 0;
}