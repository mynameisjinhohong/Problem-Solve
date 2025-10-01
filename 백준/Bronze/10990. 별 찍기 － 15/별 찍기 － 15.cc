#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0; i<a; i++){
        string b = "";
        for(int j =0; j<a-i-1; j++){
            b += " ";
        }
        b += "*";
        if(i == 0){
            cout << b << "\n";
            continue;
        }
        for(int j =0; j < i*2 -1; j++){
            b += " ";
        }
        b += "*\n";
        cout << b;
    }
    
    return 0;
}