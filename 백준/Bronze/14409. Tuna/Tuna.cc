#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a,x;
    cin >> a >> x;
    int ans = 0;
    for(int i = 0; i<a; i++){
        int b,c;
        cin >> b >> c;
        if(b > c){
            if(b-c > x){
                int d;
                cin >> d;
                ans += d;
            }
            else{
                ans += b;
            }
        }
        else{
            if(c-b > x){
                int d;
                cin >> d;
                ans += d;
            }
            else{
                ans += c;
            }
        }
    }
    cout << ans;
    return 0;
}