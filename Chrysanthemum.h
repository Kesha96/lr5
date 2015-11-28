#pragma once
#include "Flower.h"
#include "Packing.h"
class Chrys :public Flower
{
public:
	Chrys()
	{
		cout << "Constructor Chrys" << endl;
		SetType(1);
	}
	~Chrys()
	{
		cout << "Destr Chrys" << endl;
	}
	Packing Pack;
	virtual void print()
	{
		cout << "Chrysantemium" << endl;
		cout << "Pack - " << Pack.GetMaterial() << endl;
		cout << "Color - " << GetColor() << endl;
		cout << "Stalk length - " << stalk.GetLength() << endl;
		cout << "Stalk - ";
		if (stalk.GetThorns())
		{
			cout << "scratchy" << endl;
		}
		else
		{
			cout << "smooth" << endl;
		}
	}
};
