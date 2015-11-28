#pragma once
#include "Flower.h"
#include "Packing.h"
class Rose :public Flower
{
public:
	Rose()
	{
		cout << "Constructor Rose" << endl;
		SetType(2);
	}
	~Rose()
	{
		cout << "Destr Rose" << endl;
	}
	Packing Pack;
	virtual void print()
	{
		cout << "Rose" << endl;
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
