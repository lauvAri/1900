#include<iostream>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
//��ӡѧ����Ϣ�ĺ���
//1.ֵ����
void printstudent1(struct student s)
{
	s.age = 100;
	cout << "���Ӻ���1�д�ӡ��" << s.name << " " << s.age << " " << s.score << endl;
}
//2.��ַ����
void printstudent2(struct student *s)
{
	s->age = 200;
	cout<< "���Ӻ���2�д�ӡ��" << (*s).name << " " <<( *s).age << " " <<(* s).score << endl;
	cout<< "���Ӻ���2�д�ӡ��" << s->name << " " << s->age << " " << s->score << endl;
}
int main()
{
	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ���Ϣ

	//�����ṹ�����
	struct student s;
		s.name = "zhangsan";
		s.age = 18;
		s.score = 90;

		printstudent1(s);

		printstudent2(&s);

		cout << "��main�����д�ӡ��" << s.name << " " << s.age << " " << s.score << endl;
	system("pause");
	return 0;
}