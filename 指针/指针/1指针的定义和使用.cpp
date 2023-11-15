#include<iostream>
using namespace std;
int main()
{
	//内存编号从0开始，一般为十六进制数
	// 指针是用来记录地址编号的,可以用指针来保存地址
	int a = 100;
	int* p=&a;
	cout << "a的地址为：" <<p << endl;
	cout << sizeof(p) << endl;//32位占4个字节，64为占8个字节 
	*p = 999;//解引用
	cout << a << "  " << *p << endl;
	return 0;
}