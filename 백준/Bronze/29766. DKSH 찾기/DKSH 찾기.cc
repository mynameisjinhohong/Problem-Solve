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
	string a;
	cin >> a;
	int ans = 0;
	for (int i = 0; i < a.size() - 3; i++) {
		if (a.substr(i, 4) == "DKSH") {
			ans += 1;
		}
	}
	cout << ans;
}
