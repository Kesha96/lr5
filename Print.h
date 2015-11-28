#pragma once
#include "Rose.h"
#include "Chrysanthemum.h"
#include <iostream>
using namespace std;
class MyPrint
{
public:
	MyPrint()
	{
		cout << "Constructor MyPrint" << endl;
	}
	~MyPrint()
	{
		cout << "Destr MyPrint" << endl;;
	}
	virtual void Pr(Rose p)
	{ 
		cout << "Print rose" << endl;
	}
	virtual void Pr(Chrys p)
	{
		cout << "Print chrys" << endl;
	}
};
class RPrint:public MyPrint
{
public:
	RPrint()
	{
		cout << "Constructor Rprint" << endl;
	}
	~RPrint()
	{
		cout << "Destr RPrint" << endl;
	}
	virtual void Pr(Rose p)
	{
		cout << "Rose" << endl;
		cout << "Pack - " << p.Pack.GetMaterial() << endl;
		cout << "Color - " << p.GetColor() << endl;
		cout << "Stalk length - " << p.stalk.GetLength() << endl;
		cout << "Stalk - ";
		if (p.stalk.GetThorns())
		{
			cout << "scratchy" << endl;
		}
		else
		{
			cout << "smooth" << endl;
		}
	}
};
class ChrPrint :public MyPrint
{
public:
	ChrPrint()
	{
		cout << "Constructor ChrPrint" << endl;
	}
	~ChrPrint()
	{
		cout << "Destr ChrPrint" << endl;
	}
	virtual void Pr(Chrys p)
	{
		cout << "Chrysanthemum" << endl;
		cout << "Pack - " << p.Pack.GetMaterial() << endl;
		cout << "Color - " << p.GetColor() << endl;
		cout << "Stalk length - " << p.stalk.GetLength() << endl;
		cout << "Stalk - ";
		if (p.stalk.GetThorns())
		{
			cout << "scratchy" << endl;
		}
		else
		{
			cout << "smooth" << endl;
		}
	}
};
