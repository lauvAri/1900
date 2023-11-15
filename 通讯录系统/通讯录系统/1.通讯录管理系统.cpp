#include<iostream>
using namespace std;
//��ϵ�˽ṹ��
struct person
{
	string name;//����
	int gender;//1�� 2Ů
	int age;//����
	string phone;//����
	string address;//��ַ
};
const int p_max = 1000;
//ͨѶ¼�ṹ��
struct address_books
{
	person p_arr[p_max];//ͨѶ¼�б������ϵ������
	int p_size;//ͨѶ¼�е�ǰ��¼�ĸ���
};
void  show_menu()
{
	cout << "**********************" << endl;
	cout << "**** 1.�����ϵ�� ****" << endl;
	cout << "**** 2.��ʾ��ϵ�� ****" << endl;
	cout << "**** 3.ɾ����ϵ�� ****" << endl;
	cout << "**** 4.������ϵ�� ****" << endl;
	cout << "**** 5.�޸���ϵ�� ****" << endl;
	cout << "**** 6.�����ϵ�� ****" << endl;
	cout << "**** 0.�˳�ͨѶ¼ ****" << endl;
	cout << "**********************" << endl;
}
//1.�����ϵ��
void add_person(address_books* abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->p_size == p_max)
	{
		cout << "ͨѶ¼�������޷����";
		return;
	}
	else
	{
		//��Ӿ�����ϵ��
		//����
		string Name;
		cout << "����������";
		cin >> Name;
		abs->p_arr[abs->p_size].name = Name;
		//�Ա�
		int Gender;
		cout << "�����Ա�";
		cout << "��1---�� ";
		cout << "2---Ů ����";
		while (1)//while(true)
		{
			cin >> Gender;
			if (Gender == 1 || Gender == 2)
			{
				abs->p_arr[abs->p_size].gender = Gender;
				break;
			}
			cout << "�Ա�������������������" << endl;
		}

		//����
		cout << "�������䣺";
		int Age;

		while (1)
		{
			cin >> Age;
			if (Age <= 125 && Age > 0)
			{
				abs->p_arr[abs->p_size].age = Age;
				break;
			}
			cout << "����������������������" << endl;
		}


		//�绰
		cout << "������룺";
		string Phone;
		cin >> Phone;
		abs->p_arr[abs->p_size].phone = Phone;
		//סַ
		cout << "����סַ��";
		string Address;
		cin >> Address;
		abs->p_arr[abs->p_size].address = Address;
		//����ͨѶ¼����
		abs->p_size++;
		//��ʾ�û�
		cout << "��ӳɹ�" << endl;
		system("pause");//�����������
		system("cls");//�����������������ʱ����������������
	}
}
//2.��ʾ��ϵ��
void show_person(address_books* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ�㣬��Ϊ0����ʾ��¼Ϊ��
	if (abs->p_size == 0)
	{
		cout << "��ǰ�ļ�¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->p_size; i++)
		{
			cout << "������" << abs->p_arr[i].name << endl;
			cout << "�Ա�" << abs->p_arr[i].gender << endl;
			cout << "���䣺" << abs->p_arr[i].age << endl;
			cout << "���룺" << abs->p_arr[i].phone<< endl;
			cout << "סַ��" << abs->p_arr[i].address << endl;
			cout << "--------------------------------------"<<endl;
		}
	}
	
	system("pause");
	system("cls");
}

//�����ϵ���Ƿ���ڣ������ڷ�����ϵ���������е�λ�ã������ڷ���-1
int check(address_books*abs,string Name)
{
	for (int i = 0; i < abs->p_size; i++)
	{
		if (abs->p_arr[i].name == Name)
		{
			return i;
		}
	}
	return -1;

}

//3.ɾ��ָ����ϵ��
void deleteperson(address_books* abs)
{
	cout << "������Ҫɾ������ϵ�ˣ�";
	string Name;
	cin >> Name;
	int result =check(abs, Name);
	if (result == -1)
	{
		cout << "���޴���"<<endl;
	}
	else
	{
		//���ҵ����ˣ�����ɾ������
		for (int i = result; i < abs->p_size; i++)
		{
			//i��ÿһ������ǰ�ƣ�ʵ��ɾ��Ŀ��
			abs->p_arr[i] = abs->p_arr[i + 1];
		}
		abs->p_size--;//����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");
}
//4.������ϵ��
void 	search(address_books* abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ�";
	string Name;
	cin >> Name;
	int result = check(abs, Name);
	if (result != -1)
	{
		cout << "������" << abs->p_arr[result].name << endl;
		cout << "���䣺" << abs->p_arr[result].age << endl;
		cout << "�绰��" << abs->p_arr[result].phone << endl;
		cout << "�Ա�" << abs->p_arr[result].gender << endl;
		cout << "��ַ ��" << abs->p_arr[result].address << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//5.�޸���ϵ��
void modify(address_books* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�";
	string Name;
	cin >> Name;
	int result = check(abs, Name);
	if (result != -1)
	{
		while (1)
		{
			int n;
			cout << "��������Ҫ�޸ĵ����ݣ�1--������2--�Ա�3--���䣬4-���룬5-סַ"<<endl;
			cin >> n;
			switch (n)
			{
			case 1://����
			{
				string Name;
				cout << "������������";
				cin >> Name;
				abs->p_arr[result].name = Name;
			}
				break;
			case 2://�Ա�
			{
				int Gender;

				while (1)
				{
					cout<<"�������Ա�";
					cin >> Gender;
					if (Gender == 1 || Gender == 2)
					{
						abs->p_arr[result].gender = Gender;
						break;
					}
					else
					{
						cout << "����������" << endl;
					}
				}
				

			
			}
				break;
			case 3://����
			{
				int Age;
				cout << "���������䣺";
				cin >> Age;
				abs->p_arr[result].age =Age;
			}
				break;
			case 4://����
			{
				string Phone;
				cout << "��������룺";
				cin >> Phone;
				abs->p_arr[result].phone = Phone;
			}
				
				break;
			case 5://סַ
			{
				string address;
				cout << "�������ַ��";
				cin >> address;
				abs->p_arr[result].address = address;
			}
				break;
			}
			cout << "���޸����������0,��������޸�������1"<<endl;
			int m = 0;
			cin >> m;
			if (m == 0)
			{
				break;
			}
			else if(m==1)
			{
				continue;
			}
				
		}
		
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
//6.�����ϵ��
void clean_person(address_books* abs)
{
	abs->p_size = 0;//�����߼��ϵ����
	cout << "ͨѶ¼�Ѿ����";
	system("pause");
	system("cls");
}










int main()
{
	//����ͨѶ¼�ṹ�����
	address_books abs;
	abs.p_size = 0;//��ʼ��ͨѶ¼�е�ǰ��Ա����



	int n;
	while (1)
	{
		show_menu();//��ʾ�˵�
		cin >> n;
		switch (n)
		{
		case 1:
			add_person(&abs);//���õ�ַ���ݿ�������ʵ��
			break;//���
		case 2:
			show_person(&abs);
			break;//��ʾ
		case 3://case ��break�м��кܶ��д�����Ҫ�û����ſ�����
			/*{
				cout << "��������ϵ�˵�������" ;
				string Name;
				cin >> Name;
				if (check(&abs, Name) == -1)
				{
					cout << "���޴���" << endl;
				}
				else
				{
					cout << "�ҵ�����" << endl;
				}
			}*/
			deleteperson(&abs);

			break;//ɾ��
		case 4:
			search(&abs);
			break;//����
		case 5:
			modify(&abs);
			break;//�޸�
		case 6:
			clean_person(&abs);
		case 0:
		{
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");//�����������
			return 0;//ʵ���˳�����
			break;//�˳�
		}
			
		default:
			break;
		}
	}


		system("pause");
		return 0;
	
}

	

	
