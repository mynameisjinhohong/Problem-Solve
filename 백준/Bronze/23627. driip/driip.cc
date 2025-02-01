#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <list>

using namespace std;

int main()
{
	string n;
	cin >> n;
	if (n.length() > 5) {
		string a = n.substr(n.length() - 5, 5);
		if (a == "driip") {
			cout << "cute";
		}
		else {
			cout << "not cute";
		}
	}
	else {
		cout << "not cute";
	}

}
