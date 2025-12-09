#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int a;
    cin >> a;
    int hap = 0;
    int score = 0;

    for (int i = 0; i < a; i++) {
        string b, d;
        int c;
        cin >> b >> c >> d;

        hap += c;

        if (d == "A+") score += c * 43;
        else if (d == "A0") score += c * 40;
        else if (d == "A-") score += c * 37;
        else if (d == "B+") score += c * 33;
        else if (d == "B0") score += c * 30;
        else if (d == "B-") score += c * 27;
        else if (d == "C+") score += c * 23;
        else if (d == "C0") score += c * 20;
        else if (d == "C-") score += c * 17;
        else if (d == "D+") score += c * 13;
        else if (d == "D0") score += c * 10;
        else if (d == "D-") score += c * 7;
        else score += 0;
    }
    score *= 10;
    float su = (float)score/(float)hap;
    su = round(su);
    cout << fixed;
    cout.precision(2);
    cout << su / 100;

    return 0;
}
