#include <iostream>

using namespace std;

int main() {
    while(true){
        string a;
        getline(cin,a);
        for(int i =0; i<a.size(); i++){
            if(a[i] == 'i'){
                cout << 'e';
            }
            else if(a[i] == 'I'){
                cout << 'E';
            }
                else if(a[i] == 'e'){
                    cout << 'i';
                }
                    else if(a[i] == 'E'){
                        cout << 'I';
                    }
            else{
                cout << a[i];
            }
        }
        cout << "\n";
        if(cin.eof()){
            break;
        }
    }
    
    return 0;
}