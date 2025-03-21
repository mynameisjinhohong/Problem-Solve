#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	vector<vector<int>> arr1;
	for (int i = 0; i < a; i++) {
		vector<int> temp;
		for (int j = 0; j < b; j++) {
			int x;
			cin >> x;
			temp.push_back(x);
		}
		arr1.push_back(temp);
	}
	int c, d;
	cin >> c >> d;
	vector<vector<int>> arr2;
	for (int i = 0; i < c; i++) {
		vector<int> temp;
		for (int j = 0; j < d; j++) {
			int x;
			cin >> x;
			temp.push_back(x);
		}
		arr2.push_back(temp);
	}
	vector<vector<int>> res;
	for (int i = 0; i < a; i++) {
		vector<int> temp;
		for (int j = 0; j < d; j++) {
			int tmp = 0;
			for (int k = 0; k < b; k++) {
				tmp += arr1[i][k] * arr2[k][j];
			}
			temp.push_back(tmp);
		}
		res.push_back(temp);
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < d; j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
}
