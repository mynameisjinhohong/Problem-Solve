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
    cout << min(n - 1 + (n) * (m - 1), m - 1 + (m) * n - 1);
}

