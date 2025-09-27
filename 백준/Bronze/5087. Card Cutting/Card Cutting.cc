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
    int one = 0;
    int two = 0; 
    while (true)
    {
        string a;
        cin >> a;
        if (a == "#") {
            break;
        }
        if (a == "*") {
            if (one > two) {
                cout << "Cheryl\n";
            }
            else if(two > one) {
                cout << "Tania\n";
            }
            else {
                cout << "Draw\n";
            }
            one = 0;
            two = 0;
            continue;
        }
        int su = 0;
        if (a == "A") {
            su = 1;
        }
        else {
            su = stoi(a);
        }
        if (su % 2 == 0) {
            two += 1;
        }
        else {
            one += 1;
        }
    }
}

