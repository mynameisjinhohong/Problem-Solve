#include <iostream>
#include <map>

using namespace std;

int main() {
    int a;
    cin >> a;
    map<int,int> mp;
    for(int i = 0; i<a; i++){
        int b,d;
        string c;
        cin >> b >> c >> d;
        if(c == "L"){
            d *= -1;
        }
        mp[b] = b+d;
    }
    int now;
    cin >> now;
    for(int i = 0; i<a; i++){
        now = mp[now];
    }
    cout << now;
    return 0;
}