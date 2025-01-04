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
		for (int j = 0; j < 5*p; j++) {
			cout << '@';
		}
		cout << endl;
	}
	for (int j = 0; j < 3*p; j++) {
		for (int i = 0; i < p; i++) {
			cout << '@';
		}
		for (int i = 0; i < p; i++) {
			cout << "   ";
		}
		for (int i = 0; i < p; i++) {
			cout << '@';
		}
		cout << endl;
	}
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < 5*p; j++) {
			cout << '@';
		}
		cout << endl;
	}
	
}
