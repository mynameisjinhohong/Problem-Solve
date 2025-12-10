#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if(a <= 10000){
        cout << "Accepted";
    }
    else{
        cout << "Time limit exceeded";
    }
    return 0;
}