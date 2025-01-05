#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
	int p;
	cin >> p;
	for (int i = 0; i < p; i++) {
		string a;
		cin >> a;
		int o = 0, x = 0;
		for (int j = 0; j < a.length(); j++) {
			if (a[j] == 'a' || a[j] == 'e' || a[j] == 'i' || a[j] == 'o' || a[j] == 'u') {
				o += 1;
			}
			else {
				x += 1;
			}
		}
		if (o > x) {
			cout << a << endl;
			cout << 1 << endl;
		}
		else {
			cout << a << endl;
			cout << 0 << endl;
		}
	}
	
}
