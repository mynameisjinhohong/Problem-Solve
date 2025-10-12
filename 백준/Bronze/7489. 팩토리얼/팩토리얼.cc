#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <cmath>

using namespace std;




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    int a;
    cin >> a ;
    for (int i = 0; i < a; i++) {
        int b;
        cin >> b;
        int su = 1;
        for (int j = 1; j <= b; j++) {
            su *= j;
            while (su % 10 == 0) {
                su = su / 10;
            }
            int idx = 0;
            int test = j;
            while (test > 0) {
                test /= 10;
                idx += 1;
            }
            int ten = 1;
            for (int k = 0; k < idx; k++) {
                ten *= 10;
            }
            su %= ten;
        }
        cout << su%10<<"\n";
    }

}

