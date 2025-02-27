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
	int b;
	int ans = 0;
	cin >> a >> b;
	int hap = a * b;
	while (hap > 0)
	{
		hap -= 4840 * 5;
		ans += 1;
	}
	cout << ans << endl;
}
