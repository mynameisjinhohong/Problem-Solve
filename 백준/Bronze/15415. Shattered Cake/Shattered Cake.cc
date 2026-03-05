#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int hap = 0;
    for(int i = 0; i<b; i++){
        int c,d;
        cin >> c >> d;
        hap += c*d;
    }
    cout << hap/a;
    
    return 0;
}