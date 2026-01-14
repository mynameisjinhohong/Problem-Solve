#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0; i<a; i++)
        {
            int b;
            cin >> b;
            if(b%2 == 0){
                cout << b << " is even\n";
            }
            else{
                cout << b << " is odd\n";
            }
        }
    return 0;
}