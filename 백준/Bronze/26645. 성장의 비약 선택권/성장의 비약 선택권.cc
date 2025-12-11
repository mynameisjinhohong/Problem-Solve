#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if(a <206){
        cout << "1";
    }
    else if(a < 218){
        cout << "2";
    }
    else if(a < 229){
        cout << "3";
    }
    else{
        cout << "4";
    }
    return 0;
}