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
    int n, m;
    cin >> n >> m;
    if (n > m) {
        n = n % m;
    }
    int ans = m-1;
    int son = n;
    int mom = m;
    for (int i = 1; i < m; i++) {
        son = n * i;
        if (son % mom == 0) {
            ans -= 1;
        }
    }
    cout << ans;
}

