#include <iostream>
#include <map>

using namespace std;

int main() {
    int a;
    cin >> a;
    map<int,int> ma;
    for(int i =0; i<a; i++){
        int b;
        cin >> b;
        if(ma.find(b) != ma.end()){
            ma[b] += 1;
        }
        else{
            ma[b] = 1;
        }
    }
    bool te = true;
    for(pair<int,int> test : ma){
        if(test.second > a/2 + a%2){
            te = false;
            break;
        }
    }
    if(te){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    return 0;
}