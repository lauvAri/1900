#include<iostream>
using namespace std;
//ѧ���ṹ�嶨��
struct student
{
	string name;
	int score;
};
//��ʦ�ṹ�嶨��
struct teacher
{
	string name;
	student s_arr[5];
};
//����ʦ��ѧ���ķ���ֵ
void allocateSpace(teacher t_arr[],int len)
{
	string nameSeed = "ABCDE";
	//����ʦ��ֵ
	for (int i = 0; i < len; i++)
	{
		t_arr[i].name = "teacher_";
		t_arr[i].name += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ����ѧ����ֵ
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
		cout <<"��ʦ���� " << t_arr[i].name << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "    ѧ������ " << t_arr[i].s_arr[j].name
				<<" " << "  ѧ������ " << t_arr[i].s_arr[j].score << endl;
		}
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//����������ʦ������ 
	teacher t_arr[3];
	//ͨ��������������ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(t_arr) / sizeof(t_arr[0]);
	allocateSpace(t_arr, len);
	//��ӡ������ʦ����ѧ����Ϣ
	printinfo(t_arr, len);
	return 0;
}