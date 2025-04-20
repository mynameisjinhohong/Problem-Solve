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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	float best = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "S") {
			float a;
			cin >> a;
			float test = a * a * a * 3.14159 * 4 / 3;
			if (test > best) {
				best = test;
			}
		}
		else if (s == "C") {
			float a,b;
			cin >> a >> b;
			float test = a * a * b * 3.14159 / 3;
			if (test > best) {
				best = test;
			}
		}
		else if (s == "L") {
			float a, b;
			cin >> a >> b;
			float test = a * a * b * 3.14159;
			if (test > best) {
				best = test;
			}
		}
	}
	cout << fixed << setprecision(3) << best << endl;
}