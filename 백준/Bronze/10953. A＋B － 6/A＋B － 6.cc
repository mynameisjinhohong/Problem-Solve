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
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string b;
		cin >> b;
		int c = stoi(b.substr(0, 1));
		int d = stoi(b.substr(2, 1));
		cout << c + d << endl;
	}
}


