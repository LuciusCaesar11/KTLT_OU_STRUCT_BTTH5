#include<iostream>
#include<string>
using namespace std;

struct PHONGBAN {
	string MaPhongBan;
	string TenPhongBan;
};

void nhap(PHONGBAN &PB)
{
	cout << "Nhap ma phong ban: ";
	getline(cin, PB.MaPhongBan);
	fflush(stdin);
	cout << "Nhap ten phong ban: ";
	getline(cin, PB.TenPhongBan);
}

void xuat(PHONGBAN PB)
{
	cout << "Ma phong ban: " << PB.MaPhongBan<<endl;
	cout << "Ten phong ban: " << PB.TenPhongBan;
}

int main()
{
	PHONGBAN PB;
	nhap(PB);
	xuat(PB);
	system("pause");
}
