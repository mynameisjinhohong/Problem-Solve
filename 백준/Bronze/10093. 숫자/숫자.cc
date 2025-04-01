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
	long long a, b;
	cin >> a >> b;
	if (a == b)
	{
		cout << 0 << endl;
	}
	else {
		cout << abs(a - b) - 1 << endl;
	}
	if (a > b)
	{
		swap(a, b);
	}
	for (int i = a+1; i <b; i++)
	{
		cout << i << " ";
	}
}


