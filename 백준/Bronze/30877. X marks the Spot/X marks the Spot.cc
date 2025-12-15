#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    for(int i =0; i<a; i++){
        string b,c;
        cin >> b >> c;
        int su = -1;
        for(int j = 0; j<b.size(); j++){
            if(b[j] == 'x' || b[j] == 'X'){
                su = j;
                break;
            }
        }
        char ans = c[su];
        if(int(ans) < 123 && int(ans) > 96){
            ans = char(int(ans) - 32);
        }
        cout << ans;
    }
    return 0;
}