#include<iostream>
using namespace std;

int tohop(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	if (n == 1)
		return n;
	return tohop(n - 1, k - 1) + tohop(n - 1, k);
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k <= i; k++)
			cout << tohop(i,k) << " ";
		cout << endl;
	}
	system("pause");
}