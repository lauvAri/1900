#pragma once
#include<iostream>
using namespace std;
class point
{
public:
void setXY(int newX,int newY)
	{
	x = newX;
	y = newY;
	}
int getX()
{
	return x;
}
int getY()
{
	return y;
}
private:
int x, y;
};
