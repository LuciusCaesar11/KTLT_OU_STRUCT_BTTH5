#include<iostream>
using namespace std;
#include<conio.h>
#pragma warning(disable:4996)

int main()
{
	char pass[] = "hello";
	int cnt = 0;
	do {
		char c; int i = 0;
		char input[99];
		cout << "nhap mat khau: ";
		while ((c=getch()) != '\r')
		{
			if (c == '\b' && i > 0)
			{
				i--;
				cout << "\b \b";
			}
			else if(c!='\b' && i<98)
			{
				input[i++] = c;
				cout << "X";
			}
		}
		input[i] = '\0'; 
		if (strcmp(pass, input) == 0)
		{
			cout << "dang nhap thanh cong !";
			break;
		}
		else
		{
			cnt++;
			if (cnt > 1)
				cout << "ban con " << 3 - cnt << " lan dang nhap!";
			else
			{
				cout << "vui long thu lai sau!";
				break;
			}
		}
	} while (true);
}