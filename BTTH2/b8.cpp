#include<iostream>
using namespace std;

int thapsangnhi(int n,int i=0)
{
	if (n == 0)
		return 0;
	int dig = (n % 2) * pow(10, i);
	return dig + thapsangnhi(n / 2, i + 1);
}

void thapsangnhi2(int n)
{
	if (n == 0)
		return;
	thapsangnhi2(n / 2);
	cout << n % 2;
}

int main()
{
	int n;
	cin >> n;
	cout << thapsangnhi(n)<<endl;
	thapsangnhi2(n);
	system("pause");
}