#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		long long one, two, three, four;
		cin >> one>> two>> three>> four;
		if (one * two > three * four) {
			cout << "TelecomParisTech" << endl;
		}
		else if (one*two == three*four) {
			cout << "Tie" << endl;
		}
		else {
			cout << "Eurecom" << endl;
		}

	}
	return 0;
}
