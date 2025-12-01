#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1,v2;
    for(int i = 0; i<10; i++){
        int a;
        cin >> a;
        v1.push_back(a);
    }
    for(int i = 0; i<10; i++){
        int a;
        cin >> a;
        v2.push_back(a);
    }
    int a = 0;
    int b = 0;
    for(int i = 0; i<10; i++){
        if(v1[i] > v2[i]){
            a += 1;
        }
        else if(v1[i] < v2[i]){
            b += 1;
        }
    }
    if(a > b){
        cout << "A";
    }
    else if(a < b){
        cout << "B";
    }
    else{
        cout << "D";
    }
    return 0;
}