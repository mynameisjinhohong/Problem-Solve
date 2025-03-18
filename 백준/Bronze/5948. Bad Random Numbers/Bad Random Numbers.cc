#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int ans = 0;
	map<int, bool> m;
	while (true) {
		if (m.find(a) != m.end()) {
			cout << ans;
			break;
		}
		m.insert({ a,false });
		a = (a % 1000 - a % 10)/10;
		a *= a;
		ans++;
	}
}
