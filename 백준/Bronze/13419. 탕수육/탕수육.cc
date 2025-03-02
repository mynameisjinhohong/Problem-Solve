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
	for (int i = 0; i < a; i++) {
		string b;
		string ans1 = "";
		string ans2 = "";
		cin >> b;
		if (b.size() % 2 == 0) {
			for (int j = 0; j < b.size(); j++) {
				if (j % 2 == 0) {
					ans1 += b[j];
				}
				else {
					ans2 += b[j];
				}
			}
		}
		else {
			for (int j = 0; j < b.size(); j++) {
				if (j % 2 == 0) {
					ans1 += b[j];
				}
				else {
					ans2 += b[j];
				}
			}
			string temp = ans1;
			ans1 += ans2;
			ans2 += temp;
		}
		cout << ans1 << endl;
		cout << ans2 << endl;
		

	}
}
