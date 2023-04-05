#include<iostream>
#include<string>
using namespace std;

struct NHANVIEN {
	string Manv;
	string Hoten;
	int namlam;
	int namsinh;
};

void nhap(NHANVIEN &nv)
{
	cout << "nhap ma nv: ";
	getline(cin, nv.Manv);
	cout << "nhap hoten: ";
	getline(cin, nv.Hoten);
	fflush(stdin);
	cout << "nhap nam vao lam: ";
	cin >> nv.namlam;
	cout << "nhap nam sinh: ";
	cin >> nv.namsinh;
}

void xuat(NHANVIEN nv)
{
	cout << "ma nv: " << nv.Manv << endl;
	cout << "hoten nv: " << nv.Hoten << endl;
	cout << "nam vao lam nv: " << nv.namlam << endl;
	cout << "nam sinh nv: " << nv.namsinh << endl;
}

void age(NHANVIEN nv)
{
	cout << "tuoi nhan vien: " << 2023 - nv.namsinh << endl;
	cout << "tham nien: " << 2023 - nv.namlam;
}
int main()
{
	NHANVIEN nv;
	nhap(nv);
	xuat(nv);
	age(nv);
	system("pause");
}