#include<iostream>
using namespace std;

int minarr(int a[], int n)
{
	if (n == 1)
		return a[0];
	int res = minarr(a, n - 1);
	if (res > a[n - 1])
		res = a[n - 1];
	return res;
}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int n = 5;
	cout << minarr(a, n);
	system("pause");
}
