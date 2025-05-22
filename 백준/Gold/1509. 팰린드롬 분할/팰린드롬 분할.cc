#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <climits>

using namespace std;

string n;

int Find(int start,int end){
    if(start == end){
        return 0;
    }
    int best = -1;
    int bestStart = -1;
    int bestEnd = -1;
    for(int i = start; i<end; i++){
        bool find = false;
        for(int j = end-1; j>=i; j--){
            for(int k = 0; i+k <= j-k; k++){
                if(n[i+k] != n[j-k]){
                    break;
                }
                if(j-k-i-k <2){
                    find = true;
                    break;
                }
            }
            if(find){
                if(j+1-i > best){
                    best = j+1-i;
                    bestStart = i;
                    bestEnd = j+1;
                }
                break;
            }
        }
    }
    return Find(start,bestStart) + 1 + Find(bestEnd,end);
}

bool CheckFel(int start,int end){
    int idx =0;
    while (start + idx <= end - idx)
    {
        if(n[start+idx] != n[end-idx]){
            return false;
        }
        idx += 1;
    }
    return true;
    
}

int main()
{
    string a; 
    cin >> a;
    vector<vector<bool>> isPal(a.size(), vector<bool> (a.size(),false));
    for(int i = 0; i<a.size(); i++){
        for(int j = 0; j<a.size()-i; j++){
            if(i < 2){
                if(a[j] == a[j+i]){
                    isPal[j][j+i] = true;
                }
            }
            else{
                if(a[j] == a[j+i] && isPal[j+1][j+i-1]){
                    isPal[j][j+i] = true;
                }
            }
        }
    }
    vector<int> dp(a.size(),2501);
    for(int i =0; i<a.size(); i++){
        if(isPal[0][i]){
            dp[i] = 1;
            continue;
        }
        for(int j =1; j<i+1; j++){
            if(isPal[j][i]){
                dp[i] = min(dp[i],dp[j-1]+1);
            }
        }
    }
    cout << dp[a.size()-1];
    
    
}
