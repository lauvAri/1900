#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // 用于标记是否有元素交换
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            // 比较相邻元素，如果第一个元素大于第二个元素，则交换它们
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // 标记发生了交换
                swapped = true;
            }
        }

        // 如果在这一轮迭代中没有发生交换，说明数组已经排序完成
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
	
