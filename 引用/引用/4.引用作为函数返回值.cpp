#include<iostream>
using namespace std;
int& test(int a,int b)
{
	int c;//�ֲ���������� ջ��
	return c = a > b ? a : b;
}
int& test01()
{
static	int a = 10;//��̬�����������ȫ��������������������֮��Ż��ͷ�
	return a;//�൱��int &a=a;
}
int main()
{
	int a = 9,b=7;
	int& c = test(a, b);
	cout << c << endl;
	cout << c << endl;//vs2022 x64���˷���ֵ�Ż���������������⡣��x86���мǲ�Ҫ���ؾֲ�����������
	int& ref = test01();
	cout << ref << endl;
	cout << ref << endl;//��Ϊ�Ǿ�̬���������Բ����������


	test01() = 20;
	cout <<ref<< endl;//�����ķ���ֵΪ���ã������ĵ��ÿ�����Ϊ���޸ĵ���ֵ
	return 0;
}