#include<iostream>
using namespace std;

struct PhanSo {
	int tuso;
	int mauso;
};

void nhap(PhanSo &PS)
{
	cout << "Nhap tu so: ";
	cin >> PS.tuso;
	cout << "Nhap mau so: ";
	cin >> PS.mauso;
}
int tong(PhanSo PS)
{
	return PS.tuso + PS.mauso;
}

int hieu(PhanSo PS)
{
	return PS.tuso - PS.mauso;
}

int tich(PhanSo PS)
{
	return PS.tuso * PS.mauso;
}

int thuong(PhanSo PS)
{
	if (PS.mauso == 0)
		return -1;
	return PS.tuso / PS.mauso;
}
int main()
{
	PhanSo PS;
	nhap(PS);
	cout << "tong: " << tong(PS) << endl;
	cout << "hieu: " << hieu(PS) << endl;
	cout << "tich: " << tich(PS) << endl;
	cout << "thuong: " << thuong(PS) << endl;
	system("pause");
}