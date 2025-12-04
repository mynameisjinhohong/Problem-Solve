#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    bool turn = true;
    while(true){
        if(turn){
            b += a;
        }
        else{
            a += b;
        }
        turn = !turn;
        if(a >= 5){
            cout << "yj";
            break;
        }
        if(b >= 5){
            cout << "yt";
            break;
        }
        
    }
    return 0;
}