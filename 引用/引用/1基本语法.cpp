#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int& b = a;//�����Ǹ�������������﷨Ϊ����������&  ����=ԭ��
	cout << a << endl;
	cout << b << endl;
    b = 100;
	cout << a << endl;
	cout << b << endl;
	return 0;
}