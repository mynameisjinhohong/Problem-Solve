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
    long long n;
    cin >> n;
    vector<int> dice;
    for (int i = 0; i < 6; i++) {
        int a;
        cin >> a;
        dice.push_back(a);
    }
    //1개 최소값
    int min = dice[0];
    for (int i = 1; i < 6; i++) {
        if (dice[i] < min) {
            min = dice[i];
        }
    }
    //2개 최소값
    int min2 = dice[0] + dice[1];
    for (int i = 0; i < 6; i++) {
        int temp = 0;
        for (int j = 0; j < 6; j++) {
            if (i == j || i + j == 5) {
                continue;
            }
            temp = dice[i] + dice[j];
            if (temp < min2) {
                min2 = temp;
            }
        }
    }
    //3개 최소값
    int min3 = dice[0] + dice[1] + dice[2];
    for (int i = 0; i < 6; i++) {
        int temp;
        for (int j = 0; j < 6; j++) {
            if (i == j || i + j == 5) {
                continue;
            }
            for (int k = 0; k < 6; k++) {
                if (k == i || k == j || k + j == 5 || k + i == 5) {
                    continue;
                }
                temp = dice[i] + dice[j] + dice[k];
                if (temp < min3) {
                    min3 = temp;
                }
            }
        }
    }


    long long ans = 0;
    if (n == 1) {
        int max = dice[0];
        for (int i = 0; i < 6; i++) {
            ans += dice[i];
            if (dice[i] > max) {
                max = dice[i];
            }
        }
        ans -= max;
    }
    else {
        //3개 
        long long three = 4 * min3;
        //2개 면
        long long two = (n*8-12) * min2;
        //1개 면
        long long one = (((n-2) * (n-1) * 4) + ((n-2) * (n-2))) * min;
        ans = one + two + three;
        //cout << 4 << ":" << (n * 8 - 12) << ":" << (((n - 2) * (n - 1) * 4) + ((n - 2) * (n - 2))) << endl;
        //cout << one << ":" << two << ":" << three << endl;
    }
    cout << ans;
}

