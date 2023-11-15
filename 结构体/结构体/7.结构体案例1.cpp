#include<iostream>
using namespace std;
//学生结构体定义
struct student
{
	string name;
	int score;
};
//老师结构体定义
struct teacher
{
	string name;
	student s_arr[5];
};
//给老师和学生的返回值
void allocateSpace(teacher t_arr[],int len)
{
	string nameSeed = "ABCDE";
	//给老师赋值
	for (int i = 0; i < len; i++)
	{
		t_arr[i].name = "teacher_";
		t_arr[i].name += nameSeed[i];

		//通过循环给每名老师所带学生赋值
		for (int j = 0; j < 5; j++)
		{
			t_arr[i].s_arr[j].name = "student_";
			t_arr[i].s_arr[j].name += nameSeed[j];

			int random = rand() % 61+40;//40~100
			t_arr[i].s_arr[j].score = random;
		}
		
	}
}
void printinfo(teacher t_arr[], int len)
{
	for(int i = 0; i < len; i++)
	{
		cout <<"老师姓名 " << t_arr[i].name << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "    学生姓名 " << t_arr[i].s_arr[j].name
				<<" " << "  学生分数 " << t_arr[i].s_arr[j].score << endl;
		}
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//创建三名老师的数组 
	teacher t_arr[3];
	//通过函数给三名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(t_arr) / sizeof(t_arr[0]);
	allocateSpace(t_arr, len);
	//打印所有老师及其学生信息
	printinfo(t_arr, len);
	return 0;
}