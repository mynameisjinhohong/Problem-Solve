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
	int a;
	cin >> a;
	cout << fixed;
	cout.precision(1);
	if (a <= 30)
	{
		cout << (double)a / (double)2 << endl;
	}
	else {
		cout << (float)15 + (float)(a-30)*3/2 << endl;
	}
}
