#include<iostream>
using namespace std;

int cauA(int n)
{
	if (n == 1)
		return 1;
	return n + cauA(n--);
}

int cauB(int n)
{
	if (n == 1)
		return 1;
	return pow(n, 2) + cauB(n - 1);
}

int cauC(int n)
{
	if (n == 1)
		return 1;
	if (n % 2 == 0)
		return cauC(n - 1);
	return 1 / n + cauC(n - 1);
}

int gt(int n)
{
	if (n == 1)
		return 1;
	return n*gt(n - 1);
}

int cauD(int n)
{
	if (n == 1)
		return 1;
	return gt(n) + cauD(n - 1);
}

int main()
{
	int n;
	cin >> n;
	system("pause");
}

