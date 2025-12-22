#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0; i<a; i++){
        string b,c;
        cin >> b >> c;
        string ans = "";
        for(int j =0; j<c.size(); j++){
            int su = (int)c[j] + ((int)b[j%b.size()] - 65);
            if(su > 90){
                su = 64 + (su % 90);
            }
            ans += (char)su;
        }
        cout << "Ciphertext: " << ans << endl;
    }
    return 0;
}