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
	int ans = 0;
	for (int i = 1; i <= a; i++) {
		for (int j = 0; j <= i; j++) {
			ans += i;
			ans += j;
		}
	}
	cout << ans << endl;
}
