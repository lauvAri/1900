#include<iostream>
using namespace std;
//�����Ķ���
int max()
{
	cout << "��������������:";
	int i(0), j(0);
	cin >> i>> j;
	return i > j ? i : j;
}
//��������������ǰ���߱����������Ĵ���
int max();
int main()
{
	cout<<"�ϴ����Ϊ��" << max();
}