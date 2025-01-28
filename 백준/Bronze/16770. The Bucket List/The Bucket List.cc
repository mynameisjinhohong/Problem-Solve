#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <list>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int time[1000] = {};
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		for (int j = a; j < b; j++) {
			time[j] += c;
		}
	}	
	int ans = 0;
	for (int i = 0; i < 1000; i++) {
		if (time[i] > ans) {
			ans = time[i];
		}
	}
	cout << ans;
}
