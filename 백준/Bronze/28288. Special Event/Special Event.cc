#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> v(5,0);
    int best = 0;
    for(int i =0; i <a; i++){
        string b;
        cin >> b;
        for(int j = 0; j<5; j++){
            if(b[j] == 'Y'){
                v[j] += 1;
                if(v[j] > best){
                    best = v[j];
                }
            }
        }
    }
    bool first = true;
    for(int i =0; i < 5; i++){
        if(v[i] == best){
            if(first){
                first = false;
                cout << i+1;
            } 
            else{
                cout << ","<<i+1;
            }
        }
    }
    return 0;
}