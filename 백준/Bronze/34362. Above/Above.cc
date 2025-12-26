#include <iostream>

using namespace std;

int main() {
    double a;
    cin >> a;
    double b = 0.3;
    a -= b;
    cout << fixed;
    cout.precision(4);
    cout << a;
    
    return 0;
}