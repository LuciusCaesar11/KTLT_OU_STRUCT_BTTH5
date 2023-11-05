#include<iostream>
using namespace std;

int main()
{
	int *a=new int ;
	int *b=new int ;
	cout << "a: ";
	cin >> *a;
	cout << "b: ";
	cin >> *b;
	int temp;
	while (*b != 0)
	{
		temp = *a%*b;
		*a = *b;
		*b = temp;
	}
	cout << "ucln: " << *a;
	delete a;
	delete b;
	system("pause");
	return 0;
}