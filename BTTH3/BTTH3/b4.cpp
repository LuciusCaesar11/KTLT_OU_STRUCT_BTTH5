#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> *(arr + i);
	for (int i = 0; i < n; i++)
		if (*(arr + i) % 2 != 0)
			cout << *(arr + i) << " ";
	int max = *arr;
	int *max_ptr = arr;
	for (int i = 1; i < n; i++)
		if (*(arr + i)>*arr)
		{
			max = *(arr + i);
			max_ptr = arr + i;
		}
	cout << "dia chi ptu "<<max<<": " << max_ptr << endl;
	system("pause");
}