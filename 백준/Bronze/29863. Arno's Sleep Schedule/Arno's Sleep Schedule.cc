#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	if (a < b) {
		cout << b - a << endl;
	}
	else if (a == b) {
		cout << "0" << endl;
	}
	else {
		cout << 24 - a + b << endl;
	}
	return 0;
}
