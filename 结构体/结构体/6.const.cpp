#include<iostream>
using namespace std;
//����ṹ��
struct student
{
	string name;
	int age;
	int score;
};
//�����������
//ʹ�õ�ַ���ݣ����´����һ��ָ��ֻռ4���Ľڣ���ʡ�˿ռ䣬��������Ч�ʡ�
// ����ֵ���ݻ���ȫ���Ƴ���һ�������������ݹ���ʱ��ռ�ù���ռ䡣

void printstudent(const student *s)//ʹ�ó���ָ�룬�ﵽֻ����д�Ĺ���
{
	//s->age = 100;���д���ᱨ������ʾ���ʽ�����ǿ��޸ĵ���ֵ
	cout << (*s).name <<" " <<(*s).age <<" " << (*s).score << endl;
}
int main()
{
	//�����ṹ�����
	struct student s1= { "zhangsan",18,89 };
	printstudent(& s1);
}