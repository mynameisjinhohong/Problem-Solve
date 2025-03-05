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
	int a;
	cin >> a;
	cin.ignore();
	for (int i = 0; i < a; i++) {
		string b;
		getline(cin, b);
		if (b[b.size() - 1] != '.') {
			b += ".";
		}
		cout << b << endl;
	}
}
