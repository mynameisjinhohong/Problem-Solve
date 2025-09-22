#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0; i<a; i++){
        int b,c;
        cin >> b >> c;
        int count = 0;
        while(b!= 0){
            if(b%2 == 1){
                count += 1;
            }
            b = b >> 1;
        }
        if(count % 2 == c){
            cout << "Valid\n"; 
        }
        else{
            cout << "Corrupt\n";
        }
    }
    return 0;
}