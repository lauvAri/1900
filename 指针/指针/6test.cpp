#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // ���ڱ���Ƿ���Ԫ�ؽ���
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            // �Ƚ�����Ԫ�أ������һ��Ԫ�ش��ڵڶ���Ԫ�أ��򽻻�����
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // ��Ƿ����˽���
                swapped = true;
            }
        }

        // �������һ�ֵ�����û�з���������˵�������Ѿ��������
        if (!swapped) {
            break;
        }
    }
}

int main()
{
    int arr[] = { 9,8,6,4,7,5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << endl;
       }
}
	
