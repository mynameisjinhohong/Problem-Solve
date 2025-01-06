#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
	int p;
	cin >> p;
	for (int i = 0; i < p; i++) {
		string target, sot;
		cin >> target >> sot;
		for (int j = 0; j < sot.length(); j++) {
			if (target.find(sot[j]) == string::npos) {
				cout << "NO" << endl;
				break;
			}
			if (j == sot.length() - 1) {
				cout << "YES" << endl;
			}
		}
	}
	
}
