#include <iostream>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    for(int i =0; i<n; i++){
        int f,g;
        cin >> f >> g;
        switch (g) {
            case 1:
            case 2:
                a += 1;
                break;
            case 3:
            case 4:
                if(f == 0){
                    b += 1;
                }
                else{
                    c += 1;
                }
                break;
            case 5:
            case 6:
                if(f == 0){
                    d += 1;
                }
                else{
                    e += 1;
                }
                break;
        }
    }
    int ans = 0;
    if(a%k == 0){
        ans += a/k;
    }
    else{
        ans += a/k + 1;
    }
    if(b%k == 0){
        ans += b/k;
    }
    else{
        ans += b/k + 1;
    }
    if(c%k == 0){
        ans += c/k;
    }
    else{
        ans += c/k + 1;
    }
    if(d%k == 0){
        ans += d/k;
    }
    else{
        ans += d/k + 1;
    }
    if(e%k == 0){
        ans += e/k;
    }
    else{
        ans += e/k + 1;
    }
    cout << ans;
    return 0;
}