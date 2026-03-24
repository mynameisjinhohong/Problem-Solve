#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> v;
    for(int i = 0; i<a; i++){
        int d;
        cin >> d;
        v.push_back(d);
    }
    sort(v.begin(),v.end());
    int hap = b *c;
    int ans = 0;
    while(hap > 0){
        hap -= v[v.size()-1 - ans];
        ans += 1;
    }
    cout << ans;
    return 0;
}