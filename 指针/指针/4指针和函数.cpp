#include<iostream>
using namespace std;
void swap01(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2= temp;
}
void swap02(int a, int b)
{
	int temp = a;
		a = b;
	b = temp;
}
int main()
{
	
	int i = 1;
	int j = 2;
	swap01(&i,&j);
		cout << i << "\t" << j << endl;//���ǵ�ַ���ݣ�ʵ�η����ı䡣i=2��j=1
		swap02(i, j);
		cout << i <<"\t" << j << endl;//����ֵ���ݣ�ʵ�β������ı䡣i=2,j=1
		return 0;
}