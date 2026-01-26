#include <iostream>

using namespace std;

int main() {
    while(true){
        int a;
        int hap = 0;
        int max = 0;
        int min = 11;
        bool end = true;
        for(int i = 0; i<6; i++){
            cin >> a;
            if(a != 0){
                end = false;
            }
            if(a > max){
                max = a;
            }
            if(a < min){
                min = a;
            }
            hap += a;
        }
        if(end) break;
        float ans = (float)(hap - max - min)/(float)4;
        cout << ans << endl;
    }
    return 0;
}