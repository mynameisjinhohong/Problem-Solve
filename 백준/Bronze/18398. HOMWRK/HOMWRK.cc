#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


int main()
{
    int n;
    cin >>  n;
    for(int i =0; i<n; i++){
        int t;
        cin >> t;
        for(int j =0; j<t; j++){
            long long a,b;
            cin >> a >> b;
            cout << a+b << " " << a*b << endl;
        }
    }

}
