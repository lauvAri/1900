#include<iostream>
using namespace std;
//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};
//������ʦ�ṹ��
struct teacher
{
	string name;
	int id;
	int age;
	struct student stu;//Ƕ��ѧ���ṹ�壬Ҫ����ʦ�ṹ��ǰ����
};
int main()
{
	//������ʦ
	struct teacher t1 = { "Jack", 001,34 };//Ҳ����ֱ�Ӱ�ѧ����Ϣ���ڴ�������
	/*t1.name = "Jack";
	t1.id = 001;
	t1.age = 34;*/
	t1.stu.name = "Allie";
	t1.stu.age = 18;
	t1.stu.score = 98;
	cout << t1.name << " " << t1.id << " " << t1.age << endl;
	cout << t1.stu.name <<" " << t1.stu.age <<" " << t1.stu.score << endl;
	return 0;
}
