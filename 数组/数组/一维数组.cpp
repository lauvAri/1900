#include<iostream>
using namespace std;
int main() {
	enum weekday {sun,mon,tue,wed,thu,fri,sat};
	weekday arr1[10] = {sun,mon,tue,wed,thu,fri,sat};//�ڰ˸�����ʮ��Ĭ��Ϊ0
	typedef int arr2[3];//typedef������arrת��Ϊ��������ʹ���������int�Ĺ���
arr2 b[4] = {4,5,6,7};//����һ�����ͺͳ�����arr��ͬ������b
	cout << arr1[7] << endl;//��������еڰ˸�Ԫ�أ�Ϊ0
	cout << & arr1[1] << endl;//��������еڶ���Ԫ�صĵ�ַ���׵�ַ��4
	cout << arr1 << endl;//��������׵�ַ
	weekday d1 = sun;
	cout << d1 << endl;

}