#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	a = b++, b = c + 2;
	cout << a << " " << b << " " << c;
}