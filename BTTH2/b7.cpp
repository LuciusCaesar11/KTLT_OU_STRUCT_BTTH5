#include<iostream>
using namespace std;

int tongchan(int n)
{
	if (n == 0)
		return 0;
	if ((n%10) % 2 == 0)
		return n%10 + tongchan(n / 10);
	return tongchan(n / 10);
}

int main()
{
	int n;
	cin >> n;
	cout << tongchan(n);
	system("pause");
}

