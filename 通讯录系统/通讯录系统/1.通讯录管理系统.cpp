#include<iostream>
using namespace std;
//联系人结构体
struct person
{
	string name;//姓名
	int gender;//1男 2女
	int age;//年龄
	string phone;//号码
	string address;//地址
};
const int p_max = 1000;
//通讯录结构体
struct address_books
{
	person p_arr[p_max];//通讯录中保存的联系人数组
	int p_size;//通讯录中当前记录的个数
};
void  show_menu()
{
	cout << "**********************" << endl;
	cout << "**** 1.添加联系人 ****" << endl;
	cout << "**** 2.显示联系人 ****" << endl;
	cout << "**** 3.删除联系人 ****" << endl;
	cout << "**** 4.查找联系人 ****" << endl;
	cout << "**** 5.修改联系人 ****" << endl;
	cout << "**** 6.清空联系人 ****" << endl;
	cout << "**** 0.退出通讯录 ****" << endl;
	cout << "**********************" << endl;
}
//1.添加联系人
void add_person(address_books* abs)
{
	//判断通讯录是否已满
	if (abs->p_size == p_max)
	{
		cout << "通讯录已满，无法添加";
		return;
	}
	else
	{
		//添加具体联系人
		//姓名
		string Name;
		cout << "输入姓名：";
		cin >> Name;
		abs->p_arr[abs->p_size].name = Name;
		//性别
		int Gender;
		cout << "输入性别";
		cout << "（1---男 ";
		cout << "2---女 ）：";
		while (1)//while(true)
		{
			cin >> Gender;
			if (Gender == 1 || Gender == 2)
			{
				abs->p_arr[abs->p_size].gender = Gender;
				break;
			}
			cout << "性别输入有误，请重新输入" << endl;
		}

		//年龄
		cout << "输入年龄：";
		int Age;

		while (1)
		{
			cin >> Age;
			if (Age <= 125 && Age > 0)
			{
				abs->p_arr[abs->p_size].age = Age;
				break;
			}
			cout << "年龄输入有误，请重新输入" << endl;
		}


		//电话
		cout << "输入号码：";
		string Phone;
		cin >> Phone;
		abs->p_arr[abs->p_size].phone = Phone;
		//住址
		cout << "输入住址：";
		string Address;
		cin >> Address;
		abs->p_arr[abs->p_size].address = Address;
		//更新通讯录人数
		abs->p_size++;
		//提示用户
		cout << "添加成功" << endl;
		system("pause");//按任意键继续
		system("cls");//清屏，当按下任意键时，会清掉输入的内容
	}
}
//2.显示联系人
void show_person(address_books* abs)
{
	//判断通讯录中人数是否为零，若为0，提示记录为空
	if (abs->p_size == 0)
	{
		cout << "当前的记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->p_size; i++)
		{
			cout << "姓名：" << abs->p_arr[i].name << endl;
			cout << "性别：" << abs->p_arr[i].gender << endl;
			cout << "年龄：" << abs->p_arr[i].age << endl;
			cout << "号码：" << abs->p_arr[i].phone<< endl;
			cout << "住址：" << abs->p_arr[i].address << endl;
			cout << "--------------------------------------"<<endl;
		}
	}
	
	system("pause");
	system("cls");
}

//检测联系人是否存在，若存在返回联系人在数组中的位置，不存在返回-1
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

//3.删除指定联系人
void deleteperson(address_books* abs)
{
	cout << "请输入要删除的联系人：";
	string Name;
	cin >> Name;
	int result =check(abs, Name);
	if (result == -1)
	{
		cout << "查无此人"<<endl;
	}
	else
	{
		//查找到此人，进行删除操作
		for (int i = result; i < abs->p_size; i++)
		{
			//i后每一项数据前移，实现删除目的
			abs->p_arr[i] = abs->p_arr[i + 1];
		}
		abs->p_size--;//更新通讯录中的人员数
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
}
//4.查找联系人
void 	search(address_books* abs)
{
	cout << "请输入你要查找的联系人：";
	string Name;
	cin >> Name;
	int result = check(abs, Name);
	if (result != -1)
	{
		cout << "姓名：" << abs->p_arr[result].name << endl;
		cout << "年龄：" << abs->p_arr[result].age << endl;
		cout << "电话：" << abs->p_arr[result].phone << endl;
		cout << "性别：" << abs->p_arr[result].gender << endl;
		cout << "地址 ：" << abs->p_arr[result].address << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//5.修改联系人
void modify(address_books* abs)
{
	cout << "请输入你要修改的联系人：";
	string Name;
	cin >> Name;
	int result = check(abs, Name);
	if (result != -1)
	{
		while (1)
		{
			int n;
			cout << "请输入你要修改的内容，1--姓名，2--性别，3--年龄，4-号码，5-住址"<<endl;
			cin >> n;
			switch (n)
			{
			case 1://姓名
			{
				string Name;
				cout << "请输入姓名：";
				cin >> Name;
				abs->p_arr[result].name = Name;
			}
				break;
			case 2://性别
			{
				int Gender;

				while (1)
				{
					cout<<"请输入性别：";
					cin >> Gender;
					if (Gender == 1 || Gender == 2)
					{
						abs->p_arr[result].gender = Gender;
						break;
					}
					else
					{
						cout << "请重新输入" << endl;
					}
				}
				

			
			}
				break;
			case 3://年龄
			{
				int Age;
				cout << "请输入年龄：";
				cin >> Age;
				abs->p_arr[result].age =Age;
			}
				break;
			case 4://号码
			{
				string Phone;
				cout << "请输入号码：";
				cin >> Phone;
				abs->p_arr[result].phone = Phone;
			}
				
				break;
			case 5://住址
			{
				string address;
				cout << "请输入地址：";
				cin >> address;
				abs->p_arr[result].address = address;
			}
				break;
			}
			cout << "若修改完成请输入0,若需继续修改请输入1"<<endl;
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
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}
//6.清空联系人
void clean_person(address_books* abs)
{
	abs->p_size = 0;//进行逻辑上的清空
	cout << "通讯录已经清空";
	system("pause");
	system("cls");
}










int main()
{
	//创建通讯录结构体变量
	address_books abs;
	abs.p_size = 0;//初始化通讯录中当前人员个数



	int n;
	while (1)
	{
		show_menu();//显示菜单
		cin >> n;
		switch (n)
		{
		case 1:
			add_person(&abs);//利用地址传递可以修饰实参
			break;//添加
		case 2:
			show_person(&abs);
			break;//显示
		case 3://case 和break中间有很多行代码是要用花括号框起来
			/*{
				cout << "请输入联系人的姓名：" ;
				string Name;
				cin >> Name;
				if (check(&abs, Name) == -1)
				{
					cout << "查无此人" << endl;
				}
				else
				{
					cout << "找到此人" << endl;
				}
			}*/
			deleteperson(&abs);

			break;//删除
		case 4:
			search(&abs);
			break;//查找
		case 5:
			modify(&abs);
			break;//修改
		case 6:
			clean_person(&abs);
		case 0:
		{
			cout << "欢迎下次使用" << endl;
			system("pause");//按任意键继续
			return 0;//实现退出功能
			break;//退出
		}
			
		default:
			break;
		}
	}


		system("pause");
		return 0;
	
}

	

	
