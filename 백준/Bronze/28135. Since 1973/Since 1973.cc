#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    cin >> a;
    int ans = 0;
    for(int i =1; i<a; i++){
        string b = to_string(i);
        if(b.find("50") != string::npos) ans += 2;
        else ans += 1;
    }
    cout << ans + 1;
    return 0;
}