#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =0; i<a; i++){
        int su;
        cin >> su;
        cout << su/25 << " ";
        su -= 25 * (su/25);
        cout << su/10 << " ";
        su -= 10 * (su/10);
        cout << su/5 << " ";
        su -= 5 * (su/5);
        cout << su << "\n";
    }
    return 0;
}