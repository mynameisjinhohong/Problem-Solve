#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
	int p;
	cin >> p;
	for (int i = 0; i < p; i++) {
		int a = 0;
		cin >> a;
		int dap1 = 0, dap2 = 0, dap3 = 0;
		for (int j = 1; j <= a; j++) {
			dap1 += j;
			dap2 += (j * 2) - 1;
			dap3 += (j * 2);
		}
		cout << dap1 << " " << dap2 << " " << dap3 << endl;
	}
	
}
