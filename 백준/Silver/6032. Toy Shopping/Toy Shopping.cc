#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;
    vector<double> v(a);
    vector<int> price(a);
    for(int i = 0; i<a; i++){
        double b,c;
        cin >> b >> c;
        v[i] = b/c;
        price[i] = (int)c;
    }
    int ans = 0;
    int idx[] = {-1,-1,-1};
    double best = 0;
    int bestIdx = 0;
    for(int i = 0; i<a; i++){
        if(v[i] > best){
            best = v[i];
            bestIdx = i;
        }
    }
    ans += price[bestIdx];
    idx[0] = bestIdx;
    best = 0;
    for(int i = 0; i<a; i++){
        if(idx[0] == i) continue;
        if(v[i] > best){
            best = v[i];
            bestIdx = i;
        }
    }
    ans += price[bestIdx];
    idx[1] = bestIdx;
    best = 0;
    for(int i = 0; i<a; i++){
        if(idx[0] == i || idx[1] == i) continue;
        if(v[i] > best){
            best = v[i];
            bestIdx = i;
        }
    }
    ans += price[bestIdx];
    idx[2] = bestIdx;
    cout << ans << "\n" << idx[0]+1 << "\n" << idx[1]+1 << "\n" << idx[2]+1;
    return 0;
}