#include<iostream>
using namespace  std;
void showValue01( int& val)
{
	val = 90;
	cout << val << endl;
}
void showValue02(const int& val)
{
	//val = 90;    ���������д��
	cout << val << endl;
}
int main()
{
	int a0 = 10;
	showValue01(a0);//���Ϊ90���βθı���ʵ��
	int a1 = 10;
	showValue02(a1);//���β��趨Ϊ   ��������   ���Է�ֹ�βθı�ʵ�ε�ֵ
	const int& b = 30;//������������ת��Ϊint temp=30; int& b=temp;
	//int& c = 20;  ����д���Ǵ����
	return 0;
}