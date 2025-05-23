#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <climits>

using namespace std;


int main()
{
    int a,b;
    cin >> a >> b;
    int ans = 0;
    for(int i = 0; i<a; i++){
        ans += pow(10,i);
    }
    for(int i = 0; i<b; i++){
        ans += pow(10,i);
    }
    cout << ans;


    
}
