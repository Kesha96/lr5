#include "stdafx.h"
#include "Print.h"

#include "Robot.h"
#include "Suchnost.h"

void main()
{
	Rose MyRose1;
	MyRose1.SetColor("Red");
	MyRose1.stalk.SetLength(30); 
	MyRose1.stalk.SetThornsh(true);
	MyRose1.Pack.SetMaterial("Plastick");
	MyRose1.setCost(200);
	
	Chrys MyChr1;
	MyChr1.SetColor("White");
	MyChr1.stalk.SetLength(20);
	MyChr1.stalk.SetThornsh(false);
	MyChr1.Pack.SetMaterial("Cartbord");
	MyChr1.setCost(150);
	
	Chrys MyChr2;
	MyChr2.SetColor("White");
	MyChr2.stalk.SetLength(10);
	MyChr2.stalk.SetThornsh(false);
	MyChr2.Pack.SetMaterial("Cartbord");
	MyChr2.setCost(100);

	Robot *R = new Robot;
	R->Add(&MyChr1);
	R->Add(&MyRose1);
	R->Add(&MyChr2);
	cout << "00000000000000000000000000" << endl;
	
	R->show();
	cout << "00000000000000000000000000" << endl;
	Suchnost S;
	S.Sort(R);
	R->show();
	cout << "00000000000000000000000000" << endl;
	S.Delta(R, 15, 25);
	cout << "00000000000000000000000000" << endl;
	S.Cost(R);
	system("pause");
}
