#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int a = 1; a < 100; a+=2)
	{
		sum += a;
		cout << a;
		if (a<99)
		{
			cout << "+";
		}
		/*else
		{
			cout << "=";
		}*/
		
	}
	cout <<"=" << sum << endl;
	//��һ��Ԫ��һ��ֻ��������5Ԫһֻ������3Ԫһֻ������1Ԫһֻ�������ָ�����ֻ
	
}