#include<iostream>
using namespace std;

int main()
{
	char c[100];
	gets_s(c);
	char *ho_end = strchr(c, ',');
	*ho_end = 0;
	char *ho = c;
	while (*ho == ' ')
	{
		*ho = NULL;
		ho++;
	}
	char *ten_end = c + strlen(c) - 1;
	while (*ten_end == ' ')
	{
		*ten_end = NULL;
		ten_end--;
	}
	char *ten = ho_end + 1;
	while (*ten == ' ')
	{
		*ten = NULL;
		ten++;
	}
	cout << ho<<" "<<ten;
	system("pause");
}