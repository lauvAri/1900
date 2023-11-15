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
	//用一百元买一百只鸡；鸡翁5元一只，鸡婆3元一只，鸡雏1元一只，求三种各多少只
	
}