#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <list>

using namespace std;

int main()
{
	int n;
	string ans = "AKARAKA";
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		ans += "RAKA";
	}
	cout << ans;

}
