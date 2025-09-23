#include <iostream>
#include <vector>

using namespace std;

const int MAX = 987654321;
int main() {
    int a;
    cin >> a;
    vector<int> vec;
    for(int i =0; i<a; i++){
        int b;
        cin >> b;
        vec.push_back(b);
    }
    int ans1 = MAX;
    int ans2 = 0;
    for(int i =0; i<a; i++){
        for(int j = i+1; j<a; j++){
            int su = abs(vec[i]-vec[j]);
            if( su < ans1){
                ans1 = su;
                ans2 = 1;
            }
            else if(su == ans1){
                ans2 += 1;
            }
        }
    }
    cout << ans1 << " " << ans2;
    return 0;
}