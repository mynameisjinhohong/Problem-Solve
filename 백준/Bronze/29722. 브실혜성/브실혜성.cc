#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
	string a;
	int b;
	cin >> a >> b;
	int c = a.find('-');
	string year = a.substr(0, c);
	int d = a.find('-', c + 1);
	string month = a.substr(c+1, d);
	string day = a.substr(d+1,a.length());
	int newYear = b/360;
	b = b % 360;
	int newMonth = b / 30;
	b = b % 30;
	int newDay = b;
	int newYear1 = stoi(year) + newYear;
	int newMonth1 = stoi(month) + newMonth;
	int newDay1 = stoi(day) + newDay;
	if (newDay1 > 30)
	{
		newDay1 = newDay1 - 30;
		newMonth1++;
	}
	if (newMonth1 > 12)
	{
		newMonth1 = newMonth1 - 12;
		newYear1++;
	}
	if (newMonth1 < 10)
	{
		cout << newYear1 << "-0" << newMonth1 << "-";
	}
	else
	{
		cout << newYear1 << "-" << newMonth1 << "-";
	}
	if (newDay1 < 10)
	{
		cout << "0" << newDay1;
	}
	else
	{
		cout << newDay1;
	}
}
