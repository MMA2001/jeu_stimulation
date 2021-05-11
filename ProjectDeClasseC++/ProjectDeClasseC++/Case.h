#pragma once
#include<iostream>
using namespace std;
class Case
{
	int x, y;
public:
	Case(int a, int b):x(a),y(b)
	{
		cout << "constructeur case" << endl;
	}
	~Case() {
		cout << "destructeur case" << endl;
	}
	Case& operator=(Case& c)
	{
		x = c.x;
		y = c.y;
	}
	//bool estvide(){}

	bool adjacente(Case a, Case b)
	{
		return (a.x == b.x + 1 || a.x == b.x - 1 || a.y == b.y + 1 || a.y == b.y - 1);
	}
	int getx() const
	{
		return x;
	}
	int gety() const
	{
		return y;
	}
	void setx(int a)
	{
		x = a;
	}
	void sety(int a)
	{
		y = a;
	}
};

