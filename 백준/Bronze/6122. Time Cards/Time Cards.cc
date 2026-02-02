#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    vector<int> time(a);
    vector<int> ans(a,0);
    for(int i =0; i<b; i++){
        int c,d,e;
        string f;
        cin >> c >> f >> d >> e;
        if(f == "START"){
            time[c-1] = d*60 + e;
        }
        else{
            ans[c-1] += (d*60 +e) - time[c-1];
        }
    }
    for(int i = 0; i < a; i++){
        cout << ans[i]/60 << " " << ans[i]%60 <<"\n";
    }
    return 0;
}