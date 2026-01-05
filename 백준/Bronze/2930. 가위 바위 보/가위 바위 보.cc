#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a;
    cin >> a;
    string b;
    cin >> b;
    int su;
    cin >> su;
    int ans = 0;
    int ans2 = 0;
    vector<vector<int>> s(a,vector<int>(3));
    for(int i =0; i<su; i++){
        string other;
        cin >> other;
        for(int j =0; j<a; j++){
            if((b[j] == 'S' && other[j] == 'P') || (b[j] == 'R' && other[j] == 'S') || (b[j] == 'P' && other[j] == 'R')){
                ans += 2;
            }
            else if(b[j] == other[j]){
                ans += 1;
            }
            if(other[j] == 'P'){
                s[j][0] += 1;
            }
            if(other[j] == 'S'){
                s[j][1] += 1;
            }
            if(other[j] == 'R'){
                s[j][2] += 1;
            }
        }
    }
for (int i = 0; i < a; i++) {
    int p = s[i][0];
    int sc = s[i][1];
    int r = s[i][2];

    int best = max({ 2*p + sc,      // 상근이 S
                     2*sc + r,      // 상근이 R
                     2*r + p });    // 상근이 P
    ans2 += best;
}
    cout << ans << "\n" << ans2;
    return 0;
}