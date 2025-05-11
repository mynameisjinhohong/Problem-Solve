#include <iostream>
using namespace std;

int main() {
    long long a;
    cin >> a;
    long long ans = 0;
    while(true){
        if(a == 1){
            break;
        }
        if(a%2 == 0){
            a = a/2;
        }
        else{
            a = a*3 + 1;
        }
        ans += 1;
    }
    cout << ans;
    return 0;
}