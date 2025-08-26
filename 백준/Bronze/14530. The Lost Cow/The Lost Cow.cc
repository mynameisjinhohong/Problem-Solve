#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int ans = 0;
    int idx = 1;
    while(true){
        int before = a + idx;
        idx *= -2;
        ans += abs(before - a - idx);
        if(before <= b && b <= a+idx){
            ans -= (a+idx - b);
            break;
        }
        if(before >= b && b >= a + idx){
            ans += (a+idx - b);
            break;
        }
    }
    cout << ans+1;
    return 0;
}