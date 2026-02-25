#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b && b == c){
        cout << "*";
    }
    else if(a == b){
        cout << "C";
    }
    else if(a == c){
        cout << "B";
    }
    else{
        cout << "A";
    }
    return 0;
}