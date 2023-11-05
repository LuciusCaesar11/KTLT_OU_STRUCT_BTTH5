#include<iostream>
using namespace std;
/*void daonguoc(int n)
{
	if (n == 0)
		return;
	cout << n % 10;
	daonguoc(n / 10);
}*/

int count(int n)
{
	if (n <10)
		return 1;
	return 1 + count(n / 10);
}
int daonguoc2(int n)
{
	if (n == 0)
		return 0;
	int i = count(n);
	int z = ((n % 10) *pow(10, i - 1));
	return z+ daonguoc2(n / 10);
}
int main()
{
	int n;
	cin >> n;
	//daonguoc(n);
	cout<<daonguoc2(n);
	system("pause");
}