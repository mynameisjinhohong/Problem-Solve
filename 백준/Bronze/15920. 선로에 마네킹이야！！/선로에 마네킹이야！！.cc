#include <iostream>

using namespace std;

int main() {
    int a;
    string b;
    cin >> a >> b;
    int time = 0;
    int die = 5;
    for(int i = 0; i<a; i++){
        if(b[i] == 'P'){
            if(time == 1){
                die = 6;
            }
            else{
                if(die == 5){
                    die = 1;
                }
                else{
                    die = 5;
                }
            }
        }
        else{
            time += 1;
        }
        if(time == 2) break;
    }
    if(time < 2){
        cout << 0;
    }
    else{
        cout << die;
    }
    return 0;
}