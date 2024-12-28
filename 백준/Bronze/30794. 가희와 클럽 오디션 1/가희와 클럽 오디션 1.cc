#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
	string lv,n;
	cin >> lv >> n;
	int l = stoi(lv);
	if (n == "miss") {
		cout << 0;
	}
	else if (n == "bad") {
		cout << l * 200;
	}
	else if (n == "cool") {
		cout << l * 400;
	}
	else if (n == "great") {
		cout << l * 600;
	}
	else if (n == "perfect") {
		cout << l * 1000;
	}
	
}
