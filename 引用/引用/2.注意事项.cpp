#include<iostream>
using namespace std;
int main()
{
	/*1.����Ҫ��ʼ������int& b;�Ǵ����
	* 2.���ó�ʼ�����ܸ���
	*/
	int a = 10;
	int& b = a;
	int  c = 20;
	b = c;
	cout << a << " " << b << " " << c << endl;//20 20 20 ;
	//���ñ�������ָ�볣����ָ��ָ���ֵ�����޸ģ�ָ��ĵ�ַ�����Ը�
	cout << &a << " " << &b << " " << &c << endl;//��ַһ ��ַһ ��ַ��
	return 0;
}