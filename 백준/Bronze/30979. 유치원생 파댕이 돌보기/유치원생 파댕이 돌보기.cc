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
	int t,n;
	cin >> t>> n;
	int hap = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		hap += a;
	}
	if (hap >= t) {
		cout << "Padaeng_i Happy";
	}
	else
	{
		cout << "Padaeng_i Cry";
	}
}