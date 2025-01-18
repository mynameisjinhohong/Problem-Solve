#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int w,h;
	cin >> w >> h;
	cout << std::setprecision(10) << w + h - sqrt(pow(w, 2) + pow(h, 2));
	
}
