#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main()
{
    long long n;
    cin >> n;
    long long ans = 0;
    for(long long i = 1; i<n; i++){
        ans += i*n + i;
    }
    cout << ans;
}
