#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct customdata{
    int money;
    int people;
};



int main() {
    int a,b;
    cin >> a >> b;
    vector<customdata> vec;
    for(int i =0; i<b; i++){
        customdata test;
        int c,d;
        cin >> c >> d;
        test.money = c;
        test.people = d;
        vec.push_back(test);
    }
    vector<vector<int>> dp(b+1,vector<int>(a,1000000));
    for(int i =0; i<a; i++){
        for(int j =1; j<=b; j++){
            customdata target = vec[j-1];
            if(target.people >= i+1){
                dp[j][i] = min(dp[j-1][i],target.money);
            }
            else{
                dp[j][i] = min(dp[j-1][i],dp[j][i-target.people] + target.money);
            }
        }
    }
    cout << dp[b][a-1];
    return 0;
}