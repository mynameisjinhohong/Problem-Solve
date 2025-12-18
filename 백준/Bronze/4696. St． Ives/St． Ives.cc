#include <iostream>

using namespace std;

int main() {
    while(true){
        float a;
        cin >> a;
        if(a == 0){
            break;
        }
        cout << fixed;
        cout.precision(2);
        cout << 1 + a + a*a + a*a*a + a*a*a*a << endl;
    }
    return 0;
}