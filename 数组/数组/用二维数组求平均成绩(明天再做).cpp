#include<iostream>
using namespace std;
int main() {
	int arr[5][3];
	int sum1 = 0;
	int sum2 = 0;
	int average[3];
	for (int i = 0; i < 5; i++) {
		int j = 0;
		cout << "�������" << i + 1 << "λͬѧ�ĳɼ���";
		for (; j < 3; j++) {
			cin >> arr[i][j];
		}
		for (int b = 0; b< 5; b++) {
			for (int a = 0; a < 3; a++) {
				sum1 += arr[b][a];
			}
			cout << sum1 << endl;
		}
		
		
	}
	return 0;
}