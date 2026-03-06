#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a,b;
    cin >> a >> b;
    cout.precision(25);
    cout << ((a+10) * M_PI * b) + ((((a+10)/2) * ((a+10)/2)) * M_PI);
    return 0;
}