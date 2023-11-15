#include<iostream>
#include<vector>//使用vector需要添加vector头文件
//vector 实际是是一个“类”
using namespace std;
int main()
{
	//默认初始化
	vector <int>v1;//vector <数据类型> 名称
	//列表初始化（拷贝初始化）
	vector<short>v2 = { 1,2,3,4,5 };//=可以不写
	vector<char>v3{ 'a','b','c','d','e'};
	//直接初始化
	vector<long>v4(5);//有5个元素
	vector<long>v5(5, 30);//有5个元素，且均为30

//访问元素

	v3.push_back('f');//调用push_back()函数，进行添加值的操作
	int	len = v3.size();//调用   size()    函数即可得到长度，size()是vector类的一个成员函数。
	
	for (int i = 0; i < len; i++)
	{
		cout << v3[i] <<"\t";
	}
	cout << endl;
	for (int num : v2)
	{
		cout << num << "\t";
	}
	cout << endl;


	char arr[] = { 'a','b','c','d','e' };
	cout << "for(char i: arr)   ";
	for (char i : arr)
	{
		cout << i <<"\t";
	}
	cout <<endl<< "for(int i: arr)   ";
	for (int i : arr)
	{
		cout << i << "\t";//输出ASCII码
	}
	return 0;
}