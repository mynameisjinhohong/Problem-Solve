#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a;
    while(true){
        cin >> a;
        int su = stoi(a);
        if(su == 0){
            break;
        }
        int fac = 1;
        int ans = 0;
        for(int i =0; i<a.length(); i++){
            fac *= (i+1);
            ans += (int)(a[a.length()-i-1] - '0') * fac;
        }
        cout << ans << "\n";
    }
    return 0;
}