#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int hap = 0;
    for(int i =0; i< b; i++){
        int su;
        cin >> su;
        hap += su;
    }
    cout << (float)(hap + (-3 * (a-b)))/(float)a << " " << (float)(hap + (3 * (a-b)))/(float)a;
    return 0;
}