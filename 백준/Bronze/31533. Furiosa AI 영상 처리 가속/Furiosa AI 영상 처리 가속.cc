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
	float  a, b, c;
	cin >> a >> b >> c;
	float ans = 100000;
	if (b / a * 2 < c) {
		if (ans > b / a * 2)
			ans = b / a * 2;
	}
	else {
		if (ans > max(c,b/a))
			ans = max(c, b / a);
	}
	if (c / a * 2 < b) {
		if (ans > c / a * 2)
			ans = c / a * 2;
	}
	else{
		if (ans > max(c/a,b))
			ans = max(c/a,b);
	}
	cout << ans << endl;
}