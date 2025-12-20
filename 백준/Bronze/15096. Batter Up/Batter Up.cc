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
    int n;
    cin >> n;
    int hap = 0;
    int su = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a != -1) {
            su += 1;
            hap += a;
        }
    }
    cout << (double)hap / (double)su;

}

