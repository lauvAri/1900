#include<iostream>
using namespace std;
/*���ַ���
* 1.���������ࣺ�вι�����޲ι���
* 2.�����ͷ��ࣺ��ͨ����Ϳ�������
*/
/*���ֵ��÷�ʽ
* 1.���ŷ�
* 2.��ʾ��
* 3.��ʽת����
*/

class Person
{
public:
	Person()
	{
		cout << "Person���޲ι��죨Ĭ�Ϲ��죩��������" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person& p)//const��ǰ�����൱�ڳ���ָ�룬�����൱��ָ�볣��
	{
		//������������ϵ��������ԣ�������������
		age = p.age;
		cout << "Person�Ŀ������캯������" << endl;
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}
	int age;
};

//����
void test01()
{
	//���ŷ�
	cout << "���ŷ�" << endl;
	Person p1;//Ĭ��
	Person p2(10);//�в�
	Person p3(p2);//����
	cout << "p2������Ϊ" << p2.age << endl;
	cout << "p3������Ϊ" << p3.age << endl;
	/*ע������
	* ����Ĭ�Ϲ��캯��ʱ��Ҫ�ӣ���������������Ϊ����һ�������������������ڲ�����д����������������������Ϊ�ڴ�������
	*/


	//��ʾ��
	cout << "��ʾ��" << endl;
	Person p4;//Ĭ��
	Person p5 = Person(10);//�в�
	Person p6 = Person(p4);//����
	
	//Person(10);// ��һ����������  �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//cout << "hello world" << endl;

	/*ע������
	* ��Ҫ�ÿ������캯��ȥ��ʼ���������� ����������ΪPerson(p3)===Person p3;(����������)
	*/
	//Person(p6);//�ض���


	//��ʽת����
	cout << "��ʽת����" << endl;
	Person p7 = 10;//�൱��   д��   Person p7=Person��10����
	Person p8 = p7;
	cout << endl;
}
int main()
{
	test01();
	cin.get();
	return 0;
}