#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string a;
    cin >> a;
    a = a.substr(2);
    int mom = 1;
    int son = stoi(a);
    for(int i = 0; i<a.size(); i++){
        mom *= 10;
    }
    cout << "YES" << endl;
    cout << son << " " << mom;
    
    return 0;
}