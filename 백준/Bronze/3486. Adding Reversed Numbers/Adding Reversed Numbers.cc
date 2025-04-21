#include <iostream>
#include <vector>
#include <string>

using namespace std;

int reverseInt(int su)
{
    string tmp = to_string(su);
    string tmp2 = "";
    for(int i =0; i<tmp.size(); i++){
        tmp2 += tmp[tmp.size()-1-i];
    }
    return stoi(tmp2);
}

int main()
{
    int n;
    cin >> n;
    for(int i =0 ;i<n; i++){
        int a,b;
        cin >> a >> b;
        int na = reverseInt(a);
        int nb = reverseInt(b);
        int ans = reverseInt(na+nb);
        cout << ans << endl;
    }
}
