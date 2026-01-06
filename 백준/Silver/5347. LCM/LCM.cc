#include <iostream>
#include <algorithm>

using namespace std;

int GCD(int big, int small){
    int su = big % small;
    if(su == 0) return small;
    return GCD(small,su);
}

int main() {
    int a;
    cin >> a;
    for(int i = 0; i<a; i++){
        long b,c;
        cin >> b >> c;
        cout << b*c/GCD(max(b,c),min(b,c)) << "\n"; 
    }
    return 0;
}