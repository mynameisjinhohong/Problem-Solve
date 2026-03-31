#include <iostream>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int a;
    cin >> a;
    int start = 1;
    int end = m;
    int ans = 0;
    for(int i = 0; i<a; i++){
        int t;
        cin >> t;
        if(t > end){
            int su = t - end;
            ans += su;
            end += su;
            start += su;
        }
        else if(t < start){
            int su = start - t;
            ans += su;
            end -= su;
            start -= su;
        }
    }
    cout << ans;
    return 0;
}