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
    while (true) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        int mo = ((a + b + c) % 25) + 1;
        string d;
        cin.ignore();
        getline(cin, d);
        for (int i = 0; i < d.size(); i++) {
            if (d[i] < 123 && d[i] >= 97) {
                int su = d[i] - 97 - mo;
                if (su < 0) {
                    su += 26;
                }
                cout << (char)(su + 97);
            }
            else {
                cout << d[i];
            }
        }
        cout << "\n";
    }
}

