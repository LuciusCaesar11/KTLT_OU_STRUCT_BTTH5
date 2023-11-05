#include <iostream>
using namespace std;

char* Trim(char s[])
{
	int i = 0;
	while (s[i]) i++;
	while (s[i - 1] == 32 /* Ho?c ' ' */) i--;
	s[i] = 0;
	while (*s == 32 /* Ho?c ' ' */) s++;
	return s;
}
/*

char *trim(char c[50])
{
char *ptr;
ptr = c+strlen(c)-1;
while (*ptr == ' ')
{
*ptr = NULL;
ptr--;
}
while (*c == ' ')
c++;
return c;
}*/
int countSpace(char s[])
{
	int x = 0;
	int len = strlen(s);
	for (int i = 0; i < len; i++)
		if (s[i] == 32)
			return x++;
	return x;
}

int countUpper(char *c)
{
	int k = 0;
	for (int i = 0; i < strlen(c); i++)
		if (isupper(c[i]))
			k++;
	return k;
}

int countLower(char *c)
{
	int k = 0;
	for (int i = 0; i < strlen(c); i++)
		if (islower(c[i]))
			k++;
	return k;
}

int countDigit(char *c)
{
	int k = 0;
	for (int i = 0; i < strlen(c); i++)
		if (isalnum(c[i]) || isalpha(c[i]))
			k++;
	return k;
}


void upper(char *c)
{
	for (int i = 0; i < strlen(c); i++)
		if (c[i] == ' '&&islower(c[i + 1]))
			c[i + 1] = toupper(c[i + 1]);
}

char *toLower(char *c)
{
	for (int i = 0; i < strlen(c); i++)
		c[i] = tolower(c[i]);
	return c;
}

int count_word(char *c)
{
	//doan code co nhieu han che
	int k = 0;
	for (int i = 0; i < strlen(c); i++)
	{
		if (i == 0 && c[i] != ' ' && c[i] != '\t' && c[i] != '\n' || i>0 && c[i] == ' ' || c[i] == '\n' || c[i] == '\t' && c[i-1] != ' ' && c[i-1] != '\n' && c[i-1] != '\t')
			k++;
	}
	return k;
}
int main()
{
	char s[100];
	cout << "Nhap chuoi:";
	cin.getline(s, 100);
	cout << count_word(s);
	system("pause");
}