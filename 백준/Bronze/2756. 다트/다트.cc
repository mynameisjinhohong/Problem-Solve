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
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        int n = 0;
        for (int j = 0; j < 3; j++) {
            double b, c;
            cin >> b >> c;
			double su = b * b + c * c;
            if (su <= 9)
                n += 100;
			else if (su <= 36)
				n += 80;
			else if (su <= 81)
				n += 60;
			else if (su <= 144)
				n += 40;
			else if (su <= 225)
				n += 20;
        }
        int m = 0;
        for (int j = 0; j < 3; j++) {
            double b, c;
            cin >> b >> c;
            double su = b * b + c * c;
            if (su <=9)
                m += 100;
            else if (su <= 36)
                m += 80;
            else if (su <= 81)
                m += 60;
            else if (su <= 144)
                m += 40;
            else if (su <= 225)
                m += 20;
        }
		if (n > m)
			cout << "SCORE: " << n << " to " << m << ", PLAYER 1 WINS." << endl;
		else if (m > n)
			cout << "SCORE: " << n << " to " << m << ", PLAYER 2 WINS." << endl;
		else
			cout << "SCORE: " << n << " to " << m << ", TIE." << endl;
    }
}

