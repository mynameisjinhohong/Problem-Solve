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

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    int a;
    cin >> a;
    int first = 36 * 36;
    int second = first * 2;
    int third = first * 3;
    for (int i = 0; i < a; i++) {
        int b;
        cin >> b;
        int hap = 0;
        for (int j = 0; j < b; j++) {
            int c, d;
            cin >> c >> d;
            hap += c * d;
        }
        cout << first / hap << " " << second / hap << " " << third / hap << "\n";
    }
}

