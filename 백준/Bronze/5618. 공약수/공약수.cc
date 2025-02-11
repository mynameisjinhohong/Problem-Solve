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
	vector<int> su(n);
	int max = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		su[i] = a;
		if (a > max) {
			max = a;
		}
	}
	for (int i = 1; i <= max; i++) {
		bool yes = true;
		for (int j = 0; j < su.size(); j++) {
			if (su[j] % i != 0) {
				yes = false;
				break;
			}
		}
		if (yes) {
			cout << i << endl;
		}
	}

	
}
