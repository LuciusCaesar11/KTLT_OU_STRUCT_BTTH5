#include<iostream>
using namespace std;

int nhisangthap(int n)
{
	if (n == 0)
		return 0;
	return n % 10 + 2 * nhisangthap(n / 10);
}

int main()
{
	int n;
	cin >> n;
	cout << nhisangthap(n);
	system("pause");
}