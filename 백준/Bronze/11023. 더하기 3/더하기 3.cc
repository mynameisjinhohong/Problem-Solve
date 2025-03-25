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
	string a;
	int ans = 0;
	getline(cin, a);
	stringstream ss(a);
	string tmp;
	while (ss >> tmp)
	{
		ans += stoi(tmp);
	}
	cout << ans;
}
