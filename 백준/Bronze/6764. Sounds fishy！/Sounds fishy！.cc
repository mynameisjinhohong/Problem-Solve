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
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a > b && b > c && c > d) {
		cout << "Fish Diving";
	}
	else if (a < b && b < c && c < d) {
		cout << "Fish Rising";
	}
	else if (a == b && b == c && c == d) {
		cout << "Fish At Constant Depth";
	}
	else {
		cout << "No Fish";
	}
}


