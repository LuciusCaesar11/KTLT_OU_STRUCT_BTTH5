#include<iostream>
using namespace std;

int tohop(int k, int n)
{
	if (n == 0 || k == n)
		return 1;
	return tohop(k - 1, n - 1) + tohop(k - 1, n);
}

int main()
{
	int h;
	cout << "nhap h: ";
	cin >> h;
	int **p = new int*[h];
	for (int i = 0; i < h; i++)
		p[i] = new int[h];
	for (int i = 0; i < h; i++)
		for (int j = 0; j <= i; j++)
			p[i][j] = tohop(i,j);
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << p[i][j] << " ";
		cout << endl;
	}
	for (int i = 0; i < h; i++)
		delete[]p[i];
	system("pause");
}