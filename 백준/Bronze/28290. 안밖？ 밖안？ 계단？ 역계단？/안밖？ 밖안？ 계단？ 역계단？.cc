#include <iostream>

using namespace std;

int main() {
    string a;
    cin >> a;
    if(a == "fdsajkl;" || a =="jkl;fdsa" ){
            cout << "in-out";
    }
    else if(a == "asdf;lkj" || a == ";lkjasdf"){
            cout << "out-in";
    }
    else if(a == "asdfjkl;"){
            cout << "stairs";
    }
    else if(a == ";lkjfdsa"){
            cout << "reverse";
    }
    else{
            cout << "molu";
    }
    return 0;
}