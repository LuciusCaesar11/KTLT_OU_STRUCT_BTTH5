#include<iostream>
using namespace std;

bool isPalindrome(char *c) {
	int len=strlen(c);
	for (int i = 0; i < len / 2; i++) {
		if (c[i] != c[len - i - 1]) {
			return false;
		}
	}
	return true;
}

int main()
{
	char c[50];
	cout << "nhap chuoi:";
	gets_s(c);
	if (isPalindrome(c))
		cout << "right !";
	else
		cout << "wrong !";
	system("pause");
}