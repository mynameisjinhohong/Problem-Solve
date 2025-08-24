#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    int a;
    cin >> a;
    string s1;
    string s2;
    string b1;
	string b2;
    string ans = "";
	cin >> s1 >> s2 >> b1 >> b2;
    for (int i = 0; i < a; i++) {
        if (s1[i] == b1[i]) {
            if (s2[i] == b2[i]) {
                ans.append(to_string(s2[i] -'0'));
            }
            else {
                ans = "";
                cout << "htg!";
                break;
            }
        }
    }
	if (ans != "") {
		cout << ans;
	}

}