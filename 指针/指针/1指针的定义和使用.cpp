#include<iostream>
using namespace std;
int main()
{
	//�ڴ��Ŵ�0��ʼ��һ��Ϊʮ��������
	// ָ����������¼��ַ��ŵ�,������ָ���������ַ
	int a = 100;
	int* p=&a;
	cout << "a�ĵ�ַΪ��" <<p << endl;
	cout << sizeof(p) << endl;//32λռ4���ֽڣ�64Ϊռ8���ֽ� 
	*p = 999;//������
	cout << a << "  " << *p << endl;
	return 0;
}