#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    vector<vector<int>> vec;
    for(int i = 0; i<a; i++){
        vector<int> v;
        for(int j = 0; j<a; j++){
            int d;
            cin >> d;
            v.push_back(d);
        }
        vec.push_back(v);
    }
    bool angry = false;
    int target = vec[b-1][c-1];
    for(int i =0; i<a; i++){
        if(vec[b-1][i] > target){
            angry = true;
            break;
        }
    }
    for(int i = 0; i<a; i++){
        if(vec[i][c-1] > target){
            angry = true;
            break;
        }
    }
    if(angry){
        cout << "ANGRY";
    }
    else{
        cout << "HAPPY";
    }
    
    return 0;
}