#include<iostream>
using namespace std;
//double sum(double a, double b, double c = 1.0, double d, double e )//������Ϊc��Ĭ�ϲ���������d��eҲ�����в���
//{
//	return a + b + c + d + e;
//}
double sum2(double a, double b = 1.0, double c = 2.0)
{
	return a + b + c;
}

//������������Ĭ��ֵ����ô���������в�����Ĭ��ֵ����֮��Ȼ
//�����߶���Ĭ�ϲ������򱨴�Ϊ���ض���Ĭ�ϲ�����
int sum3(int a , int b );//����������

int sum3(int a=1, int b=2)//��������
{
	return a + b;
}

int sum4(int a=2, int b=4);//���߱�����������������ڣ������Ļ���������Ϳ���д��main�����ĺ��棨������Ĭ�ϲ���ʱֻ��д�������У�

int main()
{
	cout << sum2(1.1) << endl;
	cout << sum3() << endl;
	cout << sum4() << endl;
}

int sum4(int a , int b )
{
	return a + b;
 }