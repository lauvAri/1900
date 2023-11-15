#include<iostream>
using namespace std;
int main()
{//空指针：初始化指针变量，空指针指向的内存是不可以访问的
	int* p = NULL;
	//*p = 100;
	//cout << *p << endl;运行不会有任何结果

	//float* q = (float*)0x1100;
	//cout <<* q << endl;同样不会有任何结果，要避免使用野指针。

	//空指针和野指针都不是我们申请的空间，所以不要访问。
	return 0;
}