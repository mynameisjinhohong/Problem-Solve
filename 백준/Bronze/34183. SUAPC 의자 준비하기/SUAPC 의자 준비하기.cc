#include <iostream>

using namespace std;

int main() {
    long n,m,a,b;
    cin >> n >> m >> a >> b;
    long ans = (n*3 -m)*a+b;
    if(n*3 - m <= 0){
        ans = 0;
    }
    cout << ans;
    return 0;
}