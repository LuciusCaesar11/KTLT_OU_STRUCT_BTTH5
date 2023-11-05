#include<iostream>
using namespace std;
#include<string>

int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

bool isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int getDay(string date)
{
	int day = stoi(date.substr(0, 2));
	int month = stoi(date.substr(3, 2));
	int year = stoi(date.substr(6, 4));
	int days = day;
	for (int i = 0; i < month - 1; i++)
		days += daysInMonth[i];
	if (month > 2 && isLeapYear(year))
		days++;
	return days;
}

int main()
{
	string date = "05-03-2023";
	cout << getDay(date);
	system("pause");
}