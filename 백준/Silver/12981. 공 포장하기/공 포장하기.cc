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
    int r, g, b;
    cin >> r >> g >> b;
    int ans = 0;
    ans += r / 3;
    ans += g / 3;
    ans += b / 3;
    r = r % 3;
    g = g % 3;
    b = b % 3;
    while (true)
    {
        if (r <= 0 && g <= 0 && b <= 0) break;
        if (r > 0 && g > 0 && b > 0) {
            ans += 1;
            r -= 1;
            g -= 1;
            b -= 1;
        }
        else if ((r == 0 && g == 0) || (r == 0 && b == 0) || (g == 0 && b == 0))
        {
            ans += 1;
            break;
        }
        else {
            ans += 1;
            r -= 1;
            g -= 1;
            b -= 1;
        }
    }
    cout << ans;
}

