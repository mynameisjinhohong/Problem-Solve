#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =0; i<a; i++){
        string b;
        cin >> b;
        string ans = "";
        bool p = false;
        for(int j =0; j<b.size(); j++){
            if(p){
                if(b[j] =='O'){
                    ans += "HO";
                    p = false;
                    continue;
                }
                else{
                    p = false;
                }
            }
            ans += b[j];
            if(b[j] == 'P'){
                p = true;
            }
        }
        cout << ans <<"\n";
    }
    return 0;
}