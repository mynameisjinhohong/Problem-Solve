#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if(a*b > a+(b*c)){
        cout << 2;
    }
    else if(a*b < a+(b*c)){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}