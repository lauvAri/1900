#include<iostream>
using namespace std;
void bubble(int arr[])   
{
	for (int i = sizeof(arr)/sizeof(arr[0]); i>1; --i)
	{
		for (int j =0;j<i;++j )
		{
			if (arr[j] > arr[++j])
			{
				int temp = arr[j];
				arr[j] = arr[++j];
				arr[++j] = arr[j];
		    }
			
		}
	}
}
int main()
{
	int arr[8] = { 2,5,1,7,4,8,9,6 };
	bubble(arr);
	int * p = arr;
	for (int t = 0; t < sizeof(arr) / sizeof(arr[0]) + 1; ++t)
	{
		cout << *p << endl;
		++p;
	}
	return 0;
}