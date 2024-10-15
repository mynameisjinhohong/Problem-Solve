#include <iostream>
#include <string>

int main()
{
	int T;
	std::cin >> T;
	std::string right = "@@@@@";
	std::string down = "";
	std::string dap = "";
	for (int i = 0; i < T; i++) {
		down += "@";
	}
	down += "\n";
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < T; j++) {
			dap += right;
		}
		dap += "\n";
	}
	for (int i = 0; i < T * 3; i++) {
		dap += down;
	}
	for (int i = 0; i < T; i++) {
		for (int j = 0; j < T; j++) {
			dap += right;
		}
		dap += "\n";
	}
	std::cout << dap;
	
	return 0;
}
