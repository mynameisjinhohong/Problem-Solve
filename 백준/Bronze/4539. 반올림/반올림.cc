#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =0; i<a; i++){
        int b;
        cin >> b;
        int idx = 1;
        int su = pow(10,idx);
        while(b > su){
            if(b%su >= 5*pow(10,idx-1)){
                 b = b - (b%su) + su;
            }
            else{
                b = b - (b%su);
            }
            idx += 1;
            su = pow(10,idx);
        }
        cout << b<<endl;
    }
    return 0;
}