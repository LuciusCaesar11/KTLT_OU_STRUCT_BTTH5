#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

int main()
{
	char c[100];
	cin.getline(c, 100);

	// X? lý kho?ng tr?ng ??u cu?i chu?i
	char *space_f = c;
	while (*space_f == ' ')
		space_f++;
	char *space_l = c + strlen(c) - 1;
	while (*space_l == ' ')
		space_l--;
	*(space_l + 1) = '\0'; // ??t kí t? k?t thúc chu?i t?i v? trí k? cu?i
	strcpy(c, space_f); // D?i chu?i lên ??u
						// Chuy?n ??i d?ng in hoa ký t? ??u tiên c?a t?
	for (int i = 0; i < strlen(c); i++)
	{
		if (i == 0 || (islower(c[i]) && c[i - 1] == ' '))
			c[i] = toupper(c[i]);
	}
	cout << c;
	system("pause");
}
