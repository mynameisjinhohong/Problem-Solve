#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <cmath>

using namespace std;

bool contains(string a, char b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b) {
            return true;
        }
    }
    return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    string target;
    cin >> target;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        string test;
        cin >> test;
        if (test.size() < 4) {
            continue;
        }
        bool center = false;
        bool find = true;
        for (int j = 0; j < test.size(); j++) {
            if (test[j] == target[0]) {
                center = true;
                continue;
            }
            if (!contains(target, test[j])) {
                find = false;
                break;
            }
        }
        if (find && center) {
            cout << test << "\n";
        }
    }

}

