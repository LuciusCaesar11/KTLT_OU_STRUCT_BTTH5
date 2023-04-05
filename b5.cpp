#include<iostream>
using namespace std;

struct Sach {
	char name[20];
	char tg[20];
	struct NTN {
		int d, m, y;
	} dt;
};
void xoadong(char a[])
{
	int len = strlen(a);
	if (a[len - 1] == '\n') a[len - 1] = '\0';
}
void nhap(Sach *s)
{
	cout << "nhap ten sach: ";
	fgets(s->name, sizeof(s->name), stdin); xoadong(s->name);
	cout << "nhap ten tac gia: ";
	fgets(s->tg, sizeof(s->tg), stdin); xoadong(s->tg);
	cout << "nhap ngay thang nam: ";
	cin >> s->dt.d >> s->dt.m >> s->dt.y;
	getchar();
}
void nhapDs(Sach s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap thong tin sach thu " << i << ": " << endl;
		nhap(&s[i]);
	}
}
void xuat(Sach s)
{
	cout << "ten sach: " << s.name << endl;
	cout << "ten tac gia: " << s.tg << endl;
	cout << "ngay thang nam: " << s.dt.d << " " << s.dt.m << " " << s.dt.y << endl;;
}

void xuatDs(Sach s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "thong tin sach thu " << i << ": " << endl;
		xuat(s[i]);
	}
}
void find_tacgia(Sach s[], int n, char c[50])
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(s[i].tg, c) == 0)
			xuat(s[i]);
	}
}
int main(){
	Sach s[50];
	int n;
	cin >> n;
	getchar();
	char c[] = {"Tran Dung"};
	nhapDs(s, n);
	find_tacgia(s, n, c);
	system("pause");
}