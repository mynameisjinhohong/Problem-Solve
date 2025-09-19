#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <cmath>

using namespace std;

const int INF = 987654321;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> nodes;
    for (int i = 0; i < n; i++) {
        vector<int> node;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            node.push_back(a);
        }
        nodes.push_back(node);
    }

    vector<vector<int>> dp;
    //i == 방문 횟수, j == 현위치;
    for (int i = 0; i < n; i++) {
        vector<int> line;
        for (int j = 0; j < n; j++) {
            int hubo = INF;
            if (i != 0) {
                for (int k = 0; k < n; k++) {
                    if (nodes[k][j] != 0 && dp[i-1][k] != -1) {
                        hubo = min(hubo, dp[i - 1][k] + nodes[k][j]);
                    }
                }
            }
            else {
                hubo = 0;
            }
            if (hubo == INF) {
                hubo = -1;
            }
            line.push_back(hubo);
        }
        dp.push_back(line);
    }
    int ans = INF;
    for (int i = 0; i < n; i++) {
        ans = min(ans, dp[n - 1][i]);
    }
    cout << ans;
}

