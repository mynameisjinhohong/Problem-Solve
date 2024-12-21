#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	int m;
	cin >> m;
	int sum = 0;
	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;
		sum += v[b - 1];
	}
	cout << sum;
}
