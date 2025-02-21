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
	int idx = 1;
	int before = 0;
	while (true)
	{
		if (a.substr(before, to_string(idx).length()) == to_string(idx))
		{
			before += to_string(idx).length();
			idx++;
			if (before >= a.length())
			{
				cout << idx - 1;
				break;
			}
		}
		else
		{
			cout << -1;
			break;
		}
	}

	
}
