#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if (b < a * c) {
		cout << 0 << endl;
	}
	else {
		cout << 1 << endl;
	}
	return 0;
}
