#include<iostream>
using namespace std;
int& test(int a,int b)
{
	int c;//局部变量存放在 栈区
	return c = a > b ? a : b;
}
int& test01()
{
static	int a = 10;//静态变量，存放在全局区，整个程序运行完之后才会释放
	return a;//相当于int &a=a;
}
int main()
{
	int a = 9,b=7;
	int& c = test(a, b);
	cout << c << endl;
	cout << c << endl;//vs2022 x64做了返回值优化，并不会出现问题。在x86下切记不要返回局部变量的引用
	int& ref = test01();
	cout << ref << endl;
	cout << ref << endl;//因为是静态变量，所以不会出现问题


	test01() = 20;
	cout <<ref<< endl;//函数的返回值为引用，函数的调用可以作为可修改的左值
	return 0;
}