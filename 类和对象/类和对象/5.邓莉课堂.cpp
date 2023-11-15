#include<iostream>
using namespace std;
class clock
{
public:
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	
	void showTime();
	
private:
	int h, m, s;
};

void clock::setTime(int newH, int newM, int newS)//clock::是作用域限制符
{
	h = newH;
	m = newM;
	s = newS;
}

inline void clock::showTime()
{
	cout << h <<":" << m <<":" << s << endl;
}


int main()
{

	return 0;
}