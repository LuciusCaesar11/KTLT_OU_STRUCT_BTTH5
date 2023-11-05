#include<iostream>
using namespace std;
#include<conio.h>
#pragma warning(disable:4996)
int main()
{
	char pass[] = { "hello" };
	char input[100];
	int cnt = 0;
	do
	{
		cout << "nhap mat khau";
		int i = 0;
		char c;
		while ((c = getch()) != '\r')
		{
			if (c == '\b' && i > 0)
			{
				i--;
				cout << "\b \b";
			}
			else if (c != '\b'&& i < 99)
			{
				input[i] = c;
				i++;
				cout << "X";
			}
		}
		input[i] = '\0';
		if (strcmp(pass, input) == 0)
		{
			cout << "thanh cong";
			break;
		}
		else
		{
			cnt++;
			if (cnt >= 3)
				cout << "Nhap sai qua 3 lan, vui long thoat";
			else
				cout << "nhap sai, ban con " << 3 - cnt << "lan nhap ";
		}
	} while (true);
}