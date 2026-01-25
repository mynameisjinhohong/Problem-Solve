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
    while (true)
    {
        int a;
        cin >> a;
        if (a == 0) {
            break;
        }
        int ans = 1;
        for (int i = 0; i < a; i++) {
            int b, c;
            cin >> b >> c;
            ans = (ans * b) - c;
        }
        cout << ans << endl;

    }
}

