#include <iostream>

using namespace std;

int main() {
    int a,x,b,y,t;
    cin >> a >> x >> b >> y >> t;
    int one = (t-30) *x;
    if(one < 0){
        one = 0;
    }

    int two = (t-45) * y;
    if(two < 0){
        two = 0;
    }

    cout << one * 21  + a << " " << two * 21 + b; 
    
    return 0;
}