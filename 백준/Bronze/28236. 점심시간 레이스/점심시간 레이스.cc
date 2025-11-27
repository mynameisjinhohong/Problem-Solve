#include <iostream>

using namespace std;

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    int ans = 0;
    int record = 200001;
    for(int i = 0; i<k; i++){
        int a,b;
        cin >> a >> b;
        if(record > a-1 + m-b){
            ans = i+1;
            record = a-1 + m-b;
        }
    }
    cout << ans;
    return 0;
}