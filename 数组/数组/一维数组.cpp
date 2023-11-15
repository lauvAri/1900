#include<iostream>
using namespace std;
int main() {
	enum weekday {sun,mon,tue,wed,thu,fri,sat};
	weekday arr1[10] = {sun,mon,tue,wed,thu,fri,sat};//第八个到第十个默认为0
	typedef int arr2[3];//typedef可以让arr转化为类型名，使其具有类似int的功能
arr2 b[4] = {4,5,6,7};//定义一个类型和长度与arr相同的数组b
	cout << arr1[7] << endl;//输出数组中第八个元素，为0
	cout << & arr1[1] << endl;//输出数组中第二个元素的地址，首地址加4
	cout << arr1 << endl;//输出数组首地址
	weekday d1 = sun;
	cout << d1 << endl;

}