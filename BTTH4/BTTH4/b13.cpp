#include<iostream>
using namespace std;

bool isVowel(char a)
{
	char b[] = { 'u','e','o','a','i' };
	for (int i = 0; i < 5; i++)
		if (a == b[i])
			return true;
	return false;
}


int main()
{
	char a[100];
	gets_s(a);
	char b[100] = {0};
	int j = 0;
	for (int i = 0; i < strlen(a); i++)
		if (!isVowel(a[i]))
		{
			b[j] += a[i];
			j++;
		}
	cout << b;
	system("pause");
}