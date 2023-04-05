#include "Phanso.h"
#include<iostream>
using namespace std;

Phanso::Phanso()
{
	Tuso = 1;
	Mauso = 1;
}

//constructor ham dung truyen tham so 
Phanso::Phanso(int tu, int mau)
{
	Tuso = tu;
	Mauso = mau;
}

int Phanso::UCLN(int a, int b)
{
	if (b == 0)
		return a;
	return UCLN(b, a%b);
}

Phanso Phanso::Rutgon()
{
	int ucln = UCLN(Tuso, Mauso);
	Tuso /= ucln;
	Mauso /= ucln;
	return *this;
}

void Phanso::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> Tuso;
	cout << "Nhap mau so: ";
	cin >> Mauso;
}

void Phanso::Xuat()
{
	cout << Tuso << " / " << Mauso << endl;
}

Phanso Phanso::cong(Phanso x)
{
	Phanso ps;
	ps.Tuso = Tuso*x.Mauso + x.Tuso*Mauso;
	ps.Mauso = Mauso*x.Mauso;
	ps.Rutgon();
	return ps;
}

Phanso Phanso::tru(Phanso x)
{
	Phanso ps;
	ps.Tuso = Tuso*x.Mauso - x.Tuso*Mauso;
	ps.Mauso = Mauso*x.Mauso;
	ps.Rutgon();
	return ps;
}

Phanso Phanso::nhan(Phanso x)
{
	Phanso ps;
	ps.Tuso = Tuso*x.Tuso;
	ps.Mauso = Mauso*x.Mauso;
	ps.Rutgon();
	return ps;
}

Phanso Phanso::chia(Phanso x)
{
	Phanso ps;
	ps.Tuso = Tuso*x.Mauso;
	ps.Mauso = Mauso*x.Tuso;
	ps.Rutgon();
	return ps;
}
int main()
{
	Phanso s1, s2;
	s1.Nhap();
	s2.Nhap();
	Phanso tong = s1.cong(s2);
	tong.Xuat();
	Phanso hieu = s1.tru(s2);
	hieu.Xuat();
	Phanso tich = s1.nhan(s2);
	tich.Xuat();
	Phanso thuong = s1.chia(s2);
	thuong.Xuat();
	system("pause");
}