#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> v;
    for(int i = 0; i<a; i++){
        int b;
        cin >> b;
        v.push_back(b);
    }
    for(int i = 1; i<=a; i++){
        for(int j = 0; j<a; j++){
            if(v[j] == i){
                cout << j+1 << "\n";
                break;
            }
        }
    }
    return 0;
}