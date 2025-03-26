#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <vector>
#include <list>
#include <map>
#include <sstream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		cout << "Denominations: ";
		bool c = false;
		int before = 0;
		for (int j = 0; j < b; j++) {
			int d;
			cin >> d;
			if (before * 2 > d) {
				c = true;
			}
			before = d;
			cout << d << " ";
		}
		cout << endl;
		if (c) {
			cout << "Bad coin denominations! " << endl << endl;
		}
		else {
			cout << "Good coin denominations!" << endl << endl;
		}
	}
}
