#include <iostream>
#include <vector>

using namespace std;

int su = 0;

int test1(int a){
    if(a == 1 || a == 2){
        su += 1;
        return 1;
    }
    else{
        return (test1(a-1) + test1(a-2));
    }
}

int main() {
    int a;
    cin >> a;
    test1(a);
    cout << su << " ";
    su = 0;
    vector<int> v(a);
    v[0] = 1;
    v[1] = 1;
    for(int i = 2; i<a; i++){
        v[i] = v[i-1] + v[i -2];
        su += 1;
    }
    cout << su;
    
    return 0;
}