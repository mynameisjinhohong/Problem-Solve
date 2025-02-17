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
	int hap = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a == 1) {
			hap += b;
		}
		else {
			hap -= b;
		}
		if (hap < 0) {
			cout << "Adios";
			break;
		}
		if (i == n - 1) {
			cout << "See you next month";
		}
	}

	
}
