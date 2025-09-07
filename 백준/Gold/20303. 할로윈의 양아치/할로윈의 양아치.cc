#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

int find(vector<int>& uni, int target) {
    if (uni[target] == target) {
        return target;
    }
    int su = find(uni, uni[target]);
    uni[target] = su;
    return su;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m, k;
	cin >> n >> m >> k;
    vector<int> uni;
    vector<int> candy;
    for (int i = 0; i < n + 1; i++) {
        uni.push_back(i);
    }
    candy.push_back(0);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        candy.push_back(a);
    }
    
    //배열 병합
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        int su1 = find(uni, a);
        int su2 = find(uni, b);
        int su = min(su1, su2);
        uni[su1] = su;
        uni[su2] = su;
    }

    //모든 노드가 자신의 루트 노드를 가르키도록
    for (int i = n; i > 0; i--) {
        find(uni, i);
    }

    //배낭 만들기

    unordered_map<int,pair<int,int>> hubo;
    vector<int> huboSu;
    for (int i = 1; i < n+1; i++) {
        if (uni[i] == i) {
            hubo[i] = pair<int, int>(1, candy[i]);
            huboSu.push_back(i);
        }
        else {
            hubo[uni[i]].first++;
            hubo[uni[i]].second += candy[i];
        }
    }
    for (int i = huboSu.size() - 1; i >= 0; i--) {
        if (hubo[huboSu[i]].first >= k) {
            hubo.erase(huboSu[i]);
            huboSu.erase(huboSu.begin() + i);
        }
    }

    vector<int> dp(k, 0);
    if (huboSu.size() < 1) {
        cout << 0;
    }
    else {
        for (int i = 0; i < k; i++) {
            if (i >= hubo[huboSu[0]].first) {
                dp[i] = hubo[huboSu[0]].second;
            }
        }

        for (int i = 1; i < huboSu.size(); i++) {
            pair<int, int> target = hubo[huboSu[i]];
            for (int j = k - 1; j >= target.first; j--) {
                dp[j] = max(target.second + dp[j - target.first], dp[j]);
            }
        }
        cout << dp[k-1];
    }

}

