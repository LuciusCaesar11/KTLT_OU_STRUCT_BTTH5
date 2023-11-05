#include <iostream>
#include <cstring>

using namespace std;
//hongocthai 10
//ngoc 4
char *Research(char *a, char *b)
{
	int len = strlen(a);
	int len1 = strlen(b);
	for (int i = 0; i <= len - len1; i++)
	{
		int j = 0;
		while (j < len1&&a[i + j] == b[j])
			j++;
		if (j == len1)
			return &a[i];
	}
	return nullptr;
}

int main() {
	char s1[100], s2[100], s3[100];
	cout << "Nhap chuoi s1: ";
	cin >> s1;
	cout << "Nhap chuoi s2: ";
	cin >> s2;
	char*p = Research(s1,s2);
	cout << p-s1;

	system("pause");
}