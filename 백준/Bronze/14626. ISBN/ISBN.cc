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
	string a;
	cin >> a;
	int hap = 0;
	int test = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '*') {
			test = i;
			continue;
		}
		else {
			int b = a[i] - '0';
			if (i % 2 == 0) {
				hap += b;
			}
			else {
				hap += b * 3;
			}
		}
	}
	int ans = 10 -(hap %10);
	if (ans == 10) {
		ans = 0;
	}
	if (test % 2 != 0) {
		switch (ans)
		{
		case 1:
			ans = 7;
			break;
		case 2:
			ans = 4;
			break;
		case 3:
			ans = 1;
			break;
		case 4:
			ans = 8;
			break;
		case 5:
			ans = 5;
			break;
		case 6:
			ans = 2;
			break;
		case 7:
			ans = 9;
			break;
		case 8:
			ans = 6;
			break;
		case 9:
			ans = 3;
			break;
		}
	}
	cout << ans << endl;
}
