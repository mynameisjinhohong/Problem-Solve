#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <cmath>

using namespace std;

struct val {
    int last;
    int len;
    int k;
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int b, c, d;
        cin >> b >> c >> d;
        int ans = 0;
        for (int j = 0; j < b; j++) {
            int w, x, y, z;
            cin >> w >> x >> y >> z;
            ans += max(w * c + y * d, c * x + d * z);
        }
        cout << "Data Set " << i + 1 << ":\n" << ans << "\n\n";
    }

}

