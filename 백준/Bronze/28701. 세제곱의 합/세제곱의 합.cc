#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
{
	int a;
	cin >> a;
	long long b = 0;
	long long c = 0;
	for (int i = 0; i < a; i++) {
		b += i + 1;
	}
	c = pow(b,2);
	cout << b <<'\n' << c << '\n' << c << endl;
	return 0;
}
