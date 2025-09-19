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
    int n;
    cin >> n;
    vector<int> sa;
    sa.push_back(1);
    int su = 1;
    int suPlus = 2;
    while (true)
    {
        su += suPlus;
        int target = su + sa[sa.size() - 1];
        if (target > n) {
            break;
        }
        sa.push_back(target);
        suPlus += 1;
    }
    vector<int> dp;
    dp.push_back(0);
    for (int i = 1; i <= n; i++) {
        dp.push_back(i);
    }
    for (int i = 1; i < sa.size(); i++) {
        int target = sa[i];
        for (int j = 0; j <= n; j++) {
            if (target <= j) {
                dp[j] = min(dp[j], dp[j - target] + 1);
            }
        }
    }
    cout << dp[n];

}

