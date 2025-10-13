#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    for(int i =0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i =0; i<n; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    int ans = 0;
    for(int j = n; j >0; j--){
        if(a == b){
            ans = 1;
            break;
        }
        int big = a[0];
        int idx = 0;
        for(int i =1; i<j; i++){
            if(a[i] >= big){
                big = a[i];
                idx = i;
            }
        }
        int temp = a[idx];
        a[idx] = a[j-1];
        a[j-1] = temp;
    }
    cout << ans;
    return 0;
}