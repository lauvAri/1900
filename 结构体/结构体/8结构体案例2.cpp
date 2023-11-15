#include<iostream>
using namespace std;
//定义英雄的结构体
struct hero
{
	string name;
	int age;
	string gender;
};
void print(hero arr[])
{
	for(int i = 0; i < 5;i++)
	{
		cout << arr[i].name << " " << arr[i].age << " " << arr[i].gender << endl;
	}
}
void bubble_sort(hero arr[],int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].age > arr[j+ 1].age)
			{
				hero temp = arr[j];
				arr[j] = arr[j+ 1];
				arr[j+ 1] = temp;
			}
		}
	}
}
void select_sort(hero arr[],int  len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = i+1; j <len; j++)
		{
			if (arr[i].age > arr[j].age)
			{
			hero temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			}
		}
	}
}
int main()
{
	//创建数组存放5名英雄
	hero arr[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	//对数组进行排序，按照年龄进行升序排列
	//bubble(arr, 5);
	select_sort(arr, 5);
	//将排序后的结果打印输出
	print(arr);
	return 0;
}