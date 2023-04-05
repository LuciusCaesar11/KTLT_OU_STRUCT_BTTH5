#pragma once
class Phanso
{
	int Tuso;
	int Mauso;
public:
	Phanso();
	Phanso(int tu, int mau);
	int UCLN(int a, int b);
	Phanso Rutgon();
	void Nhap();
	void Xuat();
	Phanso cong(Phanso x);
	Phanso tru(Phanso x);
	Phanso nhan(Phanso x);
	Phanso chia(Phanso x);
};

