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
    int n,h,v;
    cin >> n >> h >> v;
    int ans = 0;
    if(h*v > ans){
        ans = h*v;
    }
    if (h*(n-v) > ans)
    {
        ans = h*(n-v);
    }
    if ((n-h)*v > ans)
    {
        ans = (n-h)*v;
    }
    if ((n-h)*(n-v) > ans)
    {
        ans = (n-h)*(n-v);
    }
    cout << ans * 4;
    
    
    
}
