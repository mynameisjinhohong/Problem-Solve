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
	cin >> n;
	int ans;
	cin >> ans;
	for (int i = 0; i < n-1; i++) {
		int a;
		cin >> a;
		ans += a;
	}	
	cout << ans;
}
