#include<iostream>
using namespace std;

//交换函数
//1.值传递
void swap1(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//2.地址传递
void swap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3.引用传递
void swap3(int& a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a(10), b(20);
	//swap1(a, b);
	//cout << a << " " << b << endl;             10 20

	//swap2(&a,&b);
	//cout << a << " " << b << endl;             20 10

	//swap3(a, b);
	//cout << a << " " << b << endl;                 20 10
	
	return 0;
}