#include"����.h"
#include<iostream>
using namespace std;
void swap()
{
	int a = 0;
	int b = 0;
	cout << "�������������֣�";
	cin >>a >> b;
	cout << "����ǰΪ��" << a << " " << b << endl;;
	int temp = a;
	a = b;
	b = temp;
	cout << "������Ϊ��" << a << " " << b << endl;
}
int main()
{
	swap();
	return 0;
}
