#include<iostream>
using namespace std;
void fun1()
{
	std::cout << "welcome to my web" << std::endl;
}
void fun2(float f)
{
	cout << "fµÄÖµÎª" << f << endl;
}
double fun3()
{
	cout << "this is fun3" << " ";
	return 3.14;
}
int fun4(int ai)
{
	cout << "this is fun4  " ;
	return ai;
}
int main()
{
	 fun1();
	 fun2(7.34);
	 double pi = fun3();
	 cout <<"pi=" << pi << endl;
	int i= fun4(5);
	 cout << "we kown that i=" <<i<< endl;
}