#include <iostream>
#include <vector>
#include <queue>
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
    cin >> a;
    for (int i = 0; i < a; i++) {
        int b, c, d;
        cin >> b >> c >> d;
        cout << b << " " << c << " " << d << "\n";
        int su = 0;
        if (b >= 10) {
            su += 1;
        }
        if (c >= 10) {
            su += 1;
        }
        if (d >= 10) {
            su += 1;
        }
        switch (su)
        {
        case 0:
            cout << "zilch\n\n";
            break;
        case 1:
            cout << "double\n\n";
            break;
        case 2:
            cout << "double-double\n\n";
            break;
        case 3:
            cout << "triple-double\n\n";
            break;
        }
    }
}

