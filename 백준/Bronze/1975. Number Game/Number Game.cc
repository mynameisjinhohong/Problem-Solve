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
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;
		int ans = 0;
		for (int j = 2; j <= b; j++)
		{
			if (b % j == 0) {
				ans++;
				int newb = b;
				while (true)
				{
					newb /= j;
					if (newb % j != 0) {
						break;
					}
					else {
						ans++;
					}
				}
			}
		}
		cout << ans << '\n';
	}
}


