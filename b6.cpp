#include<iostream>
#include<string>
using namespace std;

struct SanPham {
	char Masp[10];
	string Tensp;
	double Dongia;
	int Soluong;
};
void xoadong(char a[])
{
	int len = strlen(a);
	if (a[len - 1] == '\n') a[len - 1] = '\0';
}
//c[strcspn(c, "\n")] = '\0';
void nhap(SanPham *ql)
{
	cout << "nhap ma san pham: ";
	fgets(ql->Masp, sizeof(ql->Masp), stdin);
	xoadong(ql->Masp);
	cout << "nhap ten san pham: ";
	getline(cin, ql->Tensp);
	cout << "nhap don gia: ";
	cin >> ql->Dongia;
	cout << "nhap so luong: ";
	cin >> ql->Soluong;
	getchar();
}

void xuat(SanPham *ql)
{
	cout << "ma san pham:" << ql->Masp << endl;
	cout << "ten san pham:" << ql->Tensp << endl;
	cout << "don gia san pham:" << ql->Dongia << endl;
	cout << "so luong san pham:" << ql->Soluong << endl;
}

void NhapDs(SanPham *ql, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin san pham " << i << ": ";
		nhap(ql + i);
	}
}

void XuatDs(SanPham *ql, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Thong tin san pham " << i << ": " << endl;
		xuat(ql + i);
	}
}

void Sua(SanPham *ql, int n)
{
	int vt;
	cout << "chon sp sua tt: ";
	cin >> vt;
	getchar();
	for (int i = 0; i < n; i++)
		if (vt == i)
			nhap(ql + i);
}

void Xoa(SanPham *ql, int &n)
{
	int vt;
	cout << "chon sp can xoa: ";
	cin >> vt;
	getchar();
	for (int i = vt; i < n; i++)
		*(ql + i) = *(ql + i + 1);
	n--;
}

void Sx(SanPham *ql, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (((ql + i)->Soluong)>((ql + j)->Soluong))
				swap(((ql + i)->Soluong),((ql + j)->Soluong));
}
int main()
{
	SanPham *qlsp;
	int n;
	cout << "nhap so luong sp: ";
	cin >> n;
	qlsp = new SanPham[n];
	getchar();
	NhapDs(qlsp, n);
	Sua(qlsp, n);
	XuatDs(qlsp, n);
	Xoa(qlsp, n);
	XuatDs(qlsp, n);
	Sx(qlsp, n);
	XuatDs(qlsp, n);
	delete[] qlsp;
	system("pause");
}