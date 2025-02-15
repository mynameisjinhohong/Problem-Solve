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
		int a, b;
		int ans = 0;
		cin >> a >> b;
		for (int j = 0; j < a; j++) {
			int c, d, e;
			cin >> c >> d >> e;
			if (c * d >= e * b) {
				ans += 1;
			}
		}
		cout << ans << endl;
	}

	
}
