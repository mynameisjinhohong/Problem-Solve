#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> ans(3,0);
    vector<int> pos(3);
    pos[0] = 1;
    pos[1] = 2;
    pos[2] = 3;
    for(int i = 0; i<a; i++){
        int b,c,d;
        cin >> b >> c >> d;
        for(int j = 0; j < 3; j++){
             if(pos[j] == b){
                 pos[j] = c;
             }
             else if(pos[j] == c){
                 pos[j] = b;
             }
        }
        for(int j = 0; j < 3; j++){
            if(pos[j] == d){
                ans[j] += 1;
            }
        }
    }
    int realAns = 0;
    for(int i = 0; i<3; i++){
        if(ans[i] > realAns) realAns = ans[i];
    }
    cout << realAns;
    return 0;
}