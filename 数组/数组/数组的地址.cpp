#include<iostream>
using namespace std;
int main() {
	long arr[4]; //= { 233,678,9087,9878987 };
	//�������־�Ϊȡ��ַ����
	cout << arr + 3 << endl;
	cout << &arr[3] << endl;
	int ray[] = { 12,34,56,34 };
	//��ray�е�Ԫ�ظ���arr
	/*for (int i = 0; i < 4; i++) {
		arr[i] = ray[i];
	}
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << "\t";
	}*/
	//Ҳ��ʹ��memcpy���������ֽڸ���
	memcpy(arr, ray, sizeof(ray));//memcpy(Ŀ�꣬Դͷ���ֽ���)
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << "\t";
	}
	return 0;
}