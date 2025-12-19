#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int hap = 0;
    for(int i =0; i<a; i++){
        int b;
        cin >> b;
        hap += b;
    }
    if(hap%3 == 0){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}