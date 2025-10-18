#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <cmath>

using namespace std;


void print(int n) {
    switch (n)
    {
	case 0:
		cout << "0000\n";
        cout << "0  0\n";
		cout << "0  0\n";
		cout << "0  0\n";
		cout << "0000\n";
		break;
    case 1:
        cout << "   1\n";
        cout << "   1\n";
            cout << "   1\n";
            cout << "   1\n";
			cout << "   1\n";
			break;
    case 2:
		cout << "2222\n";
		cout << "   2\n";
		cout << "2222\n";
		cout << "2\n";
		cout << "2222\n";
		break;
	case 3:
		cout << "3333\n";
		cout << "   3\n";
		cout << "3333\n";
		cout << "   3\n";
		cout << "3333\n";
		break;
	case 4:
		cout << "4  4\n";
		cout << "4  4\n";
		cout << "4444\n";
		cout << "   4\n";
		cout << "   4\n";
		break;
	case 5:
		cout << "5555\n";
		cout << "5\n";
		cout << "5555\n";
		cout << "   5\n";
		cout << "5555\n";
		break;
	case 6:
		cout << "6666\n";
		cout << "6\n";
		cout << "6666\n";
		cout << "6  6\n";
		cout << "6666\n";
		break;
	case 7:
		cout << "7777\n";
		cout << "   7\n";
		cout << "   7\n";
		cout << "   7\n";
		cout << "   7\n";
		break;
	case 8:
		cout << "8888\n";
		cout << "8  8\n";
		cout << "8888\n";
		cout << "8  8\n";
		cout << "8888\n";
		break;
	case 9:
		cout << "9999\n";
		cout << "9  9\n";
		cout << "9999\n";
		cout << "   9\n";
		cout << "   9\n";
		break;

    }
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        int su = a[i] - '0';
		print(su);
		cout << "\n";
    }
}

