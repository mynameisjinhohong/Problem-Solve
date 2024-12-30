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
		double n, d, a, b, f;
		cin >> n >> d >> a >> b >> f;
		double ans = ((d / (a + b)) * f);
		cout << fixed;
		cout.precision(0);
		cout << n << " ";
		cout << fixed;
		cout.precision(6);
		cout << ans << endl;
	}
}
