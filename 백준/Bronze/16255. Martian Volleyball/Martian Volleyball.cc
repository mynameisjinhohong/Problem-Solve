#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0; i<a; i++){
        int b,c,d;
        cin >> b >> c >> d;
        int ans = 0;
        if(c < d){
            if(b > d){
                ans += b-d;
                d = b;
            }
            if(d < c +2){
                ans += (c+2) - d;
            }
        }
        else{
            if(b > c){
                ans += b-c;
                c = b;
            }
            if(c < d +2){
                ans += (d+2) - c;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}