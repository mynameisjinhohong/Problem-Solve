#include <iostream>

using namespace std;

int main() {
        string a,b;
    while(cin >> a >> b){
        int idx = 0;
        bool find = false;
        for(int i = 0; i<b.size(); i++){
            if(a[idx] == b[i]){
                idx += 1;
            }
            if(idx >= a.size()){
                find = true;
                break;
            }
        }
        
        if(find){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}