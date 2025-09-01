#include <iostream>
#include <vector>

using namespace std;

int main() {
    while(true){
        int a,b,c;
        cin >> a >> b >> c;
        if(a==0 && b == 0 && c ==0){
            break;
        }
        int ans = 0;
        vector<int> n;
        int before = 0;
        cin >> before;
        for(int i =1; i<a; i++){
            int su;
            cin >> su;
            if(i >= b && i <= c){
                n.push_back(before-su);
            }
            before = su;
        }
        int best = 0;
        for(int i =0; i<n.size(); i++){
            if(n[i] >= best){
                best = n[i];
                ans = i+b;
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}