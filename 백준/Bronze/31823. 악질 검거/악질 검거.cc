#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    vector<int> v(a);
    vector<string> name(a);
    for(int i = 0; i<a; i++){
        int best = 0;
        int now = 0;
        for(int j = 0; j<b; j++){
            string c;
            cin >> c;
            if(c == "*"){
                now = 0;
            }
            else{
                now += 1;
                if(now > best){
                    best = now;
                }
            }
        }
        v[i] = best;
        string n;
        cin >> n;
        name[i] = n;
    }
    set<int> s(v.begin(),v.end());
    cout << s.size() << "\n";
    for(int i = 0; i<a; i++){
        cout<< v[i] << " " << name[i] << "\n";
    }
    return 0;
}