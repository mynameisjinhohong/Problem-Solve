#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cout.tie(NULL);
    int min = 2000;
	string minCity = "No city";
    while (true) {
        string city;
        int cold;
		cin >> city >> cold;
		if (cold < min) {
			min = cold;
			minCity = city;
		}
		if (city == "Waterloo") {
			break;
		}
    }
	cout << minCity;

}