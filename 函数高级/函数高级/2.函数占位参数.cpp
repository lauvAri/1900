#include<iostream>
using namespace std;
void test1(int a, int)//�ڶ���int��Ϊռλ����
{
	cout << "this is a test1" << endl;
}
void test2(int a, int = 10)//ռλ����������Ĭ��ֵ��д��Ϊ����������   =Ĭ��ֵ
{
	cout << "this is test2" << endl;
}
int main()
{
	return 0;
}