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
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int b, c;
        cin >> b >> c;
        int ans = 0;
        vector<int> v;
        for (int j = 0; j < b; j++) {
            int d;
            cin >> d;
            bool find = false;
            for (int k = 0; k < v.size(); k++) {
                if (v[k] == d) {
                    find = true;
                    break;
                }
            }
            if (find) {
                ans += 1;
            }
            else {
                v.push_back(d);
            }
        }
        for (int j = 0; j < c; j++) {
            int d;
            cin >> d;
            bool find = false;
            for (int k = 0; k < v.size(); k++) {
                if (v[k] == d) {
                    find = true;
                    break;
                }
            }
            if (find) {
                ans += 1;
            }
            else {
                v.push_back(d);
            }
        }
        cout << ans << endl;
    }
}

