#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int ans = 0;
    for(int i = a; i<=b; i++){
        int su = i;
        for(int j = 0; j<4; j++){
            if(su % 10 == c){
                ans += 1;
            }
            su /= 10;
        }
    }
    cout << ans;
    return 0;
}