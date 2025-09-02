#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

map<int,int> ans;
void Check(int a){
    while(a >0){
        int tar = a%10;
        ans[tar] += 1;
        a /= 10;
    }
}

int main() {
    int a,b;
    for(int i =0; i<10; i++){
        ans[i] = 0;
    }
    cin >> a >> b;
    for(int i = 0; i<= b-a; i++){
        Check(a+i);
    }
    for(int i =0; i< 10; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
