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
    int n, k;
    cin >> n >> k;
    vector<priority_queue<int>> v(11);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v[a - 1].push(b);
    }
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 11; j++) {
            if (v[j].size() < 1) {
                continue;
            }
            int su = v[j].top();
            v[j].pop();
            su -= 1;
            if (su < 0) {
                su = 0;
            }
            v[j].push(su);
        }
    }
    int ans = 0;
    for (int i = 0; i < 11; i++) {
        if (v[i].size() < 1) {
            continue;
        }
        ans += v[i].top();
    }
    cout << ans;

}

