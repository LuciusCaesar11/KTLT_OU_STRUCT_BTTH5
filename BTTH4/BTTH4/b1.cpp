#include<iostream>
using namespace std;
#pragma warning(disable:4996)
int main()
{
	char c1[10];
	char c2[10];
	gets_s(c1);
	fflush(stdin);
	gets_s(c2);
	if (c1 > c2)
		cout << "chuoi 1 lon hon chuoi 2";
	else
		cout << "chuoi 1 nho hon chuoi 2";
	c1[0] = toupper(c1[0]);
	c2[0] = toupper(c2[0]);
	cout << c1 <<" "<< c2<<endl;
	char c3[20];
	strcpy(c3, c1);
	strcat(c3, c2);
	cout << c3;
	system("pause");
}