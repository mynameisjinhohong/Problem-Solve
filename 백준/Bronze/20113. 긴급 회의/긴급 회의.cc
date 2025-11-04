#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> b(a+1);
    for(int i =0; i<a; i++){
        int c;
        cin >> c;
        b[c] += 1;
    }
    int best = 0;
    string ans = "skipped";
    for(int i = 1; i <= a; i++){
        if(b[i] > best){
            best = b[i];
            ans = to_string(i);
        }
        else if(b[i] == best){
            ans = "skipped";
        }
    }
    cout << ans;
    return 0;
}