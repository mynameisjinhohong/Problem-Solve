#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <cmath>

using namespace std;


void SWAP(string& a, string& b) {
    string tempA = a;
    string tempB = b;
    if (tempA == "2") {
		tempA = "5";
    }
    else if (tempA == "5") {
		tempA = "2";
    }
    else if (tempA == "1" || tempA == "8") {
		tempA = tempA;
	}
	else {
		tempA = "?";
    }
	if (tempB == "2") {
		tempB = "5";
	}
	else if (tempB == "5") {
		tempB = "2";
	}
	else if (tempB == "1" || tempB == "8") {
		tempB = tempB;
	}
	else {
		tempB = "?";
	}
	a = tempB;
	b = tempA;
}

void Change(string& a) {
	if (a == "2") {
		a = "5";
	}
	else if (a == "5") {
		a = "2";
	}
	else if (a == "1" || a == "8") {
		a = a;
	}
	else {
		a = "?";
	}
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
	vector<int> v;
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		v.push_back(b);
	}
	int c, d;
	cin >> c >> d;
	long long ans = 0;
	for (int i = 0; i < a; i++) {
		int su = v[i] - c;
		if (su < 0) {
			ans += 1;
			continue;
		}
		if(su % d == 0){
			ans += (su / d) + 1;
		}
		else {
			ans += (su / d) + 2;
		}
	}
	cout << ans;

}

