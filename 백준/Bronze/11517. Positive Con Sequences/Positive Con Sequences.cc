#include <iostream>

using namespace std;

int main() {
    while(true){
        int a,b,c,d;
        cin >> a >> b >> c>> d;
        if(a == -1 && b == -1 && c == -1 && d == -1) break;
        int ans = -1;
        if(a == -1){
            if(c-b == d-c)
            {
                ans = b-(c-b);
            }
            else if(d%c == 0 && c %b == 0 && d/c == c/b){
                if(b%(c/b) == 0){
                    ans = b/(c/b);
                }
            }
        }
        else if(b == -1){
            if((d-c)*2 == c - a){
                ans = a + (d-c);
            }
            else if(d%c == 0 && c%a == 0 && c/a == (d/c) * (d/c)){
                ans = a * (d/c);
            }
        }
        else if(c == -1){
            if((b-a)*2 == d - b){
                ans = b + (b-a);
            }
            else if(b%a == 0 && d%b == 0 && d/b == (b/a) * (b/a)){
                ans = b * (b/a);
            }
        }
        else{
            if(c-b == b-a)
            {
                ans = c+(c-b);
            }
            else if(c%b == 0 && b%a == 0 && b/a == c/b){
                ans = c * (c/b);
            }
        }
        if(ans <= 0 || ans > 10000) ans = -1;
        cout << ans << "\n";
    }
    return 0;
}