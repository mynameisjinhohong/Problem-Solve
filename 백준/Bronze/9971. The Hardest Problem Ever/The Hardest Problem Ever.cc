#include <iostream>

using namespace std;

char Change(char a){
    int su = (int)a;
    if(su <= 90 && su >= 65){
        su -= 5;
        if(su < 65){
            su = 90 - (64 - su);
        }
    }
    return (char)su;
}

int main() {
    bool start = false;
    while(true){
        string a;
        getline(cin,a);
        if(a == "START" || a == "END"){
            continue;
        }
        if(a == "ENDOFINPUT"){
            break;
        }
        for(int i = 0; i<a.size(); i++){
            cout << Change(a[i]);
        }
        cout << "\n";
        
    }
    return 0;
}