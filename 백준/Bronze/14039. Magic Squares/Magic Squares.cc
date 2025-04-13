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
	vector<vector<int>> magic;
	int n;
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		vector<int> v;
		for (int j = 0; j < 4; j++) {
			cin >> n;
			if (i == 0) {
				sum += n;
			}
			v.push_back(n);
		}
		magic.push_back(v);
	}
	bool check = true;
	for (int i = 0; i < 4; i++) {
		int su = 0;
		for (int j = 0; j < 4; j++) {
			su += magic[i][j];
		}
		if (su != sum) {
			check = false;
			break;
		}
	}
	for (int i = 0; i < 4; i++) {
		int su = 0;
		for (int j = 0; j < 4; j++) {
			su += magic[j][i];
		}
		if (su != sum) {
			check = false;
			break;
		}
	}
	if (check) {
		cout << "magic" << endl;
	}
	else {
		cout << "not magic" << endl;
	}
	
}


