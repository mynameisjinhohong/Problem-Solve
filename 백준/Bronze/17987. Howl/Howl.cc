#include <iostream>

using namespace std;

int main() {
    string a;
    cin >> a;
    string ans = "";
    for(int i = 0; i<a.size()-2; i++){
        if(i%2 == 0){
            ans += "A";
        }
        else{
             ans += "W"   ;
        }
    }
    ans += "HOO";
    cout << ans;
    return 0;
}