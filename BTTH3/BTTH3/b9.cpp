#include<iostream>
using namespace std;

bool isPrime(int n)
{
	if (n < 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n%i == 0)
			return false;
	return true;
}
void nhap(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> a[i][j];
}

void xuat(int **a, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

int sumPrime(int **a, int r, int c)
{
	int sum = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (isPrime(a[i][j]))
				sum += a[i][j];
	return sum;
}

int main()
{
	int r, c;
	cin >> r >> c;
	int **a = new int *[r];
	for (int i = 0; i < r; i++)
		a[i] = new int[c];
	nhap(a, r, c);
	xuat(a, r, c);
	cout << sumPrime(a, r, c)<<endl;
	delete[] a;
	return 0;
}