#include <iostream>

using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    if(b.size() > a.size()){
        string tmp = b;
        b = a;
        a = tmp;
    }
    int su = a.size()-b.size();
    for(int i = 0; i<su; i++){
        b = '0' + b;
    }

    for(int i = 0; i<a.size(); i++){
        cout << a[i] + b[i] - 96;
    }

    
    return 0;
}