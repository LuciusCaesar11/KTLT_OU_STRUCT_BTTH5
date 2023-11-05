#include <iostream>
#include <string>
using namespace std;

string month_names[] = { "January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November", "December" };

int main()
{
	string input_date;
	cout << "Enter date (in the format mm-dd-yy): ";
	cin >> input_date;

	int month = stoi(input_date.substr(0, 2));
	int day = stoi(input_date.substr(3, 2));
	int year = stoi(input_date.substr(6, 2));

	cout << month_names[month - 1] << " " << day << ", " << "19" << year << endl;
	system("pause");
}