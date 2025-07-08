#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;


int main()
{
    int a;
    cin >> a;
    int ans1 = 0;
    int ans2 = 0;
    for(int i =0; i<a; i++){
        string b;
        int c,d,e;
        cin >> b >> c >> d >> e;
        if(b == "B"){
            ans1 += 6000;
        }
        else{
            int su = (c/12)*(d/12) * (e/12);
            ans1 += su *500 + 1000;
            ans2 += su *4000;
        }
    }
    cout << ans1 << endl << ans2;
}
