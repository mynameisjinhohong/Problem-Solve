#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =0; i<a; i++){
        int b;
        cin >> b;
        long long ans = 0;
        if(b%2 == 0){
            int su = b/2;
            ans = pow(2,su);
        }
        cout << ans << "\n";
    }
    return 0;
}