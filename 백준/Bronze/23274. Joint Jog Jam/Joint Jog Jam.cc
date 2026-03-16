#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a,b,c,d,e,f,g,h;
    cin >> a >> b >> c >> d>> e >> f>> g>> h;
    double one = sqrt( ((c-a)*(c-a)) + ((d-b) * (d-b)));
    double two = sqrt( ((g-e)*(g-e)) + ((h-f) * (h-f)));
    cout.precision(10);
    if(one > two){
        cout << one;
    }
    else{
        cout << two;
    }
    return 0;
}