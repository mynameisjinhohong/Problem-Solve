#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0; i<a; i++){
        string b,c;
        cin >> b;
        cin >> c;
        int ans = 0;
        for(int j = 0; j<b.size(); j++){
            if(b[j] != c[j]) ans++;
        }
        cout << "Hamming distance is " << ans <<".\n";
    }
    
    return 0;
}