#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <vector>
#include <list>

using namespace std;

int main()
{
	string a;
	cin >> a;
	if (stoi(a.substr(5, 2)) == 9) {
		if (stoi(a.substr(8, 2)) > 16) {
			cout << "TOO LATE";
		}
		else {
			cout << "GOOD";
		}
	}
	else if (stoi(a.substr(5, 2)) > 9) {
		cout << "TOO LATE";
	}
	else if (stoi(a.substr(5, 2)) < 9) {
		cout << "GOOD";
	}
	
}
