#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int ans = 1;
    for(int i =0; i<a; i++){
        int c;
        cin >> c;
        if(c == 0){
            c = 1;
        }
        ans *= c;
        ans %= b;
    }
    ans %= b;
    cout << ans;
    return 0;
}