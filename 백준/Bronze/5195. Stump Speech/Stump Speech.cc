#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =0; i<a; i++){
        int b;
        cin >> b;
        cin.ignore();
        map<string,int> mp;
        for(int j =0; j<b; j++){
            string c;
            string d;
            getline(cin,c);
            getline(cin, d);
            int e = stoi(d);
            mp[c] = e;
        }
        int ans = 0;
        string line;
        getline(cin,line);
        for(pair<string,int> p : mp){
            int idx = 0;
            while(true){
                idx = line.find(p.first,idx);
                if(idx == -1) break;
                ans += p.second;
                idx++;
            }
        }
        cout << "Data Set "<< i+1 <<":\n" << ans <<"\n";
    }
    return 0;
}