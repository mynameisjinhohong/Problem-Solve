#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> a;
    for(int i =0; i<n; i++){
        int b;
        cin >> b;
        a.push_back(b);
    }
    sort(a.rbegin(),a.rend());
    cout << a[k-1];
    return 0;
}