#include <iostream>
using namespace std;

class Cube
{
public:
	void set(int newL, int newW, int newH);
	void getS();


private:
	int L, W, H;
};
void Cube::set(int newL, int newW, int newH)
{
	L = newL;
	W = newW;
	H = newH;
}

void Cube::getS()
{
	cout<<"±íÃæ»ý£º" << (L * W + L * W + W * H);
}


int main()
{
	Cube cube;
	cube.set(1, 2, 3);
	cube.getS();
	return 0;
}
