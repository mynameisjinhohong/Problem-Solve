#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a;
    string b;
    cin >> a >> b;
    int u = 0;
    int o = 0;
    int s = 0;
    int p = 0;
    int c = 0;
    for(int i =0; i<a; i++){
        if(b[i] == 'u') u++;
        if(b[i] == 'o') o++;
        if(b[i] == 's') s++;
        if(b[i] == 'p') p++;
        if(b[i] == 'c') c++;
    }
    int ans;
    ans = min(u,o);
    ans = min(ans,s);
    ans = min(ans,p);
    ans = min(ans,c);
    cout << ans;
    return 0;
}