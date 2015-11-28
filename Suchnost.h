#pragma once
#include "Robot.h"


class Suchnost
{
public:
	void Sort(Robot *r)//сортировка на основе размера цветка
	{
		int l = r->Length();
		int sort = 0;
		while (sort != l)
		{
			int max = r->Get(l - 1)->stalk.GetLength();
			int maxn = l - 1;
			for (int i = l - 2;i >= sort;i--)
			{
				if (r->Get(i)->stalk.GetLength() > max)
				{
					max = r->Get(i)->stalk.GetLength();
					maxn = i;
				}
			}
			Flower *buf = r->Get(maxn);
			if (!buf)
			{
				cout << "Error!" << endl;
				return;
			}
			if (!r->Del(maxn))
			{
				cout << "Error!" << endl;
				return;
			}
			r->Add(buf);
			sort++;
		}
	}
	void Delta(Robot *r, int a, int b) //нахождение цветка соответ диапазона
	{
		for (int i = 0; i < r->Length();i++)
		{
			if (r->Get(i)->stalk.GetLength()> a && r->Get(i)->stalk.GetLength() < b)
			{
				r->Get(i)->print();
			}
		}
	}
	void Cost(Robot *r)
	{
		int summ = 0;
		for (int i = 0; i < r->Length();i++)
		{
			summ = summ + r->Get(i)->GetCost();
		}
		cout << "COST = " << summ << endl;
	}
};
