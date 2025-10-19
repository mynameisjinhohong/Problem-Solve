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
    string a;
    int b;
    cin >> a >> b;
    vector<vector<string>> r;
    for (int i = 0; i < b; i++) {
		vector<string> v;
        for (int j = 0; j < b; j++) {
            string c;
            cin >> c;
			v.push_back(c);
        }
		r.push_back(v);
    }
    if (a == "L" || a == "R"){
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < b / 2; j++) {
				SWAP(r[i][j], r[i][b - j - 1]);
        }
    }
		if (b % 2 == 1) {
			for (int i = 0; i < b; i++) {
				Change(r[i][b / 2]);
			}
		}
	}
	else if (a == "U" || a == "D") {
		for (int i = 0; i < b; i++) {
			for (int j = 0; j < b / 2; j++) {
				SWAP(r[j][i], r[b - j - 1][i]);
			}
		}
		if (b % 2 == 1) {
			for (int i = 0; i < b; i++) {
				Change(r[b / 2][i]);
			}
		}
	}


	for(int i = 0; i<b; i++){
		for (int j = 0; j < b; j++)
		{
			cout << r[i][j] << " ";
		}
		cout << "\n";
	}

}

