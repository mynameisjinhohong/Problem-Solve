#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =0; i<a; i++){
        int b,c;
        cin >> b >>c;
        cout << "You get " << b/c <<" piece(s) and your dad gets " << b%c <<" piece(s).\n";        
    }
    return 0;
}