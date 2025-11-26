#include <iostream>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;
    int ans = 10001;
    for(int i = 0; i< a; i++){
        int b,c;
        cin >> b >> c;
        if(b <= c){
            if(c < ans){
                ans = c;
            }
        }
    }
    if(ans == 10001){
        ans = -1;
    }
    cout << ans;
    return 0;
}