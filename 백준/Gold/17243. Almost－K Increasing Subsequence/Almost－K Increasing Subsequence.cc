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
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a.push_back(b);
    }
    vector<vector<int>> dp;
    int ans = 1;
    for (int i = 0; i < k+1; i++) {
        vector<int> line;
        line.push_back(1);
        for (int j = 1; j < n; j++) {
            int len = 1;
            if (i > 0) {
                for (int y = 0; y < line.size(); y++) {
                    if (dp[i - 1][y] + 1 > len) {
                        len = dp[i - 1][y] + 1;
                    }
                }
            }
            for (int x = 0; x < line.size(); x++) {
                if (a[x] <= a[j] && line[x] + 1 > len) {
                    len = line[x] + 1;
                }
            }
            if (len > ans) {
                ans = len;
            }
            line.push_back(len);
        }
        dp.push_back(line);
    }
    cout << ans;
}

