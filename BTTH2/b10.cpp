#include<iostream>
using namespace std;

int ucln(int a, int b)
{
	if (b == 0)
		return a;
	return ucln(b, a%b);
}

int ucln2(int a, int b)
{
	if (b == 0)
		return a;
	if (a > b)
		return ucln(a - b, b);
	return ucln(a, b - a);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << ucln(a, b)<<endl;
	cout << ucln2(a, b);
	system("pause");
}