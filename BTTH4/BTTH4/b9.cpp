#include<iostream>
#include<sstream>
using namespace std;
/*

string LastName(string name)
{
stringstream ss(name);
string lastname;
ss >> lastname;
return lastname;
}
*/

string LastName(string name)
{
	int i = 0;
	stringstream ss(name);
	string lastname;
	while (ss >> lastname)
		return lastname;
}

string MidName(string name)
{
	int i = 0;
	stringstream ss(name);
	string midname;
	while (ss >> midname)
	{
		if (i == 1)
		{
			return midname;
		}
		i++;
	}
}

string Name(string name)
{
	int i = 0;
	stringstream ss(name);
	string namex;
	while (ss >> namex)
	{
		if (i == 2)
		{
			return namex;
		}
		i++;
	}
}
int main()
{
	string name;
	getline(cin, name);
	cout << LastName(name)<<endl;
	cout << MidName(name)<<endl;
	cout << Name(name);
	system("pause");
}