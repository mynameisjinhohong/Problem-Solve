#include <iostream>

using namespace std;

int main() {
    string a;
    cin >> a;
    int sum = ((a[0] - '0') * 2)+((a[1] - '0') * 7)+((a[2] - '0') * 6)+((a[3] - '0') * 5)+((a[4] - '0') * 4)+((a[5] - '0') * 3) +((a[6] - '0') * 2);
    sum %= 11;
    if(sum == 0){
        cout << 'J';
    }
    else if(sum == 10){
        cout << 'Z';
    }
    else{
        cout << (char)(sum+64);
    }
    return 0;
}