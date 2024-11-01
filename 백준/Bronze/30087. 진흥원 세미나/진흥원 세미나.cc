#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string target = "";
		cin >> target;
		if (target == "Algorithm") {
			cout << 204 << endl;
		}
		else if (target =="DataAnalysis") {
			cout << 207 << endl;
		}
		else if (target =="ArtificialIntelligence") {
			cout << 302 << endl;
		}
		else if (target == "CyberSecurity") {
			cout << "B101" << endl;
		}
		else if (target == "Network") {
			cout << 303 << endl;
		}
		else if (target =="Startup") {
			cout << 501 << endl;
		}
		else if (target == "TestStrategy") {
			cout << 105 << endl;
		}

	}
	return 0;
}
