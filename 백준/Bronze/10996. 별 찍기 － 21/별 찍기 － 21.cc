#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <cmath>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
	string ans;
	int a;
	cin >> a;
	for (int i = 0; i < a*2; i++) {
		if (i % 2 == 1) {
			for (int j = 0; j < a; j++) {
				if (j % 2 == 1) {
					ans += "*";
				}
				else {
					ans += " ";
				}
			}
			ans += "\n";
		}
		else {
			for (int j = 0; j < a; j++) {
				if (j % 2 == 0) {
					ans += "*";
				}
				else {
					ans += " ";
				}
			}
			ans += "\n";
		}
	}
	cout << ans;
}

