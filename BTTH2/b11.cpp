#include<iostream>
using namespace std;

int tongmang(int a[], int n)
{
	if (n == 1)
		return a[0];
	return a[n-1] + tongmang(a, n - 1);
}

int sum = 0;
void tongmang2(int a[], int n)
{
	if (n == 1)
	{
		cout << sum;
		return;
	}
	sum += a[n - 1];
	tongmang2(a, n - 1);
}

int main()
{
	int a[5] = { 5,5,5,5,5 };
	int n = 5;
	tongmang2(a, n);
	system("pause");
}