#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <list>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (((a & (~a + 1)) == a)) {
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}	
}
