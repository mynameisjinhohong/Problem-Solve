#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int idx = 0;
    int c = a;
    a = max(c,b);
    b = min(c,b);
    while(a != b){
        idx += 1;
        c = a - b;
        a = max(c,b);
        b = min(c,b);
    }
    cout << idx;
    return 0;
}