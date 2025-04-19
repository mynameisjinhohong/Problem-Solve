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
	string s;
	cin >> n;
	cin.ignore();
	getline(cin, s);
	vector<int> v;
	for (int i = 0; i < 26; i++) {
		v.push_back(0);
	}
	for (int i = 0; i < n; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			v[(int)s[i]-97]++;
		}
	}
	int best = 0;
	for (int i = 0; i < 26; i++) {
		if (v[i] > best) {
			best = v[i];
		}
	}
	cout << best;	
}