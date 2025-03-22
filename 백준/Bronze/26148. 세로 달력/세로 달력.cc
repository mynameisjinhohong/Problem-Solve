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
	int n;
	cin >> n;
	bool yun = false;
	if ((n % 100 != 0 && n % 4 == 0) || n % 400 == 0) {
		yun = true;
	}
	int start;
	cin >> start;
	int ans = 0;
	for (int i = 1; i <= 12; i++) {
		vector<int> week = { 0,0,0,0,0,0,0 };
		week[start - 1] = 1;
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			for (int j = 0; j < 30; j++) {
				start += 1;
				if (start == 8) {
					start = 1;
				}
				week[start - 1] += 1;
			}
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			for (int j = 0; j < 29; j++) {
				start += 1;
				if (start == 8) {
					start = 1;
				}
				week[start - 1] += 1;
			}
		}
		else {
			if (yun) {
				for (int j = 0; j < 28; j++) {
					start += 1;
					if (start == 8) {
						start = 1;
					}
					week[start - 1] += 1;
				}
			}
			else {
				for (int j = 0; j < 27; j++) {
					start += 1;
					if (start == 8) {
						start = 1;
					}
					week[start - 1] += 1;
				}
			}
		}
		start += 1;
		if (start == 8) {
			start = 1;
		}
		for (int i = 0; i < week.size(); i++) {
			if (week[i] == 5) {
				ans += 1;
			}
		}
	}
	cout << ans << endl;
}
