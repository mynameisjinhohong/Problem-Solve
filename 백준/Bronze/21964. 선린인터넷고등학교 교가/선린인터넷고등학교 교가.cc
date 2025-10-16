#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    string b;
    cin >> b;
    string ans = "";
    for(int i = 0; i<5; i++){
        ans += b[b.size()-5 + i];
    }
    cout << ans;
    
    return 0;
}