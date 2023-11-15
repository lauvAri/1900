#include<iostream>
using namespace std;
int main() {
	long arr[4]; //= { 233,678,9087,9878987 };
	//以下两种均为取地址操作
	cout << arr + 3 << endl;
	cout << &arr[3] << endl;
	int ray[] = { 12,34,56,34 };
	//将ray中的元素赋给arr
	/*for (int i = 0; i < 4; i++) {
		arr[i] = ray[i];
	}
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << "\t";
	}*/
	//也可使用memcpy函数进行字节复制
	memcpy(arr, ray, sizeof(ray));//memcpy(目标，源头，字节数)
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << "\t";
	}
	return 0;
}