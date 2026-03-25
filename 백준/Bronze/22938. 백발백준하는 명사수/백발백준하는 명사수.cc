#include <iostream>

using namespace std;

int main() {
    long a,b,c;
    long d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    if((c+f)*(c+f) > ((a-d) * (a-d)) + ((b-e) * (b-e))){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}