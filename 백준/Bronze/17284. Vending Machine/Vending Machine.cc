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
	int money = 5000;
	int n;
	while (cin >> n) {
		switch (n)
		{
		case 1:
			money -= 500;

			break;
		case 2:
			money -= 800;
			break;

		case 3:
			money -= 1000;
			break;
		}
	}
	cout << money << endl;
}