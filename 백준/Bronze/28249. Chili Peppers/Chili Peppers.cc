#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int ans = 0;
    for(int i =0; i<a; i++){
        string b;
        cin >> b;
        if(b =="Poblano" ){
            ans += 1500;
        }
        else if(b == "Mirasol"){
            ans += 6000;
        }
        else if(b == "Serrano"){
            ans += 15500;
        }
        else if(b == "Cayenne"){
            ans += 40000;
        }
        else if(b == "Thai"){
            ans += 75000;
        }
        else if(b == "Habanero"){
            ans += 125000;
        }
    }
    cout << ans;
    return 0;
}