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
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        for (int j = 1; j < a; j++) {
            for (int k = j+1; k < a; k++) {
                if ((j * j + k * k + b) % (j * k) == 0) {
                    ans += 1;
                }
            }
        }
        cout << ans << "\n";
    }

}

