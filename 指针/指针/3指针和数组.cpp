#include<iostream>
using namespace std;
int main()
{
	//利用指针来访问数组
	int group[10] = { 1,2,3,4,5,6,7,8,9,10 };
	
//利用指针遍历数组
	int* p = group;
	for (int i = 0; i < 10; ++i)
	{
		cout << *(p+i) << endl;
	
	}
	for (int j = 0; j < 10; ++j)
	{
		cout << *p << endl;
		++p;
	}
}