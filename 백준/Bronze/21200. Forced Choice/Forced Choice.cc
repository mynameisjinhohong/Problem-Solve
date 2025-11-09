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
    int a,b,c;
	cin >> a >> b >> c;
    for (int i = 0; i < c; i++) {
        int d;
        cin >> d;
        bool find = false;
        for (int i = 0; i < d; i++) {
            int e;
            cin >> e;
            if (e == b) {
                find = true;
            }
        }
        if (find) {
            cout << "KEEP\n";
        }
        else {
			cout << "REMOVE\n";
        }
    }
}

