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
    int n, m;
    cin >> n >> m;
    vector<bool> light(n,false);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            light[i] = true;
        }
    }
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        b -= 1;
        switch (a)
        {
        case 1:

            light[b] = c == 0 ? 0 : 1;
            break;
        case 2 :

            for (int i = 0; i < c - b; i++) {
                light[b + i] = light[b + i] ? false : true;
            }
            break;
        case 3:

            for (int i = 0; i < c - b; i++) {
                light[b + i] = false;
            }
            break;
        case 4:

            for (int i = 0; i < c - b; i++) {
                light[b + i] = true;
            }
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << (light[i] ? 1 : 0) << " ";
    }

}

