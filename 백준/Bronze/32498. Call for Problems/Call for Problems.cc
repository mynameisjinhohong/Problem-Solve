#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
{
	int a;
	int dap = 0;
	cin >> a;
	int b = 0;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b % 2 == 1) {
			dap += 1;
		}
	}
	cout << dap;

}
