#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


int main()
{
    string a;
    int n;
    cin >> a >> n;
    string ans = "0";
    int best = 0;
    for(int i =0; i<n; i++){
        string b;
        cin >> b;
        if(i == 0){
            ans = b;
        }
        int hap =0;
        int tmp =0;
        for(int j = 0; j<4; j++){
            tmp += pow((a[j]-'0') - (b[j]-'0'),2);
        }
        hap += tmp;
        tmp = 0;
        for(int j = 4; j< 6; j++){
            tmp += pow((a[j]-'0') - (b[j]-'0'),2);
        }
        hap = hap * tmp;
        tmp = 0;
        for(int j =6; j<8; j++){
            tmp += pow((a[j]-'0') - (b[j]-'0'),2);
        }
        hap = hap * tmp;
        if(hap > best){
            ans = b;
            best = hap;
        }
        else if (hap == best)
        {
            if(stoi(b) <= stoi(ans)){
                ans = b;
            }
        }
    }
    cout << ans;

}
