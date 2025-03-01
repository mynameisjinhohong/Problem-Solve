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
	float ans = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		switch (b)
		{
			case 0:
				ans += 2;
				break;
			case 1:
				ans += 1;
				break;
			case 2:
				ans += 0.5;
				break;
			case 4:
				ans += 0.25;
				break;
			case 8:
				ans += 0.125;
				break;
			case 16:
				ans += 0.0625;
				break;
		}
	}
	cout << fixed << setprecision(6) << ans << endl;

}
