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
	int a, b;
	cin >> a >> b;
	int idx = 0;
	vector<int> v;
	for (int i = 0; i < a; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	int ans = 0;
	for (int i = 0; i < b; i++) {
		int x;
		cin >> x;
		if (ans != 0) {
			continue;
		}
		idx += x;
		if (idx >= a-1) {
			ans = i+1;
			continue;
		}
		idx += v[idx];
		if (idx >= a - 1) {
			ans = i + 1;
			continue;
		}
	}
	cout << ans << endl;
}