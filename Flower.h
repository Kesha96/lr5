#pragma once
#include "Stalk.h"
#include <String>
#include <iostream>
using namespace std;
class Rastenie
{
	virtual void print() = 0;
};
class Flower: public Rastenie
{
	string color;
	short int type;
	int cost;
public: 
	Flower()
	{
		cout << "Constructor Flower" << endl;
	}
	~Flower()
	{
		cout << "Destr Flower" << endl;
	}
	Stalk stalk;
	void setCost(int c)
	{
		cost = c;
	}
	int GetCost()
	{
		return cost;
	}
	void SetColor(string s)
	{
		color = s;
	}
	string GetColor()
	{
		return color;
	}
	void SetType(short int a)
	{
		type = a;
	}
	short int GetType()
	{
		return type;
	}
	virtual void print()
	{
		cout << "Color - " << color << endl;
		stalk.StalkPrint();
	}
};
