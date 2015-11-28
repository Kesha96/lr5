#pragma once
#include <iostream>
using namespace std;
class Stalk
{
	int length;
	bool thorns;
public:
	Stalk()
	{
		cout << "Constructor Stack" << endl;
	}
	~Stalk()
	{
		cout << "Destr Stalk" << endl;
	}
	void SetLength(int l)
	{
		length = l;
	}
	void SetThornsh(bool t)
	{
		thorns = t;
	}
	int GetLength()
	{
		return length;
	}
	int GetThorns()
	{
		return thorns;
	}
	void StalkPrint()
	{
		cout << "Stalk length - " << length << endl;
		if (thorns)
		{
			cout << "scratchy" << endl;
		}
		else
		{
			cout << "smooth" << endl;
		}
	}
};
