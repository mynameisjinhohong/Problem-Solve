#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


int main()
{
    int n;
    cin >> n;
    for(int i =0; i<n; i++)
    {
        int a,b;
        cin >> a >> b;
        cout << a << " " << b << endl;
        cout << a*b - (a-1)*2 << endl;
    }
}
