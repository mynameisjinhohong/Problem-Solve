#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> v = {"G...",".I.T","..S."};
    int a;
    cin >> a;
    for(int i = 0; i<a*3; i++){
        string origin = v[i/a];
        for(int j = 0; j<4; j++){
            for(int k = 0; k<a; k++){
                cout << origin[j];
            }
        }
        cout <<"\n";
    }
    return 0;
}