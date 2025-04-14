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
	string a;
	string b;
	cin >> a >> b;
	if (n % 2 == 0) {
		if (a == b) {
			cout << "Deletion succeeded";
		}
		else {
			cout << "Deletion failed";
		}
	}
	else {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] == b[i]) {
				cout << "Deletion failed";
				break;
			}
			if (i == a.size() - 1) {
				cout << "Deletion succeeded";
			}
		}
	}
	
}


