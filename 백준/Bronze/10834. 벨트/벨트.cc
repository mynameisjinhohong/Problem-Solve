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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int ans = 1;
	for (int i = 0; i < n; i++) {
		float a,b,c;
		cin >> a >> b >> c;
		ans = ans * (b / a);
		if (c == 1) {
			ans *= -1;
		}
	}
	if (ans < 0) {
		cout << "1 ";
	}
	else {
		cout << "0 ";
	}
	cout << abs(ans) << endl;	

}