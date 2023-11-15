#include <iostream>
using namespace std;
int main()
{
    int arr[][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };

    cout << "arr=" << arr<<endl;
    cout << "arr+1=" << arr + 1 << endl;
    cout << "arr[1]+0=" << arr[1] + 0 << endl;
    cout << "*(arr+1)+0=" << *(arr + 1) + 0 << endl;


    for (int i = 0; i < 3; i++)
    {
        cout << *(arr[1] + i) << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *(*(arr + i) + j) << ",";//¼´*£¨arr[i]+j£©
        }
        cout << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *(arr[i] + j) << ",";//arr[i]=*(arr+i)=arr+i
        }
        cout << endl;
    }

    return 0;
}