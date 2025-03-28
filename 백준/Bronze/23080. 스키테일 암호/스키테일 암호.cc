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
	string b;
	cin >> b;
	for (int i = 0; i < b.size(); i++) {
		if (i % a == 0) {
			cout << b[i];
		}
	}
}
