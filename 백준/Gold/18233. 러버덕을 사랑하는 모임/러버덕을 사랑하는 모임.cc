#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <cmath>

using namespace std;

bool Find = false;

void Com(int len, int max, int before, vector<pair<int, int>> vec,vector<int> ans, int target) {
    if (Find) {
        return;
    }
    if (len == 0) {
        int small = 0;
        int big = 0;
        for (int i = 0; i < ans.size(); i++) {
            small += vec[ans[i]].first;
            big += vec[ans[i]].second;
        }
        if (small <= target && big >= target) {
            Find = true;
            vector<int> test;
            int su = target;
            for (int i = 0; i < ans.size(); i++) {
                test.push_back(vec[ans[i]].first);
                su -= vec[ans[i]].first;
            }
            for (int i = 0; i < ans.size(); i++) {
                if (su > vec[ans[i]].second - test[i]) {
                    su -= vec[ans[i]].second - test[i];
                    test[i] = vec[ans[i]].second;
                }
                else {
                    test[i] += su;
                    su = 0;
                    break;
                }
            }

            int idx = 0;
            for (int i = 0; i < vec.size(); i++) {
                if (i == ans[idx]) {
                    cout << test[idx] << " ";
                    if (idx < max - 1) {
                        idx += 1;
                    }
                }
                else {
                    cout << 0 << " ";
                }
            }
        }
        
        return;
    }
    for (int i = before; i < vec.size(); i++) {
        ans[max - len] = i;
        Com(len - 1, max, i + 1, vec, ans,target);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    int n, p, e;
    cin >> n >> p >> e;
    vector<pair<int, int>> vec;
    vector<vector<int>> end;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        pair<int, int> a(x, y);
        vec.push_back(a);
    }
    vector<int> ans(p,0);
    Com(p, p, 0, vec, ans, e);
    if (Find == false) {
        cout << -1;
    }
}

