#include<iostream>
using namespace std;
//����Ӣ�۵Ľṹ��
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
	//����������5��Ӣ��
	hero arr[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	//������������򣬰������������������
	//bubble(arr, 5);
	select_sort(arr, 5);
	//�������Ľ����ӡ���
	print(arr);
	return 0;
}