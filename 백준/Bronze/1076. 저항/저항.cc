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
    string a;
    cin >> a;
    long long ans = 0;
    if (a == "brown") {
        ans += 10;
    }
    else if (a == "red") {
        ans += 20;
    }
    else if (a == "orange") {
        ans += 30;
    }
    else if (a == "yellow") {
        ans += 40;
    }
    else if (a == "green") {
        ans += 50;
    }
    else if (a == "blue") {
        ans += 60;
    }
    else if (a == "violet") {
        ans += 70;
    }
    else if (a == "grey") {
        ans += 80;
    }
    else if (a == "white") {
        ans += 90;
    }
    cin >> a;
    if (a == "brown") {
        ans += 1;
    }
    else if (a == "red") {
        ans += 2;
    }
    else if (a == "orange") {
        ans += 3;
    }
    else if (a == "yellow") {
        ans += 4;
    }
    else if (a == "green") {
        ans += 5;
    }
    else if (a == "blue") {
        ans += 6;
    }
    else if (a == "violet") {
        ans += 7;
    }
    else if (a == "grey") {
        ans += 8;
    }
    else if (a == "white") {
        ans += 9;
    }
    else if (a == "black") {
        ans += 0;
    }
    cin >> a;
    if (a == "brown") {
        ans *= 10;
    }
    else if (a == "red") {
        ans *= 100;
    }
    else if (a == "orange") {
        ans *= 1000;
    }
    else if (a == "yellow") {
        ans *= 10000;
    }
    else if (a == "green") {
        ans *= 100000;
    }
    else if (a == "blue") {
        ans *= 1000000;
    }
    else if (a == "violet") {
        ans *= 10000000;
    }
    else if (a == "grey") {
        ans *= 100000000;
    }
    else if (a == "white") {
        ans *= 1000000000;
    }   
    cout << ans;
}

