#include<iostream>
#include<string>
using namespace std;

struct SinhVien {
	string Maso;
	string Hoten;
	string Diachi;
	int Namsinh;
	double Dtoan;
	double Dvan;
	double Danh;
};
void Nhap(SinhVien *sv)
{
	cout << "nhap ma so sv: ";
	getline(cin, sv->Maso);
	cout << "nhap hoten sv: ";
	getline(cin, sv->Hoten);
	cout << "nhap dia chi sv: ";
	getline(cin, sv->Diachi);
	fflush(stdin);
	cout << "nhap nam sinh: ";
	cin >> sv->Namsinh;
	cout << "nhap diem toan: ";
	cin >> sv->Dtoan;
	cout << "nhap dien van: ";
	cin >> sv->Dvan;
	cout << "nhap diem anh: ";
	cin >> sv->Danh;
	getchar();
}

void NhapDsSinhVien(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap thong tin sv thu " << i << " : "<<endl;
		Nhap(&sv[i]);
	}
}

void Xuat(SinhVien sv)
{
	cout << "ma so: " << sv.Maso << endl;
	cout << "ho ten: " << sv.Hoten << endl;
	cout << "dia chi: " << sv.Diachi << endl;
	cout << "nam sinh: " << sv.Namsinh << endl;
	cout << "diem toan: " << sv.Dtoan << endl;
	cout << "diem van: " << sv.Dvan << endl;
	cout << "diem anh: " << sv.Danh << endl;
	cout << "diem trung binh: " << ((sv.Dtoan + sv.Dvan) * 2 + sv.Danh) / 5 << endl;
	double tb = ((sv.Dtoan + sv.Dvan) * 2 + sv.Danh) / 5;
	if (tb > 8)
		cout << "xep loai gioi " << endl;
	else if (tb<8 && tb>6.5)
		cout << "xep loai kha " << endl;
	else if (tb > 5 && tb < 6.5)
		cout << "xep loai trung binh " << endl;
	else if (tb < 5)
		cout << " xep loai duoi tb " << endl;
}
void XuatDsSinhVien(SinhVien sv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "thong tin sinh vien thu " << i << ": "<<endl;
		Xuat(sv[i]);
		cout << endl;
	}
}
void XuatThongTinSvYeuCau(SinhVien sv[])
{
	int n;
	cout << "Ban chon sinh vien nao de xuat: ";
	cin >> n;
	Xuat(sv[n]);
}

int main()
{
	SinhVien *sv;
	int n;
	cin >> n;
	getchar();
	sv = new SinhVien[n];
	NhapDsSinhVien(sv, n);
	XuatDsSinhVien(sv, n);
	delete[] sv;
	system("pause");
}