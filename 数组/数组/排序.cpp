#include<iostream>
using namespace std;
int main() {
	int grade[5];
	cout << "input 5 scores:";
	for (int i = 0; i < 5; i++) {
		cin >> grade[i];
	}
	//for(int j=0;j<4;j++)
	//	for (int a = 0; a < 4; a++) {
	//		if (grade[a] < grade[a + 1]) {
	//			int temp = grade[a];
	//			grade[a] = grade[a + 1];
	//			grade[a + 1] = temp;
	//		}
	//	}
	for(int i=0;i<4;i++)
		for (int j = i + 1; j < 5; j++) {
			if (grade[i] > grade[j]) {
				int temp = grade[i];
				grade[i] = grade[j];
				grade[j] = temp;
			}
		}
	cout << endl;
	for(int m=0;m<5;m++)
	cout << grade[m] <<" ";
}