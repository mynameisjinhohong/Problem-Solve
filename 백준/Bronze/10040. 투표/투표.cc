#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <vector>
#include <list>
#include <map>
#include <sstream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b;
	cin >> a >> b;
	vector<int> v;
	vector<int> ans;
	for (int i = 0; i < a; i++) {
		int c;
		cin >> c;
		v.push_back(c);
		ans.push_back(0);
	}
	for (int i = 0; i < b; i++) {
		int c;
		cin >> c;
		for (int j = 0; j < a; j++) {
			if (v[j] <= c) {
				ans[j]++;
				break;
			}
		}
	}
	int realAnswer = 0;
	int answer = 0;
	for (int i = 0; i < a; i++) {
		if (ans[i] > answer) {
			answer = ans[i];
			realAnswer = i + 1;
		}
	}
	cout << realAnswer << endl;
}


