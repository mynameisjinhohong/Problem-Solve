#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int a;
	cin >> a;
	vector<string> v;
	for (int i = 0; i < a; i++) {
		string b;
		cin >> b;
		v.push_back(b);
	}
	for (int i = 0; i < a - 1; i++) {
		string c;
		cin >> c;
		for (int j = 0; j < v.size(); j++) {
			if (v[j] == c) {
				v.erase(v.begin() + j);
				break;
			}
		}
	}
	cout << v[0] << endl;
}
