#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i =0; i<t; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int su1 = a + b*d;
        int su2 = b*c;
        if(su1== su2){
            cout << "does not matter\n";
        }
        else if(su1 < su2){
            cout << "parallelize\n";
        }
        else{
            cout << "do not parallelize\n";
        }
    }
    return 0;
}