#include<iostream>
using namespace std;
void fibo(int n)
{
	int f0 = 0, f1 = 1;
	int *ptr;
	ptr = &f0;
	for (int i = 0; i < n; i++)
	{
		cout << *ptr << " ";
		int next = f0 + f1;
		f0 = f1;
		f1 = next;
		ptr = &f1;
	}
}
int main()
{
	int n;
	cin >> n;
	fibo(n);
	system("pause");
}