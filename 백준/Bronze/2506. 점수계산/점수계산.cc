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
	int ans = 0;
	int idx = 1;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 1) {
			ans += idx;
			idx++;
		}
		else {
			idx = 1;


		}
	}
	cout << ans << endl;	

}