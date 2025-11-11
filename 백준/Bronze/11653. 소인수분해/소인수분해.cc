#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    while(a != 1){
        for(int i = 2; i<=a; i++){
            if(a%i == 0){
                a /= i;
                cout << i << "\n";
                break;
            }
        }        
    }

    return 0;
}