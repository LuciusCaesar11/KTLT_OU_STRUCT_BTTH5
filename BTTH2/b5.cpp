#include<iostream>
using namespace std;

int dem(int n)
{
	if (n < 10)
		return 1;
	return 1 + dem(n / 10);
}

int main()
{
	int n;
	cin >> n;
	cout << dem(n);
	system("pause");
}