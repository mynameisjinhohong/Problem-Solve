#include <iostream>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;
    int count = 0;
    while(count < a){
        int b;
        cin >> b;
        cout << b <<" ";
        count += b;
        for(int i = 0; i< b-1; i++){
            cin >> b;
        }
    }

    return 0;
}