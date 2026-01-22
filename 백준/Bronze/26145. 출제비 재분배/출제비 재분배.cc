#include <iostream>
#include <vector>

using namespace std;


int main() {
    int a,b;
    cin >> a >> b;
    vector<int> ans(a+b);
    for(int i = 0; i<a; i++){
        int c;
        cin >> c;
        ans[i] = c;
    }
    for(int i = 0; i<a; i++){
        int d;
        for(int j = 0; j<a+b; j++){
            cin >> d;
            ans[i] -= d;
            ans[j] += d;
        }
    }
    for(int i =0; i< a+b; i++){
        cout << ans[i] << " ";
    }
    
    return 0;
}