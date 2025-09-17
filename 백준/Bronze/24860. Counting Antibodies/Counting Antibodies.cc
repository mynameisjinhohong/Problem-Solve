#include <iostream>

using namespace std;

int main() {
    long a,b,c,d,e,f,g;
    cin >> a >> b >> c >> d >> e>> f>>g;
    long ans;
    ans = a*b * e * f * g;
    ans += c * d*e*f*g;
    cout << ans;
    return 0;
}