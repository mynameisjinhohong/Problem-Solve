#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <cmath>

using namespace std;

bool Check(int su) {
    double test = sqrt((double)su);
    return test == floor(test);
}

int Func(vector<vector<int>> field, int x, int y, int xp, int yp) {
    int nowX = x;
    int nowY = y;
    if (xp == 0 && yp == 0) {
        if (Check(field[nowY][nowX])) {
            return field[nowY][nowX];
        }
        else {
            return -1;
        }
    }
    string ans;
    int target = -1;
    while (nowX < field[0].size() && nowX >= 0 && nowY < field.size() && nowY >= 0)
    {
        ans += to_string(field[nowY][nowX]);
        nowX += xp;
        nowY += yp;
        int su = stoi(ans);
        if (Check(su)) {
            if (su > target) {
                target = su; 
            }
        }
    }
    return target;
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> field;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        vector<int> tmp;
        for (int j = 0; j < a.size(); j++) {
            tmp.push_back(a[j] - '0');
        }
        field.push_back(tmp);
    }

    int ans = -1;
    //등차수열들 브루트포스
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = -i; k < m - i; k++) {
                for (int l = -j; l < n - j; l++) {
                    int su = Func(field, i, j, k, l);
                    if (su > ans) {
                        ans = su;
                    }
                }
            }
        }
    }
    cout << ans;

}

