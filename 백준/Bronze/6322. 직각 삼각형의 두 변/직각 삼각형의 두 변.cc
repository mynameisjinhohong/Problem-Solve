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
	int idx = 0;
	while (true)
	{
		idx += 1;
		double a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		cout << fixed << setprecision(3);
		cout << "Triangle #" << idx << endl;
		if (a == -1) {
			double tmp = sqrt(c * c - b*b);
			if (b >=c) {
				cout << "Impossible." << endl;
			}
			else {
				cout << "a = " << tmp << endl;
			}
		}
		else if (b == -1) {
			double tmp = sqrt(c * c - a * a);
			if (a >= c) {
				cout << "Impossible." << endl;
			}
			else {
				cout << "b = " << tmp << endl;
			}
			}
		else if (c == -1) {
			double tmp = sqrt(a * a + b * b);
			cout << "c = " << tmp << endl;
			
			}
		cout << endl;
	}
}