#include<iostream>
using namespace std;

int main()
{
	int x, y;
	int *p;
	p = &x;
	*p = 80;
	cout << "dia chi x: " << &x <<endl;
	cout << p << endl;
	cout << *p<<endl;
	cout << x << endl;
	if (*p == x)
		cout << "dung"<<endl;
	else
		cout << "sai"<<endl;
	system("pause");
}