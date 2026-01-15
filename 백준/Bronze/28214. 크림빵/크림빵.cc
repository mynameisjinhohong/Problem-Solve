#include <iostream>

using namespace std;

int main() {
    int n,k,p;
    cin >> n >> k >> p;
    int ans = 0;
    for(int i =0; i<n; i++){
        int su = 0;
        for(int j = 0; j<k; j++){
            int a;
            cin >> a;
            if(a == 0) su++;
        }
        if(su < p){
            ans++;
        }
    }
    cout << ans;
    return 0;
}