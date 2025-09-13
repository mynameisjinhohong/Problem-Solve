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
    string a, b;
    cin >> a >> b;
    string ans;
    if(a == "E")
    {
        int idx = 1;
        char before = b[0];
        for (int i = 1; i < b.size(); i++) {
            if (b[i] != before) {
                ans += before;
                ans += to_string(idx);
                idx = 1;
                before = b[i];
            }
            else {
                idx += 1;
            }
        }
        ans += before;
        ans += to_string(idx);
    }
    else
    {
        char before = 0;
        for (int i = 0; i < b.size(); i++) {
            if (i % 2 == 0) {
                before = b[i];
            }
            else {
                for (int j = 0; j < b[i] - '0'; j++) {
                    ans += before;
                }
            }
        }
    }
    cout << ans;
}

