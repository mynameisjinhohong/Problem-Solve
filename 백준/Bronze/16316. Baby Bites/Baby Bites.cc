#include <iostream>
#include <string>

using namespace std;
int main() {
    int a;
    cin >> a;
    bool answer = true;
    for(int i = 0; i<a; i++){
        string b;
        cin >> b;
        if(b != "mumble"){
            if(stoi(b) != i+1){
                answer = false;
            }
        }
    }
    if(answer){
        cout << "makes sense";
    }
    else{
        cout << "something is fishy";
    }
    return 0;
}