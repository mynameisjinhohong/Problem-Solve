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
	unsigned long long a, b;
	cin >> a >> b;
	if (a < b)
	{
		cout << b - a - 1 << endl;
	}
	else if(a>b) {
		cout << a-b -1 << endl;
	}
	else {
		cout << 0 << endl;
	}
	if (a > b)
	{
		swap(a, b);
	}
	for (unsigned long long i = a+1; i <b; i++)
	{
		cout << i << " ";
	}
}


