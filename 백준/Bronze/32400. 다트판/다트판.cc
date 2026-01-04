#include <iostream>
#include <vector>
#include <queue>
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
    int hap = 20;
    vector<int> v;
    bool t = false;
    bool f = false;
    bool l = false;
    for (int i = 0; i < 20; i++) {
        int a;
        cin >> a;
        v.push_back(a);
        if (t) {
            hap += a;
            t = false;
            continue;
        }
        if (a == 20) {
            t = true;
            if (i == 0) {
                l = true;
            }
            else {
                hap += v[i - 1];
            }
            if (i == 19) {
                f = true;
            }
        }
    }
    if (l) {
        hap += v[19];
    }
    if (f) {
        hap += v[0];
    }
    if (hap > 31) {
        cout << "Alice";
    }
    else{
        cout << "Bob";
    }
}

