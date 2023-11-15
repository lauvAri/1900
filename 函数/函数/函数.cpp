#include"函数.h"
#include<iostream>
using namespace std;
void swap()
{
	int a = 0;
	int b = 0;
	cout << "请输入两个数字：";
	cin >>a >> b;
	cout << "交换前为：" << a << " " << b << endl;;
	int temp = a;
	a = b;
	b = temp;
	cout << "交换后为：" << a << " " << b << endl;
}
int main()
{
	swap();
	return 0;
}
