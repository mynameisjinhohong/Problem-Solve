#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a;
    int x,y;
    cin >> x >> y;
    for(int i =0; i<x; i++){
        int c,d;
        cin >> c >> d;
        for(int j =0; j<c; j++){
            a.push_back(d);
        }
    }
    int ans = 0;
    int idx = 0;
    for(int i = 0; i<y; i++){
        int c,d;
        cin >> c >> d;
        for(int j = 0; j<c; j++){
            if(d- a[j+idx] > ans){
                ans = d - a[j+idx];
            }
        }
        idx += c ;
    }
    cout << ans;
    return 0;
}