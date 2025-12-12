#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;
    int ans = 0;
    vector<bool> b(100);
    for(int i =0; i<a; i++){
        int c;
        cin >> c;
        if(!b[c-1]){
            b[c-1] = true;
        }
        else{
            ans += 1;
        }
    }
    cout << ans;
    return 0;
}