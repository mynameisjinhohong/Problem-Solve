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
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string s;
		cin >> s;
		int one = 0;
		int two = 0;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == 'a') {
				one++;
			}
			else {
				two++;
			}
		}
		int ans = min(one, two);
		cout << ans << endl;

	}
}
