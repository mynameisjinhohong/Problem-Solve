#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    bool end = false;
    for(int i =1; i<= a; i++){
        cout << i << " ";
        end = false;
        if(i%6 == 0){
            cout << "Go! ";
            end = true;
        }
    }
    if(!end){
        cout << "Go!";
    }
    return 0;
}