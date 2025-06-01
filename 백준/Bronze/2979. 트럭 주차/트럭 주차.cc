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
	int a, b, c;
	cin >> a >> b >> c;
	int idx = 0;
	vector<int> v(100,0);
	for (int i = 0; i < 3; i++) {
		int d, e;
		cin >> d >> e;
		v[d] += 1;
		v[e] -= 1;
	}
	int ans = 0;
	for (int j = 0; j < 100; j++) {
		idx += v[j];
		if (idx == 1)
		{
			ans += a;
		}
		else if (idx == 2)
		{
			ans += b*2;
		}
		else if (idx == 3)
		{
			ans += c*3;
		}
	}
	cout << ans << endl;
	return 0;
}