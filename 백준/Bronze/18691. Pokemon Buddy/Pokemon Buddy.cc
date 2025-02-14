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
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b,c;
		cin >> a >> b >> c;
		if (c <= b) {
			cout << 0 << endl;
		}
		else {
			switch (a)
			{
			case 1:
				cout << (c - b) << endl;
				break;
			case 2:
				cout << (c - b) * 3 << endl;
				break;
			case 3:
				cout << (c - b) * 5 << endl;
				break;
			}
		}

	}

	
}
