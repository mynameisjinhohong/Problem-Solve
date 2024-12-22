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
		string a;
		cin >> a;
		int b = (int)a[a.size() - 1] - '0';
		if (b % 2 == 0)
			cout << "even"<<endl;
		else
			cout << "odd"<<endl;
	}
	
}
