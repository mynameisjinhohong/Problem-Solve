#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <list>

using namespace std;

int main()
{
	int n,b;
	cin >> n >> b;
	if (b <= 10 && n <= 50) {
		cout << "White";
	}
	else if (b > 30) {
		cout << "Red";
	}
	else {
		cout << "Yellow";
	}
}
