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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;
        vector<bool> v(a,true);
        for (int j = 2; j <= a; j++) {
            int idx = 1;
            while (idx * j -1 < a) {
                v[idx * j-1] = !v[idx * j -1];
                idx++;
            }
        }
        int ans = 0;
        for (int j = 0; j < a; j++) {
            if (v[j]) ans++;
        }
        cout << ans << "\n";
    }
}

