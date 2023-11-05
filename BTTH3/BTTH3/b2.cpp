#include<iostream>
using namespace std;

#include<cstdlib>
int main()
{
	int a[30];
	for (int i = 0; i < 30; i++)
		a[i] = rand() % 10+1;
	int *p = a;
	for (int i = 0; i < 30; i++)
		cout << *(p + i) << " ";
	cout << endl;
	for (int i = 0; i < 30; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
}