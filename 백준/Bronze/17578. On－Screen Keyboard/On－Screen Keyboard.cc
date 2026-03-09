#include <iostream>
#include <map>
#include <cstdlib>

using namespace std;

int main() {
    while(true){
        int a,b;
        cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }
        map<char,pair<int,int>> mp;
        for(int i = 0; i<a; i++){
            string c;
            cin >> c;
            for(int j = 0; j<b; j++){
                if(c[j] == '_') continue;
                mp[c[j]] = pair<int,int>(j,i);
            }
        }
        string d;
        cin >> d;
        int x = 0;
        int y = 0;
        int ans = 0;
        for(int i = 0; i<d.size(); i++){
            int first = mp[d[i]].first;
            int second = mp[d[i]].second;
            ans += abs(x - first) + abs(y - second) + 1;
            x = first;
            y = second;
        }
        cout << ans <<"\n";
    }
    return 0;
}