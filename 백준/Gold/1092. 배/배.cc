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
    vector<int> crain;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		crain.push_back(b);
	}
	sort(crain.begin(), crain.end());
	int b;
	cin >> b;
	vector<int> box;
	for (int i = 0; i < b; i++) {
		int c;
		cin >> c;
		box.push_back(c);
	}
	sort(box.begin(), box.end());
	vector<bool> idx(b,false);
	vector<int> crainIdx(a,0);
	if (crain.back() < box.back()) {
		cout << -1;
		return 0;
	}
	else {
		int before = 0;
		for (int i = 0; i < a; i++) {
			for (int j = before; j < b; j++) {
				if (crain[i] < box[j]) {
					crainIdx[i] = j - 1;
					before = max(j - 1, 0);
					break;
				}
				if (j == b - 1) {
					crainIdx[i] = j;
					before = j;
				}
			}
		}
		int ans = 0;
		int count = 0;
		while (count < b)
		{
			ans += 1;
			for(int i = 0; i<a; i++)
			{
				if (crainIdx[i] < 0) {
					continue;
				}
				while (idx[crainIdx[i]] == true) {
					crainIdx[i] -= 1;
					if (crainIdx[i] < 0) {
						break;
					}
				}
				if (crainIdx[i] < 0) {
					continue;
				}
				idx[crainIdx[i]] = true;
				crainIdx[i] -= 1;
				count += 1;
			}
		}
		cout << ans;

	}

}

