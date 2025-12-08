#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int ans1 = 0;
    int ans2 = 0;
    int a;
    cin >> a;
    for(int i =0; i<a; i++){
        int b;
        cin >> b;
        v.push_back(b);
        ans1 += b;
    }
    for(int i =0; i<a; i++){
        int b;
        cin >> b;
        if(b == 0){
            ans2 += v[i];
        }
    }
    cout << ans1 << "\n" << ans2;
    
    return 0;
}