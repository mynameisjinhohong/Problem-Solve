#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,p,q,r,s,a;
    cin >> n >> p >> q >> r >> s >> a;
    vector<long> sus;
    sus.push_back(0);
    sus.push_back(a);
    long ans = a;
    for(int i =2; i<=n; i++){
        if(i % 2 == 0){
            ans += p*sus[i/2] + q;
            sus.push_back(p*sus[i/2] + q);
        }
        else{
            ans += r*sus[(i-1)/2]+s;
            sus.push_back(r*sus[(i-1)/2]+s);
        }
    }
    cout << ans;
    return 0;
}