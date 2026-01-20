#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
    int idx = 1;
    while(true){
        int a;
        cin >> a;
        if(a == 0) break;
        
        map<string,int> before;
        vector<string> v;
        for(int i = 0; i<a; i++){
            string b;
            cin >> b;
            v.push_back(b);
            before[b] = i;
        }
        sort(v.begin(),v.end());
        int ans = 0;
        for(int i = 0; i<a; i++){
            ans += abs(i - before[v[i]]);
        }
        cout << "Site " << idx << ": "  << ans << "\n";
        idx ++;
    }
    return 0;
}