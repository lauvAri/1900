#include<iostream>
using namespace std;
int main() {
	int arr[][3] =//行数（第二维）可以省，列数（第一维）不能省，列数表示了长度
	{
		{1,2,3},
		{1,2,3},
		{1,2,3}
	};
	cout << sizeof(arr) << endl;
	cout << 3 * sizeof(arr[0]) << endl;
	cout << 3 * 3 * sizeof(int) << endl;//可用这三种方式求数组占用内存空间
	cout << &arr[1][2] << endl;
	cout << arr[1] + 2 << endl;//可用这两种方式求地址
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << endl;
		}
		}
	int b[][3] = { 1,2,3,4 };//高维元素个数为2
	cout << &b[1][0] << endl;
	cout << b+1 << endl;//求第二行的首地址
	typedef int arr1[3];//第一维，表示列数
	arr1 arr2[2];

}