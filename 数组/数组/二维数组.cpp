#include<iostream>
using namespace std;
int main() {
	int arr[][3] =//�������ڶ�ά������ʡ����������һά������ʡ��������ʾ�˳���
	{
		{1,2,3},
		{1,2,3},
		{1,2,3}
	};
	cout << sizeof(arr) << endl;
	cout << 3 * sizeof(arr[0]) << endl;
	cout << 3 * 3 * sizeof(int) << endl;//���������ַ�ʽ������ռ���ڴ�ռ�
	cout << &arr[1][2] << endl;
	cout << arr[1] + 2 << endl;//���������ַ�ʽ���ַ
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << endl;
		}
		}
	int b[][3] = { 1,2,3,4 };//��άԪ�ظ���Ϊ2
	cout << &b[1][0] << endl;
	cout << b+1 << endl;//��ڶ��е��׵�ַ
	typedef int arr1[3];//��һά����ʾ����
	arr1 arr2[2];

}