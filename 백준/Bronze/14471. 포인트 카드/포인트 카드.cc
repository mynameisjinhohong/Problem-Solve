#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int ans = 0;
    int max = 0;
    for(int i =0; i<b; i++){
        int c,d;
        cin >> c >> d;
        if(c < a){
            ans += a - c;
            if(a - c > max){
                max = a - c;
            }
        }
    }
    ans -= max;
    cout << ans;
    return 0;
}