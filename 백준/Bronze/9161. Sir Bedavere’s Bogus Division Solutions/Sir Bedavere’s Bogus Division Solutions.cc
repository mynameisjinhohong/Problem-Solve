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
	for (int i = 100; i < 1000; i++)
	{
		int a = i / 100;
		int b = i / 10 % 10;
		int c = i % 10;
		for (int j = 10; j < 1000; j++) {
			int d = j / 100;
			int e = j / 10 % 10;
			int f = j % 10;
			if (a == b && b == c && c == d && d == e && e == f) {
				continue;
			}
			if (c == d) {
				if ((a * 10 + b) * j == i * (e * 10 + f)) {
					cout << i << " / " << j << " = " << a*10 + b << " / " << e*10 + f << endl;
				}
			}
		}
	}
}
