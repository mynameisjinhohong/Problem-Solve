#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i =0 ;i<n; i++){
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        cout << fixed;
        cout.precision(2);
        cout << "$" << 350.34 * a + 230.90*b + 190.55*c + 125.30*d + 180.90*e<<endl;
    }
}
