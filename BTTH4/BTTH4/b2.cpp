#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	fflush(stdin);
	vector<string> v;
	stringstream ss(s);
	string token;
	while (ss >> token)
	{
		v.push_back(token);
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i]<<endl;
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	system("pause");
}
/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
string name;
cout << "Nhap ho va ten: ";
getline(cin, name);

// Tach ho va ten
string ho = name.substr(0, name.find(","));
string ten = name.substr(name.find(",") + 2);

// K?t h?p ho và ten l?i
string hoten = ho + " " + ten;

// Xu?t k?t qu?
cout << "Ho ten: " << hoten << endl;

return 0;
}*/