#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b,c;
		cin >> a >> b>>c;
		cout << a*(c-1)+b << endl;
	}
}
