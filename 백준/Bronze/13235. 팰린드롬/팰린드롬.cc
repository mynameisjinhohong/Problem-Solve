#include <iostream>

using namespace std;

int main() {
    string a;
    cin >> a;
    for(int i = 0; i< a.size() /2 ; i++){
        if(a[i] != a[a.size() -1 - i]){
            cout << "false";
            return 0 ;
        }
    }
    cout << "true";
    return 0;
}