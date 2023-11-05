#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)
int main()
{
	char a[500];
	gets_s(a);
	char *tach = strtok(a, " ");
	while (tach != NULL)
	{
		cout << tach << endl;
		tach = strtok(NULL," ");
	}
	system("pause");
}