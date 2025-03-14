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
	long long a;
	cin >> a;
	if (a <= 32767 && a >= -32768) {
		cout << "short";
	}
	else if (a <= 2147483647 && a >= -2147483648) {
		cout << "int";
	}
	else{
		cout << "long long";
	}
}
