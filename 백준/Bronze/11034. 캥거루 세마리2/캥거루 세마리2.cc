#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c;
	while (cin >> a >> b >> c) {
		int ans = 0;
		while (b - a != 1 || c - b != 1) {
			if (c - b > b - a) {
				a = b;
				b = b + 1;
			}
			else {
				c = b;
				b = b - 1;
			}
			ans += 1;
		}
		cout << ans << endl;
	}
	
}
