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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long a, b;
        cin >> a >> b;
        cout << (a / b) * (a / b) << "\n";
    }
}

