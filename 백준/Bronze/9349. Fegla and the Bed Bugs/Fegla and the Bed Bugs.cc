#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =0; i<a; i++){
        int b,c;
        cin >> b >> c;
        int can = b-c;
        cout << can/(c-1) << "\n";
    }
    
    return 0;
}