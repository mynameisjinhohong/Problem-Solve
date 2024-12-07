#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
{
	string a;
	cin >> a;
	int b = stoi(a);
	if (a.find('7') != string::npos) {
		if (b % 7 == 0)
			cout << 3;
		else
			cout << 2;
	}
	else {
		if (b % 7 == 0)
			cout << 1;
		else
			cout << 0;

	}
	
}
