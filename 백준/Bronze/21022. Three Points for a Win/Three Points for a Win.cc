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
    int a;
    cin >> a;
    vector<int> score1;
    for(int i = 0; i<a; i++){
        int b;
        cin >> b;
        score1.push_back(b);
    }
    vector<int> score2;
    for(int i = 0; i<a; i++){
        int b;
        cin>> b;
        score2.push_back(b);
    }
    int ans = 0;
    for(int i =0; i<a; i++){
        if(score1[i] > score2[i]){
            ans += 3;
        }
        else if (score1[i] == score2[i])
        {
            ans += 1;
        }
    }
    cout << ans;
    
}
