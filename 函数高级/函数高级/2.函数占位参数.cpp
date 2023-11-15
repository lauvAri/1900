#include<iostream>
using namespace std;
void test1(int a, int)//第二个int即为占位参数
{
	cout << "this is a test1" << endl;
}
void test2(int a, int = 10)//占位参数可以有默认值，写法为：数据类型   =默认值
{
	cout << "this is test2" << endl;
}
int main()
{
	return 0;
}