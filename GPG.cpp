#include<iostream>
using namespace std;

class GPG {
	int hours, minutes, second;
public:
	GPG();
	void Nhap();
	void Xuat();
	int Distance(GPG x);
};

GPG::GPG()
{
	hours = 0;
	minutes = 0;
	second = 0;
}

void GPG::Nhap()
{
	cout << "Nhap gio :";
	cin >> hours;
	cout << "Nhap phut: ";
	cin >> minutes;
	cout << "Nhap giay: ";
	cin >> second;
}

void GPG::Xuat()
{
	cout << "Gio: " << hours << endl;
	cout << "Phut: " << minutes << endl;
	cout << "Giay: " << second << endl;
}

int GPG::Distance(GPG x)
{
	int sums = 0;
	int h = abs(hours - x.hours);
	int m = abs(minutes - x.minutes);
	int s = abs(second - x.second);
	sums = h * 3600 + m * 60 + s;
	return sums;
}

int main()
{
	GPG X, Y;
	X.Nhap();
	Y.Nhap();
	cout << "distance: " << X.Distance(Y) << endl;
	system("pause");
}