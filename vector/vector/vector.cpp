#include<iostream>
#include<vector>//ʹ��vector��Ҫ���vectorͷ�ļ�
//vector ʵ������һ�����ࡱ
using namespace std;
int main()
{
	//Ĭ�ϳ�ʼ��
	vector <int>v1;//vector <��������> ����
	//�б��ʼ����������ʼ����
	vector<short>v2 = { 1,2,3,4,5 };//=���Բ�д
	vector<char>v3{ 'a','b','c','d','e'};
	//ֱ�ӳ�ʼ��
	vector<long>v4(5);//��5��Ԫ��
	vector<long>v5(5, 30);//��5��Ԫ�أ��Ҿ�Ϊ30

//����Ԫ��

	v3.push_back('f');//����push_back()�������������ֵ�Ĳ���
	int	len = v3.size();//����   size()    �������ɵõ����ȣ�size()��vector���һ����Ա������
	
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
		cout << i << "\t";//���ASCII��
	}
	return 0;
}