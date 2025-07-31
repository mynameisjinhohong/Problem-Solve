#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a,b;
    cin >> a >> b;
    double test = a/b; 
    double c,d;
    cin >> c >> d;
    double test2 = c*c*M_PI/d;
    if(test>test2){
        cout << "Slice of pizza";
    }
    else{
        cout << "Whole pizza";
    }
    return 0;
}