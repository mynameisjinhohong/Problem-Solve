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
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int b,c,d;
		cin >> b >> c >> d;
		int ans = c;
		int e = c;
		for (int j = 1; j < b; j++)
		{
			e = e + d;
			ans = ans + e;
		}
		cout << ans << endl;
	}
}


